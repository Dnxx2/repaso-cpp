// La convención del curso:
// struct para agrupaciones de datos sin reglas, class cuando hay algo que proteger.
#include <iostream>
#include <string>

class Reserva
{
private:
  std::string sala="101";        // invariante 1: no vacia
  int personas=10;            // invariante 2: entre 1 y 20
  int horaInicio=8, horaFin=12; // inv. 3: 0 <= inicio < fin <=
public:
bool setSala(std::string s){
if(personas){
  this->sala="Reservada";
  return true;
}
return false;
}
int setPersonas(int p){
if(p>0&&p<=20){
  this->personas=p;
}
}
bool sethoraInicioyFin(int hora_in,int hora_fin){
if(hora_in>0&&hora_fin>0){
  if(hora_in<=hora_fin&&hora_fin<=23){
    this->horaInicio=hora_in;
    this->horaFin=hora_fin;
    return true;
    
  }
  return;
}
return false;
}


};