#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int checkArraySort(string* A,int arraySize);

int main()
{
	int count=0;					//will store the number of words in the file created
	ifstream access ("words_in.txt");		//opens file created in computer
	string dummy;					//string that will read file
	int check;
	string* A;

	while(!access.eof())				//will read file and stop when everything has been read
	{
		access>>dummy;				//file is bheing read
		count++;
	}
	cout<<"Number of words in file is "<<count<<": "<<endl;		//prints out number of words

	A= new string[count];				//string array is created with a the a size equivalent to the number of words in file

	access.close();					//close file, good coding practice

	ifstream accessArr("words_in.txt");			//open same file but now create another

	for(int i=0;i<count;i++)			//loop that will input words in the new created array
	{
		accessArr>>dummy;
		A[i]=dummy;				//words are being strored in array
		cout<<A[i]<<endl;

	}
	accessArr.close();

 	check=checkArraySort(A,count);			//call to checkArray while return value will be assigned to check

	if(check==-1)					//if check equals -1 then array descends
	{
		cout<<"The array is sorted in descending order!"<<endl;
	}

        if(check==0)					//if check equals 0 then array is not sorted
        {
                cout<<"The array is not sorted!"<<endl;
        }

        if(check==1)					//if array equals 1 then array is ascending
        {
                cout<<"The array is sorted in ascending order!"<<endl;
        }

 }


int checkArraySort(string* A,int arraySize)
{
        int descend = 0;
	int ascend = 0;

	for(int i = 0; i < arraySize; i++)
	{
		
			//ascending check
			if( A [i] > A [i+1]) 
			{
				ascend = 1;
				
			}	
			//descending check
			else if(A [i] < A [i+1])
			{
				descend = 1;
				
			}

	}

		if(ascend==1 && descend==0) 				//ascending array returns 1
		{
			return 1;
		}
		else if(descend==1 && ascend==0)			//descending array returns -1
		{
			return -1;
		}
		else							//if it's not sorted return 0
		{	
			return 0;
		} 
	
}

