#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5; //define los servos

#define dedo1 A1
#define dedo2 A2
#define dedo3 A3
#define dedo4 A4
#define dedo5 A5 //define las ebtradas analogicas de los sensores 

int val1;
int val2;
int val3;
int val4;
int val5; //define las variables para leer el valor de cada dedo

void setup() {
servo1.attach(1);
servo2.attach(2);
servo3.attach(3);
servo4.attach(4);
servo5.attach(5); //defines las salidas de cada servo

}

void loop() {
    
     
val1 = analogRead(dedo1);
val1 = map(val1, 750, 1023, 0, 179);
servo1.write(val1);
delay(5); //lee el dedo 1 i coloca el servo de este dedo

val2 = analogRead(dedo2);
val2 = map(val2, 570, 1023, 0, 179);
servo2.write(val2);
delay(5); //lee el dedo 2 i coloca el servo de este dedo

val3 = analogRead(dedo3);
val3 = map(val3, 770, 1023, 0, 179);
servo3.write(val3);
delay(5); //lee el dedo 3 i coloca el servo de este dedo

val4 = analogRead(dedo4);
val4 = map(val4, 1000, 1023, 0, 179);
servo4.write(val4);
delay(5); //lee el dedo 4 i coloca el servo de este dedo

val5 = analogRead(dedo5);
val5 = map(val5, 720, 1023, 0, 179);
servo5.write(val5);
delay(5); //lee el dedo 5 i coloca el servo de este dedo


}
