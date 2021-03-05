#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Head.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;
using namespace std;

int OText()
{
      ofstream file_ataskaita("Ataskaita.txt"); //atidaro fila o jei jo nera ji sukure ir iraso informacija
                                                // o == open, f == file
      if (file_ataskaita.is_open())
      {
            cout << "Filas atidarytas:\n";
      }
      else if (file_ataskaita.is_open() == 0)
      {
            cout << "Filas Neatidarytas bandykite faila istrinti arba modifikuoti\nOgal geriau paleiskite programa ant Administratoriaus\n";
            return 0;
      }
      //abu if yra neraikalingi bet for fun palikau

      file_ataskaita << "Cia yra Ataskaita lentele"; //veikia \n

      file_ataskaita.close();
      return 0;
}

int IText()
{
      ifstream file_uzdarbis("Uzdarbis.txt");

      vector<string> names;

      string line, input;
      //getline(file_uzdarbis,line); //getline kaskaip veikia
      //cout << line << endl;

      while (file_uzdarbis >> input)
      {
            names.push_back(input);
      }

      for (string name : names)
      {
            cout << name << endl;
      }
      return 0;
}