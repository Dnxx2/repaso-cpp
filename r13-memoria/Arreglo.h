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
    
    ~Arreglo() {
        std::cout << "Destructor: " << data << "\n";
        delete[] data;
    }

    void set(int index, int value) { if(index >= 0 && index < size) data[index] = value; }
    int get(int index) const { return (index >= 0 && index < size) ? data[index] : -1; }
    int tam() const { return size; }
};
