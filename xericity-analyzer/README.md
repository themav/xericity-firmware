Xericity converter as a RS-422/485(and maybe 232) protocol analyzer.
====================================================================

This directory contains two parts.  
Firstly, it contains firmware that in combination with `hid-listen` can be used to dump messages coming from the board's UART. 
Secondly, it has a program that should be ran host side that aids in analysis of serial protocol messages to help debug or reverse engineer protocols, especially those belonging to keyboard peripheral devices.

NOTE: THE PROJECTS IN THIS FOLDER ARE SUPPLEMENTAL TO THE ACTUAL CONVERTER FIRMWARE AND DO NOT CONVERT KEYBOARDS OR OTHER PERIPHERAL DEVICES.


Getting Started
---------------

The firmware that turns the Xericity hardware into a protocol analyzer is based on the tmk_keyboard library for ease of maintenance. It will show up as an HID device to your host but it will not do much else other than dump the incoming messages from the UART. Building, uploading, and running the firmware is the same as the actual converter firmware, and will not be covered here. TL;DR: `make; dfu-programmer; <reset MCU>`.

The host-side software is where the real brains occurs. This software is a wrapper around `hid-listen` and eases analysis of the serial data. As some of these protocols may be archaic, the protocol analysis software allows for changing paramaters such as:
* Word size (defaults to 8 bits/1 byte)
* Message length (the number of words in each message)
* Word offsets (where in each message different parts of the protocol are sent)
* Bit masking (Where in each word bits of the protocol are sent)

There is also the option to dump data to file as well for further analysis.

