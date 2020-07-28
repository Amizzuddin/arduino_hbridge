/*L298N(Motor Driver) Library for arduino, Created by Amizzuddin, Nov 08 2019*/

#include "Arduino.h"
#include "hbridge.h"

HBRIDGE::HBRIDGE(byte input1, byte input2){
    //make it clear that the variables is private
	_in[0] = input1;
	_in[1] = input2;

    //initialize motor as not moving
	drive_motor(0, 0);
}

void HBRIDGE::initialize(){
	for(byte i=0; i < TOTAL_INPUT; i++){
		pinMode(_in[i], OUTPUT);
	}
}

void HBRIDGE::drive_motor(byte direction){
	for(byte i=0; i < TOTAL_INPUT; i++){
		if( i < TOTAL_INPUT){
			digitalWrite(_in[i], direction & B0001);
			direction = direction >> 1;
		}
	}
}