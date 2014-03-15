/* Using a library from 
http://sebastian.setz.name/arduino/my-libraries/multi-camera-ir-control/ */
#include "multiCameraIrControl.h"

const int GM = 6; //connect Pin 6 to a Geigercounter's OUT Pin
int geigercount = 1;
int null;


Nikon D5000(9); //connect an IRED to Pin 9 to control camera through an IRED

void setup(){
  pinMode(GM, INPUT);
}

void loop(){
  /* everytime a Geigercounter detects radiation */ 
  if(digitalRead(GM) == null){
    D5000.shutterNow();
}



