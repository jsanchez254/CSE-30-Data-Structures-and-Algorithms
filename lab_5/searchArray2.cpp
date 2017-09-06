#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string* A,int arraySize);

int binarySearchL(string* A, int arraySize, int k);

int activate;

int main()

{

	int count=-1;					//will store the number of words in the file created
	ifstream access ("words_in.txt");		//opens file created in computer
	string dummy;					//string that will read file
	int check;					//will receive value from checkArraySort function to tell whether or not it is sorted
	int check2;					//will receive value from binarySearch to tell whether or not key was found in the array
	string* A;					//pointer that will help create an array
	string key;					//word entered by user to be searched for

	while(!access.eof())				//will read file and stop when everything has been read
	{
		access>>dummy;				//file is being read
		count++;				//adds one until it gets the amount of words in file

	}
	cout<<"Number of words in file is "<<count<<": "<<endl;		//prints out number of words
	A= new string[count];						//string array is created with a the a size equivalent to the number of words in file
	access.close();							//close file, good coding practice
	ifstream accessArr("words_in.txt");				//open same file but now create another


	for(int i=0;i<count;i++)				//loop that will input words in the new created array

	{

		accessArr>>dummy;				//helps read file
		A[i]=dummy;					//words are being strored in array
		cout<<i<<"-"<<A[i]<<endl;

	}

	accessArr.close();

	//check if array is sorted
	check=checkArraySort(A,count);

	if(check==-1)

	{

		cout<<"The array is sorted in descending order!"<<endl;
		activate=0;

	}
	if(check==1)
	{
		cout<<"The array is sorted in ascending order!!!!!"<<endl;
		activate=1;
	}


//WILL CHECK AGAIN WHETHER ARRAY IS SORTED OR NOT AND THEN CALL BINARY SEARCH FUNCTION

	if(check==0)
	{
		cout<<"Error, this is not a sorted array "<<endl;

	}

	else
        {

            cout<<"Enter word to be searched for in array: ";
            cin>>key;
	   int key2=key.length();

	    //call to binarySearch to find word in array
	    check2 = binarySearchL (A, count, key2);
	    int activate=0;                             		  //trap card

	    if(key==A[0])						  //if key is equal to the first value then activate "activate"						
		{
			activate=1;
			check2=0;					  //set check2 to zero so it prints the index of first value
		}

		if(check2 >=0|| activate==1)				  //if this is true then print out found key...

		{

			cout<<"Found key "<<key<< " at index "<<check2<<endl;	//prints out where word was found

		}

		else if(check2== -1|| key != A[check2]||activate==0)		//else print out "word was not found"

		{

		cout<<"The key "<<key<<" was not found in the array!!"<<endl;

		}
        }
}

//BINARY SEARCH ALGORITHM
int binarySearchL(string* A, int array_size, int k)
{
	int first=0;

        int last=array_size-1;

	//DESCENDING
	if(activate==0)
	{
        while(first<=last)				//keep array bounded from 0 to size of array
        {

                int mid = (first+last)/2;		//split mid into two to then assign it to array index and suppose that it splits

                if(A[mid].length()==k)				//if word was found then return where it was found (mid)
                {

                	return mid;			//returns index

                }

                else if (A[mid].length()<k)			//if the middle value of array is greater than word then subtract 1 from the medium value
                {

                	last = mid-1;

                }
                else if(A[mid].length()>k)			//if the middle value of array is less than word then add 1 from the medium value
                {

                	first = mid+1;

                }

        }

        return -1;
	} 					//key is not found

	//ASCENDING ORDER
	if(activate==1)
	{

	  while(first<=last)                              //keep array bounded from 0 to size of array
          {

                int mid = (first+last)/2;               //split mid into two to then assign it to array index and suppose that it splits

                if(A[mid].length()==k)                          //if word was found then return where it was found (mid)
                {

                        return mid;                     //returns index

                }

                else if (A[mid].length()>k)                     //if the middle value of array is greater than word then subtract 1 from the medium value
                {

                        last = mid-1;

                }
                else if(A[mid].length()<k)                      //if the middle value of array is less than word then add 1 from the medium value
                {

                        first = mid+1;

                }

        }

        return -1;
	} 

}




//CHECKARRAY FUNCTION
int checkArraySort(string* A,int arraySize)
{

    int descend = 0;				//will decide if array descends
    int ascend = 0;				//will decide if array ascends

    for(int i = 0; i < arraySize; i++)
	{
		//tells if array is ascending 

		if( A [i].length() < A [i+1].length()) 	
		{
			ascend = 1;

		}
		//tells if array is descending

		if( A[i].length() >A[i+1].length())
		{
			descend = 1;

		}



	}

	if(ascend==1 && descend==0) 		//if array ascends return 1
	{

		return 1;
	}

	else if(descend==1 && ascend==0)	//if array descends return -1
	{
		return -1;
	}

	else					//else return 0 for non sorted array
	{
		return 0;
	}
	

}


