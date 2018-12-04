//============================================================================
// Name        : final.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "funcion.h"
//coment

int main() {

do{

switch (opciones()){
case 1: venta();break;
case 2: compra();break;
case 3: inventario();break;

}
} while(opciones()!=4);

	return 0;
}
