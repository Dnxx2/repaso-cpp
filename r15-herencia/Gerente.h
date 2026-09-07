#pragma once 
#include <string>
#include <iostream>

#include "Persona.h"
using namespace std;
class Gerente:public Persona{
  private:
  double salario;
  public:
  Gerente();
  Gerente(string n,string a,int ed,double sal);
  ~Gerente();

};