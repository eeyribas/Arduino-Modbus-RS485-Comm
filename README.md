# Arduino-Modbus-RS485-Comm
Contains examples of Modbus (RS485) communication with Arduino. The Arduino RS485 Module is used for RS485 communication. In the examples, Arduino Mega is used as the Master, and Arduino Uno is used as the Slave. 
These examples are:

1. MasterReceiver-SlaveTransmitter: The Slave Arduino reads the value from the potentiometer connected to pin A0 and sends data to the Master Arduino based on this value. 
On the Master Arduino, the four LEDs connected to it are controlled according to the data received from the Slave Arduino.

2. MasterTransmitter-SlaveReceiver: Two values are sent from the Master Arduino to the Slave Arduino at specific intervals. On the Slave Arduino, based on the two values received from the Master Arduino, 
it turns its connected LED on or off.

3. SendingDataFromSerialMonitor: The Master Arduino sends the value received from the Serial Monitor to the Slave Arduino. On the Slave Arduino, based on the value received from the Master Arduino, 
it turns its connected LED on or off.

Programming Language: C/C++ Programming Language

IDE: Arduino IDE Version - 2.2.0

Arduino Used: Arduino Mega, Arduino Uno

Arduino IDE Version: 2.2.0

Arduino Connection Diagram: The Master Arduino and Slave Arduinos are connected using the RS485 Module to enable Modbus (RS485) communication between them. 
The D8 pin is used as the Modbus Enable Pin on both the Arduino Mega and Arduino Uno. On the Arduino Mega, the Modbus Rx and Tx pins are RX1 (Pin 19) and TX1 (Pin 18). 
On the Arduino Uno, the Modbus Rx and Tx pins are RX (Pin 0) and TX (Pin 1).