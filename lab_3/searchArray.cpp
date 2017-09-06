#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int arrSize;
	int values;
	int searchNum;
	int count=0;
	int condition;
	int index;

	cout<<"Enter the size of the array: ";
	cin>>arrSize;

	if(arrSize<=0)
	{
	cout<<"\nERROR : you entered an incorrect value for the array size!!"<<endl;
	}

	else
	{
	int array[arrSize];
	cout<<"\nEnter the numbers in the array, separated by a space, and press enter: ";

		for(int i=0; i<arrSize; i++)
		{
		cin>>values;
		array[i]=values;

		}
	cout<<"Enter the number to search for in the array: ";
	cin>>searchNum;

		for(int i=0; i<arrSize; i++)
		{
		count++;
			if(array[i]==searchNum)
			{
				cout<<"Found the value "<<array[i]<< " at index "<<i<<" which took "<<count<<" checks"<<endl;
				condition=1;
				index=i;
				break;
			}

		}
		if(condition==0)
		{
			cout<<"The value " <<searchNum<<" was not found in the array!!"<<endl;
		}
		if(index==0)
		{
			cout<<"We ran into the best case scenario!! "<<endl;
		}
		if(index==arrSize-1)
		{
			cout<<"We ran into the worst case scenario "<<endl;
		}
	}
}
