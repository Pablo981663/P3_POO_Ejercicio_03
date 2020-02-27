#include <iostream>
#include "punto.h"
#include "pentagono.h"

int main(){
Pentagono elPentagono;
elPentagono.AsignarSupMed (3,5);
elPentagono.AsignarSupIzq (1,3);
elPentagono.AsignarInfIzq (2,1);
elPentagono.AsignarSupDer (5,3);
elPentagono.AsignarInfDer (4,1);

cout << "El perimetro del pentagono es: " << elPentagono.Perimetro() << endl;
cout <<"El area del pentagono es: "<<elPentagono.Area()<<endl;
cout<<"Pero??Si es un pentagono regular??:"<<elPentagono.Rectif()<<endl;
}
