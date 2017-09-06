#include<iostream>
#include<string>

using namespace std;

string combineStr(string word, int numTimes);

int main()
{
	string word;									//stores the word that user enters
	int numTimes;									//number of times that word will be repeated

	cout<<"Enter a string: ";
	cin>>word;

	cout<<"Enter a number of times: ";
	cin>>numTimes;

	cout<<"The resulting string is: "<<combineStr(word,numTimes)<<endl;		//calls the function named combineString and then prints out the return value
}

string combineStr(string word, int numTimes)						//function that will combine string
{
	string combinedStr;
	for(int i=0; i<numTimes; i++)							//word that user entered times number of times
	{
	combinedStr+=word;
	}

return combinedStr;
}
