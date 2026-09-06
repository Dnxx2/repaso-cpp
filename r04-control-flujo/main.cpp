#include <iostream>

int main()
{
  const int N = 5;
  int d[N] = {10, 20, 30, 40, 50};

  int suma = 0;                // A: sumar todo
  for (int i = 0; i <= N; i++) // instruccion vacia no hay {}
  {//al poner los brackets noto que N es igual a 5 y
    suma += d[i];
  }

  int cuantos = 0;            // B: contar > 25
  for (int i = 1; i < N; i++) // lo mismo, no hay {} para el for y el if
  {//arranca y nunca termina
    if (d[i] > 25)
    {
      cuantos++;
    }
  }

  int k = 0; // C: imprimir todo
  while (k < N)//10 infinitos jajaja
  {
    std::cout << d[k] << ' ';
  }
  return 0;
}