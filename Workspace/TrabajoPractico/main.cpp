//============================================================================
// Name        : Tranajo-Practico-AyED.cpp
// Author      : MartinNoy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Sucursal{
		int id;
		char direccion[50];
		int zona;
		float facturacion;
	};

void CargaSucursales(struct Sucursal array[]){
    for(int i=0;i<25;i++){
        cout<<"ingrese el id de la sucursal entre 100 y 999"<<endl;
        cin>>Sucursales[i].id;
        if(Sucursales[i].id<100 || Sucursales[i].id>999){
            cout<<"el id es incorrecto ingrese un id entre 100 y 999"<<endl;
            cin>>Sucursales[i].id;
        }
		cout<<"ingrese la direccion de sucursal"<<endl;
		cin>>Sucursales[i].direccion;
		cout<<"ingrese la zona de la sucursal"<< endl;
		cout<<"1:Norte  2:Sur  3:Este  4:Oeste  5:Centro"<<endl;
		cin>>Sucursales[i].zona;
		if(Sucursales[i].zona>5 || Sucursales[i].zona<1){
            cout<<"Zona erronea, porfavor ingrese zona correspondiente"<<endl;
            cout<<"ingrese la zona de la sucursal"<< endl;
            cout<<"1:Norte  2:Sur  3:Este  4:Oeste  5:Centro"<<endl;
            cin>>Sucursales[i].zona;
		};
		cout<<"ingrese el monto de facturacion"<<endl;
		cin>>Sucursales[i].facturacion;

		cout<<"el id de la sucursal es "<<Sucursales[i].id<<endl;
        cout<<"la dirrecion de la sucursal es "<<Sucursales[i].direccion<<endl;
        cout<<"la zona de la sucursal es "<<Sucursales[i].zona<<endl;
        cout<<"la facturacion de la sucursal es "<<Sucursales[i].facturacion<<endl;
    }


}


int main() {
	Sucursal Sucursales[25];
    CargaSucursales(Sucursales);
	return 0;
}

