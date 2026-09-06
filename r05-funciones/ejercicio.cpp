#include <iostream>
using namespace std; 
void calificar(double n[], double &s);
double calc_promedio(double &s);
void verificar_aprobacion(double &pr); 


int main() {
    double notas[3], suma = 0;
    calificar(notas,suma);
    double promedio=calc_promedio(suma);
    verificar_aprobacion(promedio);
    
   
}
void calificar(double n[], double &s){
  for (int i = 0; i < 3; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> n[i];
        s += n[i];
        cout<<"Nota en posicion " <<to_string(i)<<" : "<<n[i]<<endl;
    }
  
}
double calc_promedio(double &s){
  double prom = s / 3;
  return prom;
}
void verificar_aprobacion(double &pr){
   std::cout << "Promedio: " << pr << '\n';
    if (pr >= 70) std::cout << "Aprobado\n";
    else            std::cout << "Reprobado\n";
}