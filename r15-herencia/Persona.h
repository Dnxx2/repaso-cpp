#pragma once
#include <string>
#include <iostream>

using namespace std;
class Persona
{
protected:
  string nombre, apellido;
  int edad;
public:
Persona();
Persona(string n,string a, int ed);
string getNombre();
string getApellido();

int getEdad();
~Persona();
};