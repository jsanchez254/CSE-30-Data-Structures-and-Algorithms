#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arrSize;
	int values;
	int swap=0;


	cout<<"Enter the size of the array: ";
	cin>>arrSize;

	if(arrSize<=0)
	{
	cout<<"\nERROR : you entered an incorrect value for the array size!!"<<endl;
	}

	else
	{
	int array[arrSize];
	cout<<"Enter the numbers in the array, separated by a space, and press enter: ";

		for(int i=0;i<arrSize;i++)
		{
		cin>>values;
		array[i]=values;
		}

	cout<<"This is the sorted array in a descending order: ";

	int z, w,key;

	for(z=1 ;z<arrSize;z++)									//Insertion sort algorithm
	{

	key=array[z];
												//draws first number from array
		for(w= z-1; (w>=0) && (array[w]<key);w--)					//will push small numbers up
		{

		array[w+1]=array[w];
		swap++;
		}


	array[w+1]=key;
												//will decide in which position number will be
	}


	for(int i=0; i<arrSize;i++)
	{

	cout<<array[i]<<" ";									//prints array from descending to ascending order
	}

	cout<<"\nThe  algorithm selected the maximum for the transverse of the array. "<<endl;
	cout<<"It took "<<swap<<" swaps to sort the array..."<<endl;

	}
}
