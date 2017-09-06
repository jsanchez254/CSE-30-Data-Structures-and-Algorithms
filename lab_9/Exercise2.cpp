#include <iostream>
#include "LinkedList.h"
#include "Stack_char.h"

using namespace std;

int main()
{
	stack po;
	cout<<"Function call"<<"\t\tOutput"<<"\t\tStack Contents\n"<<endl;	//table of contents
	cout<<"isEmpty()";							//check if its empty
	if(po.isEmpty())
	{
		cout<<"\t\ttrue ";
	}

	else
	{
		cout<<"\t\tfalse ";
	}
	
	cout<<"\t\t";
	po.print();
	cout<<endl;

	cout<<"push(A)";			//add A
	po.push('A');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;

	
	cout<<"push(Y)";			//add Y
	po.push('Y');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;
	

	cout<<"size()"<<"\t\t\t";		//get size of stack
	cout<<po.size();

	cout<<"\t\t";
	po.print();
	cout<<endl;
	
	cout<<"pop()"<<"\t\t\t"<<po.top();	
	po.pop();				//remove from back
	
	cout<<"\t\t";
	po.print();				
	cout<<endl;

	
	cout<<"isEmpty()";
	if(po.isEmpty())			//check if its empty
	{
		cout<<"\t\ttrue ";
	}

	else
	{
		cout<<"\t\tfalse ";
	}
	
	cout<<"\t\t";
	po.print();
	cout<<endl;

	cout<<"push(D)";			//add D
	po.push('D');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;
	
	cout<<"top()";
	cout<<"\t\t\t"<<po.top();		//print last value
	
	cout<<"\t\t";
	po.print();
	cout<<endl;
	
	cout<<"push(T)";
	po.push('T');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;

	cout<<"pop()"<<"\t\t\t"<<po.top();	
	po.pop();				//delete from back
	
	cout<<"\t\t";
	po.print();
	cout<<"\n"<<endl;

	
}

