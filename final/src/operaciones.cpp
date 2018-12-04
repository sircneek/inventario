/*
 * operaciones.cpp
 *
 *  Created on: 21 nov. 2018
 *      Author: luis
 */

#include "funcion.h"
char eliminado[100];
struct articulo{
	char nombre[100];
	float costo;
	float precio;
	int cantidad;

};
struct articulo productos[100] = {
	"Galletas", 0.5, 0.7, 30,
	"Caramelos",0.1, 0.2, 100,
	"Gaseosas", 1.0, 1.5, 20,
	"Frituras", 0.5, 0.7, 30,
	"Chocolates",1.0,1.5,20,
	"Agua de dios",1.0, 1.5, 20,
	};
void titulo(){
	cout<<" ------------------------------------------------------ "<<endl;
	cout<<"                   TIENDA DE ABARROTES                  "<<endl;
	cout<<" ------------------------------------------------------ "<<endl;
	cout<<endl;
}
int opciones(){
	titulo();
	int op1;
cout<<"<1> NUEVA VENTA "<<endl;
cout<<"<2> NUEVA COMPRA "<<endl;
cout<<"<3> INVENTARIO "<<endl;
cout<<"<4> SALIR "<<endl;
cout<<"ACCIÓN: ";cin>>op1;
switch(op1){
case 1: return 1; break;
case 2: return 2; break;
case 3: return 3;break;
case 4: return 4; break;
}
}
int venta(){

	float cantidad;
	cout<< "           Nueva venta          "<<endl;cin.ignore();
	cout<<"\nNombre del producto: ";cin.getline(eliminado,100,'\n');
	for(int i=0;i<15;i++){
		if(strcmp(eliminado,productos[i].nombre)==0){
			cout<<"Cantidad: ";cin>>cantidad;
			productos[i].cantidad=productos[i].cantidad-cantidad;
			cout<<" ------------------------------------------------------ "<<endl;
			cout<<"                       Recibo                           "<<endl;
			cout<<" ------------------------------------------------------ "<<endl;
			cout<<"Producto: "<<productos[i].nombre<<endl;
			cout<<"Precio por unidad: "<<"S/."<<productos[i].precio<<endl;
			cout<<"Cantidad: "<<cantidad<<endl;
			cout<<"Total a pagar: "<<"S/."<<productos[i].precio*cantidad<<endl;
			}
		else{
					cout<<"Producto no registrado"<<endl;break;
				}
		}

}
int compra(){

	cout<< "           Nueva compra          "<<endl;
	cout<<"\nNombre del producto: "<<endl;
	cout<<"Cantidad: "<<endl;

}
int inventario(){

	int op; titulo();
	do{
	cout<<"<1> VER INVENTARIO "<<endl;
	cout<<"<2> NUEVO PRODUCTO "<<endl;
	cout<<"<3> ELIMINAR PRODUCTO "<<endl;
	cout<<"<4> VOLVER "<<endl;
	cout<<"ACCIÓN: ";cin>>op;
	switch (op){
	case 1:
		cout<<"                         INVENTARIO DISPONIBLE                  "<<endl;
	cout<<" -------------------------------------------------------------- "<<endl;
	cout << "Nombre"<<"\t\tPrecio"<<"\tPrecio"<<"\tExistencias"<<endl;
    for(int i=0;i<15;i++){
    	if(productos[i].costo>0){
	cout<<productos[i].nombre<<"\t"<<productos[i].costo<<"\t"<<productos[i].precio<<"\t"<<productos[i].cantidad<<endl;
    	}
    }
    cout<<"\n";
	break;
	case 2:
	{
		int cont=0;
	for(int i=0;i<15;i++){
       if(productos[i].costo==0){
    	   while(cont<1){
			cin.ignore();
		cout<<"Nombre del producto: ";cin.getline(productos[i].nombre,100,'\n');
	    cout<<"Precio de compra: ";cin>>productos[i].costo;
	    cout<<"Precio de venta: ";cin>>productos[i].precio;
	    cout<<"Existencias: ";cin>>productos[i].cantidad;
	    cont++;
    	   }
          }
        }
	cout<<"Datos actualizados correctamente"<<endl;
	break;}
	case 3:{
	cin.ignore();
	cout<<"Qué producto eliminar: ";cin.getline(eliminado,100,'\n');
    for(int i=0;i<15;i++){
    	if(strcmp(eliminado,productos[i].nombre)==0){

           productos[i].costo=0;
           productos[i].precio=0;
           productos[i].cantidad=0;
           cout<<"Datos actualizados correctamente"<<endl;
    	}
    }

	break;}

	}
	} while (op!=4);
}
