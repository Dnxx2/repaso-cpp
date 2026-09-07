#include "Circulo.h"

Circulo::Circulo(double r) : radio(r) {}

double Circulo::area() const {
    return 3.141592653589793 * radio * radio;
}

std::string Circulo::nombre() const {
    return "Circulo";
}