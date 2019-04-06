#include <iostream>
#include <circulo.h>

using namespace std;


void setRadio(Ciculo &circulo, float radio){
    circulo.radio = radio;
}

float calcularPerimetro (Circulo circulo){

return diametro(circulo)*3.14;
}

float diametro (Circulo circulo){

return circulo.radio*2;
}

float area (Circulo  circulo){

return 3.14*(circulo.radio*circulo.radio);
}

float longitudDeArco (Circulo circulo, float angulo){

float ret=((3.14*2)*circulo.radio)*(angulo/360);

return ret;
}
