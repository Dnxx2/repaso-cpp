#include <iostream>
int suma(const int v[], int n)
{ // A
  int s = 0;
  for (int i = 0; i < n; i++)
    s += v[i];
  return s;
}
int pares(const int v[], int n)
{ // B
  int c = 0;
  for (int i = 0; i < n; i++)
    if (v[i] % 2 == 0)
      c++;
  return c;
}
int maximo(const int v[], int n)
{ // C
  int mejor=0;
  for (int i = 0; i < n; i++)
    if (v[i] > mejor)
      mejor = v[i];
  return mejor;
}

int main()
{
  int n[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
  int tam=9;
  
  std::cout<<suma(n, tam)<<"\n";
  std::cout<<pares(n, tam)<<"\n";
  std::cout<<maximo(n, tam)<<"\n";
  return 0;
}