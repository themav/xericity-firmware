Xerox Daybreak/Docutech to USB Keyboard Protocol Converter
===============================================
While the target MCU is the ATMega32U4, other USB capable AVR microcontrollers also work. It should be set with Vcc as 5V and a 16MHz clock speed.


README FIRST
------------
This converter was developed with a Xerox 6085 keyboard, model 65D.

Unimap is the only keymap supported. Changes if necessary can be made in the standard Unimap fashion, including the TMK website's keymap editor. Please see the TMK documentation for how to modify firmware files via the website's keymap editor. You will need to select the "USB-USB" converter on the website [or click here](http://www.tmk-kbd.com/tmk_keyboard/editor/unimap/?usb_usb), upload the Xericity converter firmware file, and then make your changes. The resulting file will be renamed to "unimap.hex".

The default keymap has sane defaults, with most keys doing what they say they will do.
The left-hand key bank is set up for F1-F10, like on many XT/AT-class keyboards. The number pad is setup as you would expect as well; the "clear" button can be used as Num Lock.
The half-height top row of keys from left to right: Esc, Meta/Win, Home, End; Left, Down, Up, Right; Page up, Page dn.

Connector
---------
On the host/converter:

    5Pin DIN
       ___ ___
      /  |_|  \
     / 8  7  6 \
    | 5   4   3 |
     \_ 2   1 _/
       \_____/
    (receptacle/female side)
DO NOT FORGET TO MIRROR FOR MALE CONENCTOR ON KEYBOARD CABLE !


The MCU data pin here is for the hardware USART, but this can be changed in config.h. Note: Software UART has not been tested.

    Pin Function        MCU
    ----------------------------------
    4   5V              VCC
    3   GND             GND (Also connected to shield)
    1   DATA            PD2 (Most likely marked "RX1" on your board)

    All others should be left N/C

On the keyboard PCB:

   FIXME/TODO 


Protocol
--------
Signal: Asynchronous serial, Positive logic, 9600baud, Least bit first.
Frame format: 1-Start bit(Lo), 8-Data bits, non-Parity, 1-Stop bit.



Build Firmware
--------------
Use 'make' to build the firmware for the Xericity converter:

    $ make clean
    $ make 

If you are using an ATMega32U2 board instead of a 32U4 board, use following commands:

    $ make -f Makefile.unimap.32u2 clean
    $ make -f Makefile.unimap.32u2
