#ifndef _STACK_H
#define _STACK_H
#include <iostream>
#include <string>
#include "LinkedList.h"


template<class T>
class Stack : public LinkedList <T>
{
	public:
	  Stack(); // Constructor
        ~Stack(); // Destructor
	void push(T value);// push function
	int pop(); //pop function
	T& top();// top function
	
	Node<T> *first;
	Node<T> *last;
};



//CONSTRUCTOR
template<class T>
Stack<T>:: Stack()				
{

}
//DESTRUCTOR
template<class T>
Stack<T> :: ~Stack()
{

}
//PUSH FUNCTION
template<class T>
void Stack<T> :: push(T value)
{
	Stack<T>::insertAtFront(value);			//calls function to insert from back of stack
}
//POP FUNCTION
template<class T>
int Stack<T> :: pop()
{
	Stack<T>::removeFromFront();			//calls function to remove from back of stack
}
//TOP FUNCTIONt
template<class T>
T& Stack<T>:: top()
{
	Node<T>* old = LinkedList<T>::first;			//make old node equal to first
		


	return old-> val;
}

#endif
