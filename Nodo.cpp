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
		
		Nodo(string value_){
			value=value_;
			next=NULL;
		}
		
		string getValue(){
			return value;
		}
		
		void setValue(string value_){
			value.assign(value_);
		}
		
		Nodo* getNext(){
			return next;
		}
		
		void setNext(Nodo* next_){
			next=next_;
		}
		
		~Nodo(){
		}
		
};

#endif
