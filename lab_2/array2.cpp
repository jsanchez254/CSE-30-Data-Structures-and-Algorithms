#include <iostream>
#include<string>

using namespace std;

int main()
{
	string userWord;
	cout<<"Enter the word you wish to reverse: ";
	cin>>userWord;
	string reverse="";			//will store reversed word
        int size = userWord.size();
	
	for(int i=0; i<userWord.size() ; i++)	//loop that will reverse word
	{
		size--;
		reverse+= userWord[size];	//add values to reverse string in a reverse order
	
	}
	cout<<"\nThe reverse string is: ";
	cout<<reverse<<endl;
		
	



}


