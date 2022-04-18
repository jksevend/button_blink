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
