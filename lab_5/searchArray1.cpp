#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string* A,int arraySize);

int binarySearchR(string* A, int first, int last, int key);
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
		count++;

	}
	cout<<"Number of words in file is "<<count<<": "<<endl;		//prints out number of words
	A= new string[count];						//string array is created with a the a size equivalent to the number of words in file
	access.close();							//close file, good coding practice
	ifstream accessArr("words_in.txt");				//open same file but now create another


	for(int i=0;i<count;i++)			//loop that will input words in the new created array

	{
		accessArr>>dummy;			//the variable dummy enables us to store data inside it so that then it can be passed to the array
		A[i]=dummy;				//words are being strored in array
		cout<<i<<"-"<<A[i]<<endl;		
	}

	accessArr.close();
	
	//check if array is sorted
	check=checkArraySort(A,count);			

	if(check==-1)

	{
		cout<<"The array is sorted in descending order!"<<endl;
		activate=1;
	}
	if(check==1)
	{
		cout<<"The array is sorted in ascending order!"<<endl;
		activate=0;
	}



       //WILL CHECK AGAIN WHETHER ARRAY IS SORTED OR NOT AND THEN CALL BINARY SEARCH FUNCTION

	if(check==0)							//if this happens make an error happen saying that the array needs to be sorted

	{
		cout<<"Error, this is not a sorted array "<<endl;

	}

	else
        {

            cout<<"Enter word to be searched for in array: ";		

            cin>>key;							//user enters word that will be searched
	    int key2=key.length();					//convert the word so it gives us the number of characters to use it in binarySearch

	     //call to binarySearch to find word in array
	    check2=binarySearchR (A, 0 , count-1, key2);


	    if(check2 >-1)						//if this is true then print the word found and index
	    {
	    	cout<<"Found key "<<key<< " at index "<<check2<<endl;

	    }

	    else if(check2== -1)					//if this is true then word was not found
            {
	    	cout<<"The key "<<key<<" was not found in the array!!"<<endl;	

	    }
        }
}

//BINARY SEARCH: RECURSIVE FUNCTION
int binarySearchR(string* A, int first, int last, int key)
{
	//ASCENDING
	if(activate==0)								//if actiavte equals zero then use binary search for the acending array		
	{

		if(key < A[first].length() || key > A[last].length())		//makes sure that the key value doesn't go out of bonds (first and last)

 		{

        		return -1; 						//NOT FOUND

        	}

   		int mid = ((first+last)/2);					//integer that will be assigned to array's index to split it

   		if(key==A[mid].length())					//if word is found then return the index

    		{
        		return mid;
    		}

        	else

        	{
        		if(key < A[mid].length())				//if it's not found and is less than the splitted array value then check how array should be splitted
        		{
                		return binarySearchR(A,first,mid-1,key);
        		}

        		else							//if it's not found and is less than the splitted array value then check how array should be splitted
        		{
            			return binarySearchR (A,mid+1,last,key);
        		}
        	}
	}
	//DESCENDING
	if(activate==1)								//if actiavte equals one then use binary search for the acending array
	{

		if(key > A[first].length() || key < A[last].length())		//makes sure that the key value doesn't go out of bonds (first and last)

        	{
                	return -1; 						//NOT FOUND
        	}

        	int mid = ((first+last)/2);					//integer that will be assigned to array's index to split it


        	if(key==A[mid].length())					//if word is found then return the index

        	{
                	return mid;
        	}

        	else
        	{
                	if(key > A[mid].length())				//if it's not found and is less than the splitted array value then check how array should be splitted
                	{
                        	return binarySearchR(A,first,mid-1,key);
                	}

                	else							//if it's not found and is less than the splitted array value then check how array should be splitted

                	{
                        	return binarySearchR (A,mid+1,last,key);
                	}
        	}
	}
}


int checkArraySort(string* A,int arraySize)
{
    int descend = 0;					//will decide if array descends
    int ascend = 0;					//will decide if array ascends

    for(int i = 0; i < arraySize; i++)
	{
		//tells if array is ascending 
		if( A [i].length() < A [i+1].length()) 
		{
			ascend = 1;

		}
		//tells if array is descending
		else if(A [i].length() > A [i+1].length())
		{

			descend = 1;
		}

	}

	if(ascend==1 && descend==0) 			//if array ascends return 1
	{
		return 1;
	}

	else if(descend==1 && ascend==0)		//if array descends return -1
	{
		return -1;
	}

	else						//else return 0 for non sorted array
	{

		return 0;

	}

}


