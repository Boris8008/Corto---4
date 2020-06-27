#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int codigo(char Arreglo1[], char Arreglo2[])
{ 
  int i, longitud;
  longitud = strlen(Arreglo1);
  for (int i = 0; i < longitud; i++)
   {
     
     switch (Arreglo1[i])
        {
          case 'm' :
          Arreglo2[i] = '0';
          break;
          case 'u' :
          Arreglo2[i] = '1';
          break;
          case 'r' :
          Arreglo2[i] = '2';
          break;
          case 'c' :
          Arreglo2[i] = '3';
          break;
          case 'i' :
          Arreglo2[i] = '4';
          break;
          case 'e' :
          Arreglo2[i] = '5';
          break;
          case 'l' :
          Arreglo2[i] = '6';
          break;
          case 'a' :
          Arreglo2[i] = '7';
          break;
          case 'g' :
          Arreglo2[i] = '8';
          break;
          case 'o' :
          Arreglo2[i] = '9';
          break;
          default:
          Arreglo2[i] = Arreglo1[i];
          break;
        }
    }
    cout << "La palabra que digito en clave murcielago es: ";
    cout << Arreglo2 << endl;
    return 0;
}


int main()
{
  char palabra1[1000], palabra2[100];
  cout << "El programa sustituira su palabra en clave murcielago" << endl;
  cout << "Digite una palabra: " << endl;
  cin.getline(palabra1,1000);
  codigo(palabra1, palabra2);
  cout << endl;

}