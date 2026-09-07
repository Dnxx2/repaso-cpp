#include "Persona.h"
#include "Gerente.h"
#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std; 

int main(){
  cout << "--- Iniciando bloque ---\n";
    {
        Gerente g("Ana", "Martinez",36,1000);
    }
    cout << "--- Fin del bloque ---\n";
  return 0;
}
/*
Prediccion 
Constructor Persona
Constructor Gerente
Destructor Gerente
Destructor Persona
*/