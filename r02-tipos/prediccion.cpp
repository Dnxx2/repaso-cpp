#include <iostream>

int main()
{
  std::cout << 7 / 2 << '\n';                  // prediccion: 3
  std::cout << 7 / 2.0 << '\n';                // prediccion: 3.5
  std::cout << 7 % 2 << '\n';                  // prediccion: 1 
  std::cout << static_cast<int>(3.99) << '\n'; // prediccion: 4 
  std::cout << (1 == 1.0) << '\n';             // prediccion: 1
  unsigned int u = 3;
  std::cout << u - 5 << '\n';                   //prediccion: 4294967293 
  return 0;
}