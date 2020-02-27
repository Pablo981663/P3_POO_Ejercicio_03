#ifndef PENTAGONO_H
#define PENTAGONO_H
#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;
class Pentagono
{
    private:
        Punto SupMed;
        Punto SupIzq;
        Punto InfIzq;
        Punto SupDer;
        Punto InfDer;
    public:

        Pentagono(){
        cout<<"Se ha creado un pentagono"<<endl;
        }

        void AsignarSupMed(float x, float y){
        SupMed.asignarX(x);
        SupMed.asignarY(y);
        }
        void AsignarSupIzq(float x, float y){
        SupIzq.asignarX(x);
        SupIzq.asignarY(y);
        }
        void AsignarInfIzq(float x, float y){
        InfIzq.asignarX(x);
        InfIzq.asignarY(y);
        }
        void AsignarSupDer(float x, float y){
        SupDer.asignarX(x);
        SupDer.asignarY(y);
        }
        void AsignarInfDer(float x,float y){
        InfDer.asignarX(x);
        InfDer.asignarY(y);
        }

        float Perimetro(){
        float l1=abs(InfDer.obtenerX()-InfIzq.obtenerX());
        float l2=abs(SupDer.obtenerY()-InfDer.obtenerY());
        float l3=abs(SupMed.obtenerY()-SupDer.obtenerY());
        float l4=abs(SupMed.obtenerY()-SupIzq.obtenerY());
        float l5=abs(SupIzq.obtenerY()-InfIzq.obtenerY());
        return (l1+l2+l3+l4+l5);
        }
        float Area(){
        float l=abs(InfDer.obtenerX()-InfIzq.obtenerX());
        float Ap=l/(2*0.7265);
        float nom=(l*5)*Ap;
        return (nom/2);
        }
        float Rectif(){
        float l1=abs(InfDer.obtenerX()-InfIzq.obtenerX());
        float l2=abs(SupDer.obtenerY()-InfDer.obtenerY());
        float l3=abs(SupMed.obtenerY()-SupDer.obtenerY());
        float l4=abs(SupMed.obtenerY()-SupIzq.obtenerY());
        float l5=abs(SupIzq.obtenerY()-InfIzq.obtenerY());
       if (l1==l2&&l2==l3&&l3==l4&&l4==l5&&l5==l1){
        cout<<"Si es un pentagono regular"<<endl;

       }else{
        cout<<"No es un pentagono regular. Verifica puntos"<<endl;

        }
        return 0;
        }
};

#endif // PENTAGONO_H
