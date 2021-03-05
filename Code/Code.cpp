#include <iostream>
#include <fstream>
#include "Head.h"

using std::cin;
using std::cout;
using std::endl;
using std::ofstream;

int Text()
{
      ofstream file_uzdarbis("Uzdarbis.txt"); //atidaro fila o jei jo nera ji sukure ir iraso informacija

      if (file_uzdarbis.is_open())
      {
            cout << "Filas atidarytas:\n";
      }
      else if (file_uzdarbis.is_open() == 0)
      {
            cout << "Filas Neatidarytas bandykite faila istrinti arba modifikuoti\nOgal geriau paleiskite programa ant Administratoriaus\n";
            return 0;
      }
//abu if yra neraikalingi bet for fun palikau


      file_uzdarbis << "Cia yra Uzdarbio lentele"; //veikia \n 

      file_uzdarbis.close();
      return 0;
}
