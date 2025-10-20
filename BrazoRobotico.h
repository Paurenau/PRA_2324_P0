#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico{

private:
    double x, y, z;
    bool sujetando;

public:
    BrazoRobotico(double x, double y, double z);

    double getx() const;
    double gety() const;
    double getz() const;
    bool estaSujetando() const;

    void coger();
    void soltar();
    void mover(double x, double y, double z);

};

#endif