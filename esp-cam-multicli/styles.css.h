const char styles_css[] PROGMEM = R"rawliteral(
    body {
      background-color: black;
      color: white;
    }

    .card {
      border: 5px solid pink;
      border-radius: 10px;
      margin: 10px;
    }

    .card-container {
      max-width: 710px;
      margin: 0 auto;
    }

    .card-spacer {
      padding: 10px;
    }

    .navbar {
      overflow: hidden;
      background-color: #333;
    }

    .navbar a {
      float: left;
      display: block;
      color: white;
      text-align: center;
      padding: 14px 16px;
      text-decoration: none;
    }

    .navbar a:hover {
      background-color: #ddd;
      color: black;
    }

    .camera-container {
      position: relative;
      width: 100%; /* or specify a specific width */
      height: 0;
      padding-bottom: 75%; /* Adjust this value based on your needs */
      overflow: hidden;
    }

    .camera {
      position: absolute;
      top: 0;
      left: 0;
      width: 100%;
      height: 100%;
    }  

    #divider {
        height: 2px;
        background-color: #ccc;
        margin: 20px 0;
    }

    /* Media queries for responsiveness */
    @media (max-width: 600px) {
      .card-container {
        max-width: 100%;
      }
    }
)rawliteral";