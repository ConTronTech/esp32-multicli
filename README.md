#esp32-multicli
this is a esp32 website that will display your esp32-camera moduals or ip cameras

# requierd equipment   
x2 - ESP32-cam ov2640 
x1 - ESP32 - any variant
arduino ide
A mobile device

# setup gide
lets set up your esp cams
so download the <a href="https://github.com/easytarget/esp32-cam-webserver">ESP-cam-server</a> and open it in your arduino ide
next you want to change a few things in the esp cam files to make it connect to a wifi network
1. you should be on the first file when you open the ".ino" of the esp-cam.
<br>![Arduino_IDE_zEuilw9N0A](https://github.com/ConTronTech/esp32-multicli/assets/120324560/137e92e3-dc75-4962-b86c-26420b840db7)</br>

2. then you want to change 2 lines where it says "// Primary config, or defaults." to "myconfig.sample.h" insted of "myconfig.h" to avoid the esp-cam going into accsess point mode where it will host its own network.
<br>![Arduino_IDE_qZ379ydVTt](https://github.com/ConTronTech/esp32-multicli/assets/120324560/89a88d7a-cee6-43dd-aca0-3a23db1bd614)</br>
<br>![Arduino_IDE_jBiUAHnRmR](https://github.com/ConTronTech/esp32-multicli/assets/120324560/06b1d03f-d849-4996-8825-330f8bc1e879)</br>

3. now let set up your SSID and password for the esps "note this will need to be the same SSID and password for all the devices" make a ssid and password for your device and save it now program both of your esp-cams.
<br>![Arduino_IDE_kWTuYaMcgf](https://github.com/ConTronTech/esp32-multicli/assets/120324560/4c2ba549-844d-4aaf-abe7-9a851516e751)</br>
<br>![Arduino_IDE_vyTp5eTZmQ](https://github.com/ConTronTech/esp32-multicli/assets/120324560/7b23e964-f546-4883-a7c2-f39f2f336a33)</br>

4. time for the esp32 itself open the provided "esp-cam-multicli" ino file and type in your SSID and password you made previously then upload it to the board
<br>![Arduino_IDE_AqCR28QMhE](https://github.com/ConTronTech/esp32-multicli/assets/120324560/b6264273-260e-4c50-a4db-3c45b4a7b8f5)</br>

5. play with your new toy
