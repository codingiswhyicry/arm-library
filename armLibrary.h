#include <kipr/botball.h>

#ifndef ARM_LIBRARY_H
#define ARM_LIBRARY_H

void spinBase(int speed, int port);

void move_mid_arm(int position, int port);

void move_claw(int position, int port);

void open_claw(int port); 

void close_claw(int port); 

#endif