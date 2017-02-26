#include <kipr/botball.h>

//this command spins the base of the arm at a speed for a specified amount of time 
void spinBase(int speed, int port, int time) {
    
    motor(int port, int speed); 
    msleep(int time);
    
}

//this command moves the mid arm to a specified position
void move_mid_arm(int position, int port) {

    set_servo_position(int port, int position);
    
}

//this command moves the claw to a position specified 
void move_claw(int position, int port) {
    
    set_servo_position(int port, int position);

}

//this command opens the claw
void open_claw(int port) {
    
    set_servo_position(int port, );
    //add open servo position
}

//this command closes the claw
void close_claw(int port) {

    set_servo_position(int port, );
    //add closing servo position 
}