#include "Persona.h"
#include <iostream>
#include <string>
using namespace std; 
Persona::Persona():nombre(""),apellido(""),edad(0){}
Persona::Persona(string n, string a, int ed):nombre(n),apellido(a),edad(ed){cout<<"Constructor Persona"<<endl;}
string Persona::getNombre(){return this->nombre;}
string Persona::getApellido(){return this->apellido;}
int Persona::getEdad(){return this->edad;}
Persona::~Persona() {
        cout << "Destructor Persona\n";
    }