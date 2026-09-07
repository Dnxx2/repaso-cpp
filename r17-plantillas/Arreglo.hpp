#pragma once
#include <iostream>

template <typename T>
class Arreglo {
private:
    T* data;
    int size;
public:
    Arreglo(int s) : size(s) {
        data = new T[size];
        std::cout << "Constructor: " << data << "\n";
    }
    
    Arreglo(const Arreglo& otro) : size(otro.size) {
        data = new T[size];
        for (int i = 0; i < size; ++i) data[i] = otro.data[i];
        std::cout << "Copia: " << data << "\n";
    }

    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) {
            delete[] data;
            size = otro.size;
            data = new T[size];
            for (int i = 0; i < size; ++i) data[i] = otro.data[i];
            std::cout << "Asignacion: " << data << "\n";
        }
        return *this;
    }
    
    ~Arreglo() {
        std::cout << "Destructor: " << data << "\n";
        delete[] data;
    }

    T& operator[](int index) {
        return data[index];
    }

    const T& operator[](int index) const {
        return data[index];
    }

    int tam() const { return size; }
};