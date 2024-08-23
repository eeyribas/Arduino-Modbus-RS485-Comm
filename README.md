# Arduino-Modbus-RS485-Communication
Contains examples of Modbus (RS485) communication with Arduino. In the examples, Arduino Mega is used as the Master, and Arduino Uno is used as the Slaves. 
The Arduino RS485 Module is used for RS485 communication. There are three examples in the repository. These examples are:

1. MasterReceiver-SlaveTransmitter: The Master Arduino has four LEDs connected to it. Based on the data received from the Slaves, the Master controls these LEDs.

2. MasterTransmitter-SlaveReceiver: The Master Arduino sends data to the Slave Arduino. The Slave turns on an LED based on the received data.

3. SendingDataFromSerialMonitor: The Master receives data via the Serial Monitor and sends this data to the Slave. The Slave turns on an LED based on the received data.

Arduino Used: Arduino Mega, Arduino Uno

Arduino IDE Version: 2.2.0

Arduino Connection Diagram: The Master and Slave are connected using the RS485 Module with the Enable Pin connected to D8. Rx and Tx connections use Serial1 for the Arduino Mega.