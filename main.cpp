/* ----------------------------------------------
 * Dato De Entrada: segundos (unsigned long int)
 *                  segundos > 1 se debe validar
 * Dato de Salida: hh, mm, ss (unsigned long int)
 ------------------------------------------------*/

#include <iostream>
using namespace std;

void convertir(unsigned long int segundos, unsigned long int & hh, unsigned long int & mm,
               unsigned long int & ss);

int main()
{ unsigned long int segundos;
  unsigned long int hh=0, mm=0, ss=0;

  do{
    cout << "Segundos : ";
    cin >> segundos;
  }while(segundos<= 1);

  convertir(segundos, hh, mm, ss);
  cout << "Equivalen a: \n";
  cout << "Horas     : " << hh << "\n";
  cout << "Minutos   : " << mm << "\n";
  cout << "Segundos  : "<< ss << "\n";
  return 0;
}

void convertir(unsigned long int segundos, unsigned long int & hh, unsigned long int & mm,
               unsigned long int & ss)
{
  hh = segundos / 3600;
  segundos = segundos % 3600;
  mm = segundos / 60;
  ss = segundos % 60;
}



