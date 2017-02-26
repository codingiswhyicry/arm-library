
#ifndef ARM_LIBRARY_H
#define ARM_LIBRARY_H

void spinBase(int speed, int port, int time);
//time is in milliseconds

void move_mid_arm(int position, int port);
//position refers to servo position 

void move_claw(int position, int port);
//position refers to servo position 

void open_claw(int port); 

void close_claw(int port); 

#endif