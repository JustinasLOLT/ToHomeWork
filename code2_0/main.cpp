#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>

#include "process.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

void doDivision(ifstream &inFile)
{
      char ch;
      int num1, num2;

      inFile >> ch >> num1 >> num2;
      cout << "Division     " << num1 << "    " << num2 << "    "
           << "Quotient "
           << "    " << num1 / num2 << " Remain " << num1 % num2 << endl;
}

int main()
{

      ifstream inFile;
      char ch;
      int num1, num2;

      inFile.open("math.txt");
      if (inFile.fail())
      {
            cout << ch;
            cout << "The math.txt input file failed to open";
            return -1;
      }

      while (inFile)
      {
            switch (ch)
            {

            case '+':
                  doAddition(inFile);
                  break;
            case '-':
                  doSubtraction(inFile);
                  break;
            case '*':
                  doMultiplication(inFile);
                  cout << "debug " << ch;
                  break;
            case '/':
                  doDivision(inFile);
                  break;
            case '!':
                  doFactorial(inFile);
                  break;
            default:
                  cout << "Invalid Operation" << endl;
            }

            inFile >> ch;
      }

      inFile.close();
      return 0;
}