#include <iostream>
#include "quicksot.h"

using namespace std;
using namespace ordenamiento;



int main() {

            //0, 1 ,2,3, 4, 5, 6 ,7 ,8 9 ->posiciones
  int A[10]={88,-6,69,-33,98,7,23,-5,0,100};

  //posicion medio
  // funcion nombre arreglo,pinicial,pfinal
  //cout<<mitad(A,0,9) imprime 98
 ordenar(A,0,9);

  for(int i=0;i<10;i++)
  {
    cout<<"|"<<A[i]<<"|";
  }

  return 0;
}

//FUNCIONES

int mitad(int arr[],int pinicial, int pfinal)
{

  return arr[(pinicial + pfinal)/2];
}

              // A          0             9
void ordenar(int arr[],int pinicial, int pfinal)
{
  int i=pinicial;
  int j=pfinal;
  int temp;
                // A    0        9
  int piv= mitad(arr,pinicial,pfinal);


 //trabajar con las dos mitades
  do
  {
    while(arr[i]<piv)
    {
      i++;
    }
    while(arr[j]>piv)
    {
      j--;
    }
    if(i<=j)
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
    }
  }while(i<=j);



  if(pinicial<j)

    ordenar(arr,pinicial,j);

  if(i<pfinal)

    ordenar(arr,i,pfinal);


}
