# MIDI-Mancala
![mancala_pic2](https://github.com/mbelgpagan/MIDI-Mancala/assets/157041254/69f13a44-79ea-443a-abd0-36755686f1f4)

This device is a tangible token-based sequencer and midi controller modeled after the classic Mancala board game. The usage of a board game as a musical instrument explores the sonification of games as interactive performance tools.

The LDR module in each hole detects the amount of light passing through the translucent pebbles. This data is mapped to one step in a sequencer and affects the pitch of that step. So, the more pebbles a hole contains, the less light passes through, and the higher the pitch of that step. The knobs on the side are mapped to global parameters volume and tempo.

The electronic components consist of a Teensy 4.1, twelve Light Dependent Resistor(LDR) modules, and two potentiometers. The software components consist of an Arduino IDE sketch and a PureData patch that smooth, map, and manipulate the data from the sensors. The housing was designed in Fusion 360 and constructed out of pine and plywood. 
![mancala_pic1](https://github.com/mbelgpagan/MIDI-Mancala/assets/157041254/5c360ea8-f9c2-482a-b776-f5fd4c56778e)
![mancala_pic2](https://github.com/mbelgpagan/MIDI-Mancala/assets/157041254/69f13a44-79ea-443a-abd0-36755686f1f4)
