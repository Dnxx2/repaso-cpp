#include "Rectangulo.h"

Rectangulo::Rectangulo(double b, double a) : base(b), altura(a) {}

double Rectangulo::area() const {
    return base * altura;
}

std::string Rectangulo::nombre() const {
    return "Rectangulo";
}