#include <ModbusRTUMaster.h>

ModbusRTUMaster modbus(Serial);                                       //Create the Modbus master object to use the hardware serial port
uint16_t holdingRegisters1[2];
uint16_t holdingRegisters2[2];

void setup() {
  modbus.begin(9600);                                                 //set the Modbus communication baud rate to 9600
}

void loop() {
  holdingRegisters1[0] = analogRead(A6);                              //raw analog input
  holdingRegisters2[0] = map(analogRead(A6), 205, 1023, 0, 100);      //scales analog

  modbus.writeMultipleHoldingRegisters(1, 0, holdingRegisters1, 2);   //send raw analog value to the first modbus display
  modbus.writeMultipleHoldingRegisters(2, 0, holdingRegisters2, 2);   //send raw analog value to the first modbus display

}
