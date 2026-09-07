#include <string>

void procesar(int numero) {}

int main() {
    std::string texto = "123";
    procesar(texto); // Línea 6: Intentando pasar string donde va un int
    return 0;
}