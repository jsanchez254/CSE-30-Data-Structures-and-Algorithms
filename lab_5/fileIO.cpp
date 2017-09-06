#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int count=-1;					//will store the number of words in the file created
	ifstream theFile ("words_in.txt");		//opens file created in computer
	string dummy;					//string that will read file

	while(!theFile.eof())				//will read file and stop when everything has been read
	{
		theFile>>dummy;				//file is bheing read
		count++;
	}
	cout<<"Number of words in file is "<<count<<": "<<endl;		//prints out number of words

	string arr[count];				//string array is created with a the a size equivalent to the number of words in file

	theFile.close();				//close file, good coding practice

	ifstream file("words_in.txt");			//open same file but now create another 

	for(int i=0;i<count;i++)			//loop that will input words in the new created array
	{
		file>>arr[i];				//words are being strored in array
		cout<<arr[i]<<endl;

	}


	theFile.close();

	ofstream theFile2 ("words_out.txt");		//creates a file in the computer

        for(int i=0;i<count;i++)			//loop that will give values to the new created file
        {
		theFile2<<arr[i]<<endl;			//inputing values from array into file
	}

}
