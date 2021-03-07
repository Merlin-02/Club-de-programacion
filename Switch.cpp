#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;

main(){
	
int Decision;

cout<<"Ingresa un numero: "; cin>>Decision;

switch(Decision){
	case 1: cout<<"Caso 1";
		break;
	case 2: cout<<"Caso 2";
		break;
	case 3:	cout<<"Caso 3";
		break;
	default: cout<<"La opcion no es valida.";
		break;
}
cout<<"Fin del programa.";
system("pause");
}

