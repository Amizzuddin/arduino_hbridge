
/************************************************************************************************************************
 * This program is design for RACE curicullum                                                                  *
 * 1) Encoder wheel, 1 rotation = 20 ticks = 21cm = 210mm                                                                  *
 * 2)                                                 *
 * **********************************************************************************************************************/
/*Hbridge Library for arduino to drive motor or linear actuator, Created by Amizzuddin, July 28 2020*/

#ifndef ARDUINO_HBRIDGE_H
#define ARDUINO_HBRIDGE_H

#define TOTAL_INPUT 2

class HBRIDGE{
 public:
    /********************************************************
     *         en1              Motor A input pin 1         *
     *         en2              Motor A input pin 2         *
     *         enA              Motor A enable pin          *
     ********************************************************/
    HBRIDGE(byte input1, byte input2);

    /********************************************************
     * Initialize the pinMode of the L298N inputs           *
     ********************************************************/
    void initialize();

    /********************************************************
     * Commands to send to H-bridge                         *
     * direction 
     ********************************************************/
    void drive_motor(byte direction);

 private:
    byte _in[TOTAL_INPUT] ;
};

#endif