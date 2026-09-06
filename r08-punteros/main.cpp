#include <iostream>

void intercambiar1(int a, int b);   // por valor
void intercambiar2(int *a, int *b); // por puntero
void intercambiar3(int &a, int &b); // por referencia

int main()
{
  intercambiar1(4, 5);
  int x = 4;
  int y = 5;

  intercambiar2(&x, &y);
  intercambiar3(x, y);
  return 0;
}

void intercambiar1(int a, int b)
{
  int c;
  c = b;
  b = a;
  a = c;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
}
void intercambiar2(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
}
void intercambiar3(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
}