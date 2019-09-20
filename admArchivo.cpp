#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>
#include "Nodo.cpp"
#include "Lista.cpp"
#include<string.h>
#include <vector>
#include <bits/stdc++.h>


#ifndef admArchivo_CPP
#define admArchivo_CPP
using namespace std;
class admArchivo{
    private:
          string ruta; //ROM
          vector<Persona*> personas; //RAM                          
    public:
         
        admArchivo(string ruta){
           this->ruta=ruta;
		 }  
		           
        string getRuta(){
             return ruta;
		} 
        
        void admArchivo(Persona *p){
             personas.push_back(p);
	    }
        
         vector<Persona*> getPersonas(){
              return this->personas;
         } 

		void remPersona(int p){
              personas.erase(
			     personas.begin()+p);
         }
		 
		 int getN(){
           personas.size();
		}             
        
        ~admPersona(){}
            
    string token(string cadena, string divisor, 
                            int pos){
       if(cadena.size()>0){
         char oracion[cadena.size()]; 
         for (int i=0;i<=cadena.size();i++)
         {oracion[i]=cadena[i];}                    
         char *ptrtoken; 
         int num=1;
         const char* d=divisor.c_str();
         ptrtoken = strtok(oracion , d);             
         while(ptrtoken){
             if(num==pos){ 
                return ptrtoken;}                 
             ptrtoken = strtok(NULL, d);
             num++;}
         return "";
       }else{return "";}
    }
            
    void escribir(){
      ofstream Escribir;
      Escribir.open(ruta.c_str());  
      for(int i=0; i<personas.size();i++){
                 Escribir<<personas.at(i)->getId()<<";"
                         <<personas.at(i)->getNombre()<<";"
                         <<personas.at(i)->getEdad()<<";"
                         <<personas.at(i)->getGenero()<<endl;
			 }             
      Escribir.close(); 
    }
            
                         
    void print(){
          cout<<"Personas:"<<endl;
        
        for(int i=0; i<personas.size();i++){
		        cout<<"\t"<<"-";				    	
				personas.at(i)->print();				    
		  }
    }             
};
#endif
