#pragma once
#include <iostream>

class Arreglo {
private:
    int* data;
    int size;
public:
    Arreglo(int s) : size(s) {
        data = new int[size];
        std::cout << "Constructor: " << data << "\n";
    }
    
    // 1. Constructor de copia
    Arreglo(const Arreglo& otro) : size(otro.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) data[i] = otro.data[i];
        std::cout << "Copia: " << data << "\n";
    }

    // 2. Operador de asignación
    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) {
            delete[] data;
            size = otro.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) data[i] = otro.data[i];
            std::cout << "Asignacion: " << data << "\n";
        }
        return *this;
    }

    // 3. Destructor
    ~Arreglo() {
        std::cout << "Destructor: " << data << "\n";
        delete[] data;
    }

    void set(int index, int value) { if(index >= 0 && index < size) data[index] = value; }
    int get(int index) const { return (index >= 0 && index < size) ? data[index] : -1; }
    int tam() const { return size; }
};
