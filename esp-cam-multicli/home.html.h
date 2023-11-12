// home.html.h
#ifndef HOME_HTML_H
#define HOME_HTML_H

const char* home_html = R"rawliteral(
<html>
<head>
  <title>ESP32 Camera Feed</title>
  <link rel="icon" type="image/x-icon" href="/jefferyevil.ico" />
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
  <h3>Home page</h3>
  <div class="card-container">
	<div class="card">
		<div class="card-spacer">
		  <!--HERE-->
		</div>
    </div>
  </div>
</body>
</html>
)rawliteral";


#endif
