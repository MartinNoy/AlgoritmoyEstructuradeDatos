#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED
#include <iostream>
#include <circulo.h>

using namespace std;

typedef struct Cilindro{
    Circulo circulos;
    float altura;
    };Cilindro;

void setAltura (Cilindro &cilindro; float altura);

float superficieLateral (Cilindro cilindro);

float superficieTotal(Cilindro cilindro);

float volumen (Cilindro cilindro);


#endif // CILINDRO_H_INCLUDED
