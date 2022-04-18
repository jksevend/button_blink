# Button blink

Light up an external LED connected to GPIO pin 15 with a button connected to GPIO pin 14 controlled by pi pico.

This was done on Windows 11 with following the setup guide https://www.arnabkumardas.com/platforms/rp2040/raspberry-pi-pico-sdk-and-toolchain-setup-in-windows-10/ 

To build the project run the following steps

```
1) mkdir build && cd build
2) cmake -G "NMake Makefiles" ..
3) nmake
```

Drag and drop the ```button_blink.uf2``` file into your connected pi. Try pressing the button - the LED should blink.



Following image shows the circuit used:

* LED connected with 330Ω resistor via GPIO 15 and GND 38.
* Button connected via GPIO 14 and 3V3(OUT) 36

<a href="https://ibb.co/MD1JmW1"><img src="https://i.ibb.co/jvwjSBw/20220418-163812.jpg" alt="20220418-163812" border="0"></a>
