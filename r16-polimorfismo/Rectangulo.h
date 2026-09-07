#pragma once
#include "Figura.h"

class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double a);
    double area() const override;
    std::string nombre() const override;
};
