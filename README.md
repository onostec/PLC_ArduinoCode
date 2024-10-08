# PLC_ArduinoCode

The Arduino Nano PLC is based on the open-source hardware Outseal PLC Nano, an Outseal automation technology brand. Based on the Arduino Nano Inputs/Outputs, it has 8 fixed digital optocoupler inputs, 2 analog 0–5V or 0–20mA outputs, 6 relay outputs, 2 PWM outputs, Modbus communication, the UART port, an I2C port, and an inbuilt external memory.
LOW-COST ARDUINO NANO PLC: https://youtu.be/6mbli4i9Tqw

Video Tutorial
1. Introduction to Arduino Sketch ⇌ PLC Ladder Programming: https://youtu.be/_FlpoLP5dmY

PLC ladder-style programming is done with the Arduino IDE as the IEC 611331-3 standard structured text PLC programming language. The inputs and outputs of the Arduino PLC were configured and mapped to the Outseal PLC Nano pinout. The standard PLC scan cycle was replicated to form the bare minimum sketch in the Arduino IDE with functions to configure the input/output, read the input status, execute the program instructions and write to the output pins. Basic programming functions were demonstrated with the Arduino Nano PLC produced by J R Electrokits.

2. Analog Data | Arduino Sketch ⇌ PLC Ladder Programming: https://youtu.be/kOBMkHZmhNA

The bare minimum sketch for Arduino Nano PLC was updated to include analog input read and range scaling functions. The different comparison instructions of the Outseal PLC were replicated with the Arduino Sketch and demonstrated with the Arduino Nano PLC produced by J R Electrokits.

3. Data Monitor | Arduino Sketch ⇌ PLC Ladder Programming: https://youtu.be/UZ7Md3Oj8wA

The Arduino Nano PLC data and I/O status can be monitored in Outseal Studio when it is in online mode. The operating data of the Arduino Nano PLC can also be monitored in the Arduino IDE with the serial monitor. Using the Arduino IDE, the I2C LCD also monitors the Arduino Nano PLC operating parameters.

4. Timers | Arduino Sketch ⇌ PLC Ladder Programming: https://youtu.be/P3z4jwh_oJw

PLC timer functions are replicated in the Arduino IDE. An Arduino Timer library was downloaded from GitHub and was compared with the Outseal Studio PLC instructions. The demonstrated Timer library functions are the Debounce Timer, Timer on Delay (TON), Timer off Delay (TOF), Pulse Timer (TP), and Flasher Timer. All demonstrations were with the Arduino Nano PLC with an I2C LCD to show the timer status and data.

5. Counters  | Arduino Sketch ⇌ PLC Ladder Programming: https://youtu.be/QTQdJcb7Fp4

PLC Counter functions are replicated in the Arduino IDE. An Arduino Counter library developed based on the simplicity of the Timer library can be downloaded from GitHub and was compared with the Outseal Studio PLC instructions. The demonstrated Counter library functions are the Up counter (CTU), Down Counter (CTD), Cyclic Counter (CTY) and the Up-Down Counter. All demonstrations were with the Arduino Nano PLC with an I2C LCD to display the Counter Parameters.

6. Arduino Nano PLC Modbus SCADA: https://youtu.be/t1qlNGgjtOA

The Modbus communication protocol allows PLCs to exchange data with others and SCADA systems. The Arduino Nano PLC like the Outseal PLC nano supports the Modbus serial or RTU implementation. The video demonstrates the programming of the Arduino Nano PLC Modbus RTU slave or server with the Outseal Studio in communication with VT SCADA using the Arduino Nano USB programming cable and the Arduino IDE programming of the Modbus RTU slave or server communicating with VT SCADA using the USB-to-RS485 converter module.

7. Arduino Nano PLC Controlling the EBYTE Modbus RTU: https://youtu.be/IAOaTpbjk8Y

The Arduino Nano PLC is programmed as the Modbus RTU master/client to monitor and control the Ebyte Modbus RTU slave/server. The Outseal Modbus Master instructions are used in the Arduino Nano PLC to send and retrieve data from the Ebyte RTU module. The corresponding program was demonstrated with the Arduino IDE.

8. Industrial 4 20mA Modbus 7 Segment Display: https://youtu.be/uo_Wz4xbz80

The Arduino Nano PLC is programmed as the Modbus RTU master/client to read the analog 4-20 mA input and display the values on Modbus RTU slave 4-digit 7-Segment displays.  The raw analog input was scaled to between 4 - 20 mA. The Outseal Modbus Master instruction MF6 was used in the Arduino Nano PLC to send the data to the Modbus RTU 4-digit 7-segment module. The corresponding program was demonstrated with the Arduino IDE. 
