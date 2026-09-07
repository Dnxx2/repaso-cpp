#include <iostream>
#include <vector>

void simular_vector(bool usar_reserve) {
    std::vector<int> v;
    
    if (usar_reserve) {
        v.reserve(1000);
        std::cout << "Capacidad inicial tras reserve(1000): " << v.capacity() << "\n";
    }

    int reasignaciones = 0;
    int elementos_copiados = 0;
    size_t capacidad_actual = v.capacity();

    for (int i = 0; i < 1000; ++i) {
        v.push_back(i);
        
        // si la capacidad cambia tras insertar el elemento, hubo una reasignación
        if (v.capacity() != capacidad_actual) {
            reasignaciones++;
            // se copiaron todos los elementos que ya existían antes de este push_back
            elementos_copiados += (v.size() - 1); 
            capacidad_actual = v.capacity();
            
            std::cout << "Tamaño: " << v.size() 
                      << " | Nueva Capacidad: " << capacidad_actual << "\n";
        }
    }

    std::cout << "Total de reasignaciones: " << reasignaciones << "\n";
    std::cout << "Total de elementos copiados: " << elementos_copiados << "\n";
}

int main() {
    std::cout << "=== PRUEBA 1: Sin reserve ===\n";
    simular_vector(false);
    
    std::cout << "\n=== PRUEBA 2: Con reserve(1000) ===\n";
    simular_vector(true);
    
    return 0;
}