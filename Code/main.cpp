#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

int If(int num1, int num2, int num3, int num4, int num5, int num6, int num7, int num8, int num9, int num10, int num11, int num12)
{
      int numA;
      if (num1 > num2)
      {
            numA = num1;
      }
      else if (num2 > num1)
      {
            numA = num2;
      }

      if (numA < num3)
      {
            numA = num3;
      }
      if (numA < num4)
      {
            numA = num4;
      }
      if (numA < num5)
      {
            numA = num5;
      }
      if (numA < num6)
      {
            numA = num6;
      }
      if (numA < num7)
      {
            numA = num7;
      }
      if (numA < num8)
      {
            numA = num8;
      }
      if (numA < num9)
      {
            numA = num9;
      }
      if (numA < num10)
      {
            numA = num10;
      }
      if (numA < num11)
      {
            numA = num11;
      }
      if (numA < num12)
      {
            numA = num12;
      }
      return numA;
}

int Dispm(ifstream &file_uzdarbis)
{
      double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;

      file_uzdarbis >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12;
      cout << "Per metus " << num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11 + num12 << " eur" << endl;
      //padaryti kad butui visi 12 uzdarbiu sueitu i viena
      return num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11 + num12;
}

int Dmi(ifstream &file_uzdarbis)
{
      double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;

      file_uzdarbis >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12;

      int numC = If(num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12);

      cout << "Diziausia alga buvo: " << numC << " eur" << endl;
      return numC;
}

int vvmpd(ifstream &file_uzdarbis)
{
      double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;

      file_uzdarbis >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12;
      cout << "vidurkis " << (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11 + num12) / 12 << " eur" << endl;
      return (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11 + num12) / 12;
}

int OText(int a, int b, int c)
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

      file_ataskaita << "Cia yra Ataskaita lentele"<<endl<<"Diziausia alga buvo: " << a << " eur"<<endl<<"vidurkis " << b << " eur"<<endl<<"Per metus " <<c<<" eur"; //veikia \n

      file_ataskaita.close();
      return 0;
}

int main()
{

      ifstream file_uzdarbis("Uzdarbis.txt");

      string Vsrdas, Pavarde;
      file_uzdarbis >> Vsrdas >> Pavarde;
      //       if (file_uzdarbis.fail())
      // {
      //       cout << ch;
      //       cout << "The math.txt input file failed to open";
      //       return -1;
      // }

      //file_uzdarbis >> ch;
      int Dmia=Dmi(file_uzdarbis);
      int vvmpdb=vvmpd(file_uzdarbis);
      int Dispmc= Dispm(file_uzdarbis);
      OText(Dmia,vvmpdb,Dispmc);
      
}