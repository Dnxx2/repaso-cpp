#include "Empleado.h"
using namespace std; 

Empleado::Empleado():Persona(),cargo(""),salario(0.0){}
Empleado::Empleado(string n,string a, int ed, string c, double sal):Persona(n,a,ed),cargo(c),salario(sal){cout<<"Constructor Empleado"<<endl;}
Empleado::~Empleado() {
        cout << "Destructor Empleado\n";
    }