#pragma once
#include <string>
#include <iostream>

#include "Persona.h"
using namespace std;

class Empleado:public Persona{
  private:
  string cargo;
  double salario;
  public:
  Empleado();
  Empleado(string n,string a, int ed, string c, double sal);
  ~Empleado();
};