#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <iostream>

using namespace std;

typedef struct Circulo{
    float radio;
    };Circulo;

void setRadio(Ciculo &circulo, float radio);

float calcularPerimetro (Circulo circulo);

float diametro (Circulo circulo);

float area (Circulo  circulo);

float longitudDeArco (Circulo circulo, float angulo);



#endif // CIRCULO_H_INCLUDED
