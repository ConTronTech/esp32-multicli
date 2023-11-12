// index.sample.h
#ifndef INFO_SAMPLE_H
#define INFO_SAMPLE_H

const char* info_html = R"rawliteral(
<html>
<head>
  <title>Info</title>
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
  <h3>INFO ON THIS DEVICE</h3>
  <div class="card-container">
	<div class="card">
		<div class="card-spacer">
		  <div><b>### steps on how to use this tool ###</b></div>
		  <div><b>#1 > turn on the cameras</b></div>
		  <div><b>#2 > turn on the host controller</b></div>
		  <div><b>#3 > connect to wifi</b></div>
		</div>
    </div>
  </div>
  <div class="card-container">
	<div class="card">
		<div class="card-spacer">
		  <div><b>"Note that the first and second steps are interchangeable. It does not matter what device you turn on first. As long as the device you are using to view this tool (AKA: phone, computer, tablet) is the last client connected"</b></div>
		</div>
    </div>
  </div>
  <div class="card-container">
	<div class="card">
		<div class="card-spacer">
		  <div><b>Oh hey look at you, You wanna be your own little cyberpunk character good on you pal. Theres not much you can do with this "HACKER TOOL" so dont get your hopes up fucker and dont get arested. Have fun >; )</b></div>
		</div>
    </div>
  </div>
  <div class="card-container">
	<div class="card">
		<div class="card-spacer">
		  <div><b>To see more of my projects you can find me on github where i will be makeing more projects. </b><a href="https://github.com/ConTronTech" target="_blank">https://github.com/ConTronTech</a></div>
		</div>
    </div>
  </div>
</body>
</html>
)rawliteral";

#endif
