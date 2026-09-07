#include "Gerente.h"
#include <iostream>
#include <string>

using namespace std;

Gerente::Gerente():Persona(){}
Gerente::Gerente(string n,string a,int ed,double sal):Persona(n,a,ed),salario(sal){cout<<"Constructor Gerente"<<endl;}
Gerente::~Gerente() {
        cout << "Destructor Gerente\n";
    }
  
