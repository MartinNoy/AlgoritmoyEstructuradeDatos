#include <iostream>
#include <circulo.h>
#include <cilindro.h>

using namespace std;

void setAltura (Cilindro &cilindro; float altura){
      cilindro.altura = altura;
}

float superficieLateral (Cilindro cilindro){

return cilindro.altura*calcularPerimetro(cilindro.circulos);
}


float superficieTotal(Cilindro cilindro){

return superficieLateral(cilindro)+(area(cilindro.circulos)*2);
}

float volumen (Cilindro cilindro){

return area(cilindro.circulos)*cilindro.altura;
}
