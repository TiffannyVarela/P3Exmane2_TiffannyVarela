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
			head=NULL;
		}
		
		Pila(Nodo* head_){
			head=head_;
		}
		
		void push(string value){
			Nodo* temp = new Nodo(value);
			temp->setNext(head);
			head = temp;
		}
		
		Nodo* pop(){
			Nodo* temp = head;
			head=head->getNext();
			return temp;
		}
		
		Nodo* top(){
			return head;
		}
		
		bool isEmpty(){
			return head==NULL;
		}
		
		~Pila(){
		}
		
};

#endif
