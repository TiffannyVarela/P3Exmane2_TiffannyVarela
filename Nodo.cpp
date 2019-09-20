#include <string>
#include <string.h>

#ifndef NODO_CPP
#define NODO_CPP

using namespace std;

class Nodo{
	private:
		string value;
		Nodo* next;
		
	public:
		Nodo(){
		}
		
		Nodo(string value){
			this->value=value;
			this->next=NULL;
		}
		
		string getValue(){
			return this->value;
		}
		
		void setValue(string value){
			this->value.assign(value);
		}
		
		Nodo* getNext(){
			return this->next;
		}
		
		void setNext(Nodo* next){
			this->next=next;
		}
		
		~Nodo(){
		}
		
};

#endif
