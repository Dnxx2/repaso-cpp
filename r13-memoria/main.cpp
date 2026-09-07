
#include <iostream>

class Arreglo {
private:
    int* data;
    int size;
public:
    // constructor
    Arreglo(int s) : size(s) {
        data = new int[size];
        std::cout << "Constructor: Memoria asignada en " << data << "\n";
    }

    //  constructor de copia
    Arreglo(const Arreglo& otro) : size(otro.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = otro.data[i];
        }
        std::cout << "Constructor de Copia: Nueva memoria asignada en " << data << "\n";
    }

    // operator=
    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) { // Evita auto-asignación (ej. a = a)
            std::cout << "Operador=: Liberando memoria vieja en " << data << "\n";
            delete[] data; // Limpia la memoria actual antes de copiar
            
            size = otro.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = otro.data[i];
            }
            std::cout << "Operador=: Nueva memoria asignada en " << data << "\n";
        }
        return *this;
    }

    // destructor
    ~Arreglo() {
        std::cout << "Destructor: Liberando memoria en " << data << "\n";
        delete[] data;
    }

    void set(int index, int value) {
        if (index >= 0 && index < size) data[index] = value;
    }

    int get(int index) const {
        if (index >= 0 && index < size) return data[index];
        return -1; 
    }

    int tam() const { return size; }
};

int main() {
    std::cout << "--- Creando a ---\n";
    Arreglo a(5);
    a.set(0, 10);
    
    std::cout << "\n--- Creando b (b = a) ---\n";
    Arreglo b = a; // Invoca el Constructor de Copia
    
    std::cout << "\n--- Modificando b ---\n";
    b.set(0, 99);
    
    std::cout << "Valor a[0]: " << a.get(0) << " (Debe seguir siendo 10)\n";
    std::cout << "Valor b[0]: " << b.get(0) << " (Debe ser 99)\n";
    
    std::cout << "\n--- Probando operator= ---\n";
    Arreglo c(2);
    c = a; // Invoca operator=
    
    std::cout << "\n--- Destrucción automática al salir ---\n";
    return 0;
}