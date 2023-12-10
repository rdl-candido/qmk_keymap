## Steps to build the firmware

1. Clone the repo into the qmk firware home directory and also within the keymaps folder of the keyboard you're building

For example: /<path>/qmk_firmware/ferris/sweep/keymaps/rdl-candido

2. Build the firmware

```
qmk compile -kb ferris/sweep -km rdl-candido
```

3. The above will generate a .hex file, use that with the qmk gui to flash each micro-controler.

Make sure to click in Tools > EEPROM > select which side you are flashing

PS: The file is the same

## How to flash the keyboard

### Left-side

```qmk flash -kb ferris/sweep -km rdl-candido -bl avrdude-split-left```

### Right-side

```qmk flash -kb ferris/sweep -km rdl-candido -bl avrdude-split-right```

### Quick links:

Keycodes: https://docs.qmk.fm/#/keycodes
