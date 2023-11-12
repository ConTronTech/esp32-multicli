// index.sample.h
#ifndef CAMS_SAMPLE_H
#define CAMS_SAMPLE_H

const char* cams_html = R"rawliteral(
<html>
<head>
  <title>ESP32 Camera Feed</title>
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" type="text/css" href="styles.css">
</head>
<body>
  <div class="navbar">
    <a href="/home">Home</a>
    <a href="/cams">Cams</a>
    <a href="/info">Info</a>
  </div>
  <div id="divider"></div>
  <h3>ESP32 Camera Feed</h3>
  <div class="container">
  <div class="row">
    <div class="col-md-6 card">
      <div class="camera-container">
        <img src="http://192.168.4.2:81" class="camera" id="camera1">
      </div>
    </div>
    <div>
    <div class="col-md-6 card">
      <div class="camera-container">
      <img src="http://192.168.4.3:81" class="camera" id="camera2">
      </div>
    </div>
  </div>
</div>
</body>
</html>
)rawliteral";

#endif
