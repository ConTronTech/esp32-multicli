#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <DNSServer.h>
#include <esp_wifi.h>
#include <SPIFFS.h>
#include "home.html.h"
#include "info.html.h"
#include "cams.html.h"
#include "styles.css.h"

const char *apSSID = "YourAPSSID";
const char *apPassword = "YourPassword";
wifi_sta_list_t wifi_sta_list;
tcpip_adapter_sta_list_t sta_list;

IPAddress IP;
DNSServer dnsServer;
AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

void handleCSS(AsyncWebServerRequest *request) {
  request->send_P(200, "text/css", (const uint8_t*)styles_css, strlen_P(styles_css));
}

void handleRoot(AsyncWebServerRequest *request) {
  esp_wifi_ap_get_sta_list(&wifi_sta_list);
  tcpip_adapter_get_sta_list(&wifi_sta_list, &sta_list);

  String connectedStations = ""; // Clear the list for new client
  for(int i = 0; i < wifi_sta_list.num; i++) { // iterate over connected devices
    char mac[18] = { 0 };
    sprintf(mac, "%02x:%02x:%02x:%02x:%02x:%02x",
          sta_list.sta[i].mac[0], sta_list.sta[i].mac[1], sta_list.sta[i].mac[2],
          sta_list.sta[i].mac[3], sta_list.sta[i].mac[4], sta_list.sta[i].mac[5]);
    IPAddress ip(sta_list.sta[i].ip.addr);
    connectedStations += "<div><b>IP: " + ip.toString() + " MAC: " + mac + "</b></div>";
  }

  String htmlContentReplace = String(home_html);
  htmlContentReplace.replace("<!--HERE-->", connectedStations);
  request->send(200, "text/html", htmlContentReplace);
}

void handleCamera(AsyncWebServerRequest *request) {
  request->send(200, "text/html", cams_html);
}

void handleInfo(AsyncWebServerRequest *request) {
  request->send(200, "text/html", info_html);
}

+++

void setup() {
  Serial.begin(115200);
  WiFi.softAP(apSSID, apPassword);
  delay(100);
  dnsServer.start(53, "*", WiFi.softAPIP());
  server.on("/styles.css", HTTP_GET, handleCSS);
  server.on("/home", HTTP_GET, handleRoot);
  server.on("/cams", HTTP_GET, handleCamera);
  server.on("/info", HTTP_GET, handleInfo);
  server.addHandler(&ws);
  server.begin();
}

void loop() {
  dnsServer.processNextRequest();
}
