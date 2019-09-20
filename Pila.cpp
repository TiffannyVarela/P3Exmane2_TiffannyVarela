#include <string>
#include "Nodo.cpp"

#ifndef PILA_CPP
#define PILA_CPP

using namespace std;

class Pila{
	private:
		Nodo* head;
		
	public:
		Pila(){
		}
		
		Pila(Nodo* head){
			this->head=head;
		}
		
		void push(string value){
			Nodo* temp = new Nodo(value);
			temp->setNext(head);
			head = temp;
		}
		
		Nodo* pop(){
			Nodo* temp = head;
			head->getNext();
			return temp;
		}
		
		Nodo* top(){
			return head;
		}
		
		bool isEmpty(){
			if(head->getNext()==NULL){
				return true;
			}
			else{
				return false;
			}
		}
		
		~Pila(){
		}
		
};

#endif
