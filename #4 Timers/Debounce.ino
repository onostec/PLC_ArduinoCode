#include <Timer.h>

//Digital Input Declaration 
const int s1 = A0;
const int s2 = A1;
const int s3 = A2;
const int s4 = A3;
const int s5 = 2;
const int s6 = 3;
const int s7 = 4;
const int s8 = 5;

//Digital Output Declaration
const int r1 = 13;
const int r2 = 12;
const int r3 = 11;
const int r4 = 6;
const int r5 = 7;
const int r6 = 8;
const int r7 = 9;
const int r8 = 10;

//Analog Input Declaration
const int a1 = A6;
const int a2 = A7;

int A_1;
int A_2;

//Inputs Boolean variable declaration
bool S1;
bool S2;
bool S3;
bool S4;
bool S5;
bool S6;
bool S7;
bool S8;

//Outputs Boolean variable declaration
bool R1;
bool R2;
bool R3;
bool R4;
bool R5;
bool R6;
bool R7;
bool R8;

int I1;

//Call the Class and Assign Object for Debounce 
Time DB1; 
Time DB2; 
Time DB3; 
Time DB4; 
Time DB5; 
Time DB6; 
Time DB7; 
Time DB8; 

//Call the Class and Assign Object for TimerS
Time T1;

void setup() {
  IO(); // call the inputs and output pin configuration

}

void loop() {

  input();

 
  output();

}

//read input state with debounce
void input() {
S1 = DB1.DEBOUNCE(!digitalRead(s1), 10);
S2 = DB2.DEBOUNCE(!digitalRead(s2), 10);
S3 = DB3.DEBOUNCE(!digitalRead(s3), 10);
S4 = DB4.DEBOUNCE(!digitalRead(s4), 10);
S5 = DB5.DEBOUNCE(!digitalRead(s5), 10);
S6 = DB6.DEBOUNCE(!digitalRead(s6), 10);
S7 = DB7.DEBOUNCE(!digitalRead(s7), 10);
S8 = DB8.DEBOUNCE(!digitalRead(s8), 10);

A_1 = analogRead(a1);
A_2 = analogRead(a2);
}

//Update output pin status
void output() {
  digitalWrite(r1, R1);  
  digitalWrite(r2, R2);  
  digitalWrite(r3, R3);  
  digitalWrite(r4, R4);  
  digitalWrite(r5, R5);  
  digitalWrite(r6, R6);  
  digitalWrite(r7, R7);  
  digitalWrite(r8, R8);  
}

//configure input and output pins
void IO() {
//set pins to inputs 
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(s6, INPUT);
  pinMode(s7, INPUT);
  pinMode(s8, INPUT);

//set pins to outputs
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(r7, OUTPUT);
  pinMode(r8, OUTPUT);

//Initialized the output pins to zero
  digitalWrite(r1, false);  
  digitalWrite(r2, false);  
  digitalWrite(r3, false);  
  digitalWrite(r4, false);  
  digitalWrite(r5, false);  
  digitalWrite(r6, false);  
  digitalWrite(r7, false);  
  digitalWrite(r8, false);  

}