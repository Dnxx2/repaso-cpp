#pragma once
#include "Figura.h"

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r);
    double area() const override;
    std::string nombre() const override;
};

