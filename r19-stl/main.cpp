#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
//soluciones + input y ayuda de Google Gemini jeje
//necesito estudiar estos temas mas a fondo 
// 1. SOLUCIÓN CON VECTOR
// Requiere ordenar primero para agrupar duplicados, luego se itera contando.
void count_vector(std::vector<std::string> words) { 
    if (words.empty()) return;
    
    std::sort(words.begin(), words.end());
    
    int count = 1;
    for (size_t i = 1; i < words.size(); ++i) {
        if (words[i] == words[i-1]) {
            count++;
        } else {
            std::cout << words[i-1] << ": " << count << "\n";
            count = 1;
        }
    }
    std::cout << words.back() << ": " << count << "\n";
}

// 2. SOLUCIÓN CON MAP
// La más idiomática. Un mapa asocia la palabra con su frecuencia directamente.
void count_map(const std::vector<std::string>& words) {
    std::map<std::string, int> freq;
    for (const auto& w : words) {
        freq[w]++; // Si no existe, se inicializa en 0 y se suma 1.
    }
    
    for (const auto& pair : freq) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
}

// 3. SOLUCIÓN CON SET
// Un std::set solo guarda valores únicos (no guarda conteos). 
// Usamos el set para filtrar repetidos y std::count para buscarlos en el vector original.
void count_set(const std::vector<std::string>& words) {
    std::set<std::string> unique_words(words.begin(), words.end());
    
    for (const auto& w : unique_words) {
        int count = std::count(words.begin(), words.end(), w);
        std::cout << w << ": " << count << "\n";
    }
}

int main() {
    std::vector<std::string> palabras = {"uva", "manzana", "pera", "uva", "manzana", "uva"};
    
    std::cout << "--- Usando Vector ---\n";
    count_vector(palabras);
    
    std::cout << "\n--- Usando Map ---\n";
    count_map(palabras);
    
    std::cout << "\n--- Usando Set ---\n";
    count_set(palabras);
    
    return 0;
}
/*
¿Cual conviene usar? 
En la inmensa mayoría de los escenarios, conviene usar std::map.
Es la estructura semánticamente correcta: 
fue diseñada exactamente para crear diccionarios (llave-valor). 
El código es el más corto, el más fácil de mantener, y su rendimiento es lo suficientemente 
bueno para propósitos generales. El enfoque de set es el peor porque 
desaprovecha la oportunidad de almacenar el conteo cuando descubre la palabra por primera vez.
*/