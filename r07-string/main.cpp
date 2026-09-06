#include <iostream>
#include <string>

int contarPalabras(const std::string &s)
{
  int cont = 0;
  
  bool dentroDePalabra = false;
  
  for (int i = 0; i <=(int) s.size()-1; i++)
  {
   if (s[i] == ' ') 
    {
      dentroDePalabra = false;
    }
   else if (dentroDePalabra == false){
      dentroDePalabra = true;
      cont++;
    }
  }
  return cont;
}
std::string voltear(const std::string &s)
{
  std::string nuevo_str="";
  for(int i=(int)s.size()-1;i>=0;i--){
    nuevo_str+=s[i];
  }
  return nuevo_str;
}
int main()
{
  std::string frase = "Aprender C++ es genial";
  std::cout<<contarPalabras(frase);
  std::cout<<"\n";
  std::cout<<voltear(frase);
  return 0;
}