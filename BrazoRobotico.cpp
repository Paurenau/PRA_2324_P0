#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
    sujetando = false;

}

double BrazoRobotico::getx()const{
        return x;
    }
double BrazoRobotico::gety()const{
    return y;
}
double BrazoRobotico::getz()const{
    return z;
}


void BrazoRobotico::coger(){
    sujetando = true;
}

void BrazoRobotico::soltar(){
    sujetando = false;
}

void BrazoRobotico::mover(double x, double y, double z) {
    this->x = x; 
    this->y = y; 
    this->z = z;
}