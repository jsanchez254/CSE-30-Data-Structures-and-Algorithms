#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stddef.h>
#include <iostream>
using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T>
class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};


// Implement your functions here:

//CONSTRUCTOR
template <class T>
LinkedList<T>:: LinkedList()	
{
	first = NULL;		//initializes first
	last = NULL;		//initializes first
}

//DESTRUCTOR
template <class T>
LinkedList<T>:: ~ LinkedList ()	
{
	while(!isEmpty())	//DELETES SINGLY LINKED LIST
	{
		removeFromBack();
	}
}

//INSERT BACK
template <class T>
void LinkedList<T>:: insertAtBack(T valueToInsert)	
{
	Node<T> * v = new Node<T>;				//creates a new node
	v -> val = valueToInsert;			//gives new node a value
	
	if (first == NULL)				//if true then make first and last point to first created node
	{           
		v->next =NULL;                                                                                                                                         
		first = v;
		last = v;
		
	}
	else
	{
		v->next =NULL;				//will store NULL
		last->next = v;				//makes last equal to NULL
		last = v;				//make last the new node inserted
		
	}
}

//INSERT FRONT
template <class T>
void LinkedList<T>:: insertAtFront(T valueToInsert)	
{
	Node<T> * n =new Node<T>;				//creates a new node
	n->val = valueToInsert;				//gives a new node a value 

	if(first == NULL)				//if true then make first and last point to first created node		
	{
		n->next =NULL;
		first = n;
		last = n;
	}

	n ->next = first;				//will make next of n store first
	first = n;					//new first is n
	

		

}
//REMOVE FROM BACK
template <class T>
bool LinkedList<T>:: removeFromBack()			
{	
	if(first==NULL)					//empty
	{
		return false;		
	}

	if(first==last)					//delete first or last since they are pointing to the same node
	{		
        	delete first;	
        	first = NULL;
        	last = NULL;
        	return true;				//not empty
        }
	else
	{
		
		Node<T>* old = first;			//make old node equal to first
		
		while(old -> next !=last)		//will iterate until it reaches the previous in the list right before last
		{
			old = old->next;
		}	                    
   		delete last;	                    	//delete last
    		last = old; 	 			//last is now equal to old
		return true;				//not empty
	}
}

//REMOVE FROM FRONT
template <class T>
bool LinkedList<T>:: removeFromFront()		
{
	if(first ==NULL)
	{
		return false;			//empty
	}

	if(first==last)				//delete first or last since they are pointing to the same node
	{
		delete first;
		first =NULL;
		last =NULL;
		return true;			//not empty
	}
	else
	{
		Node<T> * old = first;		//old pints to first
		old = old->next;		//old skips first and points to it
		delete first;			//delete first
		first= old;			//make first equal to old
		return true;			//not empty
	}

}


//SIZE
template <class T>
int LinkedList<T>:: size()				
{
	int count = 0;					//will count number of nodes
	Node<T>* n = first;
	while(n  != last)				//if it reaches last then break
	{
		count++;
		n= n->next;
		if(n==last)
		{
			count++;
		}
	}
	return count;				
}

//IS EMPTY
template <class T>
bool LinkedList<T>:: isEmpty()				
{
	if(first == NULL)				//if empty return true
	{
		return true;
	}
	else
	{
		return false;				//if not return false
	}
}

//CLEAR
template <class T>	
void LinkedList<T>:: clear()					
{	
	
	while(!isEmpty())				//delete list by calling remove from back function until list is empty
	{
		removeFromBack();	
		 
	}
	
}

//PRINT
template <class T>
void LinkedList<T>:: print()				
{
	if(first != NULL)				//if list is not empty
	{
		Node<T>* n = first;
		
		while(n!=last)				//goes through list values until it reaches last node
		{
			cout<<n->val<<",";
			n= n->next;
		}
	
		if(n != NULL)				//helps print out last value in list
		{
			cout<<n->val;
		}	
	}
}






#endif

