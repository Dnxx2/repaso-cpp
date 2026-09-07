#include <iostream>
#include <string>
#include "arreglo.hpp"

int main() {
    Arreglo<double> arrDouble1(3);
    arrDouble1[0] = 1.1;
    arrDouble1[1] = 2.2;
    arrDouble1[2] = 3.3;

    Arreglo<double> arrDouble2 = arrDouble1;
    arrDouble2[0] = 9.9;

    std::cout << "arrDouble1[0]: " << arrDouble1[0] << "\n";
    std::cout << "arrDouble2[0]: " << arrDouble2[0] << "\n";

    Arreglo<std::string> arrString1(2);
    arrString1[0] = "Hola";
    arrString1[1] = "Mundo";

    Arreglo<std::string> arrString2(arrString1);
    arrString2[1] = "C++";

    std::cout << "arrString1[1]: " << arrString1[1] << "\n";
    std::cout << "arrString2[1]: " << arrString2[1] << "\n";

    return 0;
}