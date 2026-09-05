#include <iostream>
#include <limits>
int leerEnRango(const std::string &msg, int lo, int hi)
{
  int valor = 0;
  while (true)
  {

    std::cout << msg;
    bool ok = static_cast<bool>(std::cin >> valor);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Digita un valor dentro el rango: " << lo << " hasta " << hi << "\n";
    std::cin >> valor;
    if (ok && valor >= lo && valor <= hi)
      return valor;
    std::cout << "Escribe un entero entre "
              << lo << " y " << hi << ".\n";
  }
}
int main()
{
  leerEnRango("Hola Daniel",5,1000);
  return 0;
}