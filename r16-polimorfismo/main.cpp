#include <iostream>
#include <vector>
#include "Circulo.h"
#include "Rectangulo.h"

int main() {
    std::vector<Figura*> figuras;
    
    figuras.push_back(new Circulo(1.0));
    figuras.push_back(new Rectangulo(3.0, 4.0));

    double areaTotal = 0.0;

    for (Figura* f : figuras) {
        std::cout << f->nombre() << " - Area: " << f->area() << "\n";
        areaTotal += f->area();
    }

    std::cout << "Area Total: " << areaTotal << "\n";

    for (Figura* f : figuras) {
        delete f;
    }
    figuras.clear();

    return 0;
}