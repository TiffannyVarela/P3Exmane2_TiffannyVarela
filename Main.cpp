#include <string>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <conio.h>
#include "Nodo.cpp"
#include "Pila.cpp"
#include <fstream>
#include <iostream>

using namespace std;

int menu();
void sacar(string);
Pila* pila = new Pila();
Nodo* nodo;
string Operaciones(int, int, string);


int main(){
	int opc =0;
	string operacion;
	int cont =1;
	int num1, num2;
	string operador;
	string result;
	do{
		switch(opc=menu()){
			case 1:
				cout<<"Ingrese la Operacion: ";
				cin>>operacion;
				
				/*cout<<"Numero 1: "<<num1<<endl;
				cout<<"Operador: "<<operador<<endl;
				cout<<"Numero 2: "<<num2<<endl;
				cout<<num1+num2<<endl;*/
				sacar(operacion);
				while(true){
					num1=atoi(pila->pop()->getValue().c_str());
					if(pila->isEmpty()){
						break;
					}
					operador=pila->pop()->getValue();
					num2=atoi(pila->pop()->getValue().c_str());
					
					result=Operaciones(num1,num2,operador);
					pila->push(result);
				}
				cout<<"Resultado: "<<num1;
				//cout<<Operaciones(num1,num2,operador)<<endl;
				break;
				
			case 2:
				cout<<"Saliendo"<<endl;
				cout<<"TARDA PORQUE ESTA ELIMINANDO LOS APUNTADORES"<<endl;
				pila->~Pila();
				nodo->~Nodo();
				break;
		}
	}while(opc!=2);
	return 0;
}

int menu(){
	int opc=0;
	while (true){
		cout<<endl;
		cout<<"MENU"<<endl
			<<"1.-Ingresar Cadena"<<endl
			<<"2.-Salir"<<endl;
			
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		if(opc>=1 && opc<=2){
			return opc;
		}
		else{
			cout<<"Opcion elegida no es valida"<<endl;
		}
	}
	return 0;
}

void sacar(string op){
	string acum="";
	string del="+";
	bool p = false;
	for(int i=0; i<op.size(); i++){
		
		if(op.at(i)=='+' || op.at(i)=='*' || op.at(i)=='/' || op.at(i)=='-'){
			if(p){
				acum="-"+acum;
				p=false;
			}
			if(op.at(i)=='-'){
				pila->push("+");
				p=true;
			}
			pila->push(acum);
			if(op.at(i)=='+'){
				pila->push("+");
			}
			if(op.at(i)=='*'){
				pila->push("*");
			}
			if(op.at(i)=='/'){
				pila->push("/");
			}
			cout<<acum<<endl;
			acum="";
		}
		else{
			acum+=op[i];
		}
	}
	pila->push(acum);	
}

string Operaciones(int num1, int num2, string operador){
	double resp;
	string conv_resp;
	if(operador=="+"){
		resp=num1+num2;
		//cout<<resp<<endl;
		conv_resp=resp;
		
	}
	if(operador=="*"){
		resp=num1*num2;
		conv_resp=resp;
		//cout<<resp<<endl;
	}
	if(operador=="/"){
		resp=num1/num2;
		conv_resp=resp;
		//cout<<resp<<endl;
	}
	return conv_resp;
}
