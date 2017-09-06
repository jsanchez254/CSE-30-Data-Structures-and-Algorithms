#include<iostream>
#include<string>
using namespace std;

void sortArr(int condition, int arr[], int arrSize);


int main()
{
	int arrSize;
	int values;
	int condition;


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
	cout<<"Sort in ascending (0) or descending (1) order: ";
	cin>>condition;

	sortArr(condition, array, arrSize);
	}

}


void sortArr(int condition, int array[], int arrSize)
{
	int i,j,key;

	if(condition == 1)
	{
	cout<<"This is the sorted array in descending order: ";
		for(i=1; i<arrSize; i++)
		{
			key= array[i];

			for(j= i-1;(j>=0)&&(array[j]<key);j--)
			{
			array[j+1]=array[j];
			}
			array[j+1]=key;
		}
		for(int w=0; w<arrSize ;w++)
		{
		cout<<array[w]<<" ";
		}
	cout<<endl;
	}


	if(condition == 0)
	{
	cout<<"This is the sorted array in ascending order: ";

                for(i=1; i<arrSize; i++)
                {
                        key= array[i];

                        for(j= i-1;(j>=0)&&(array[j]>key);j--)
                        {
                        array[j+1]=array[j];
                        }
                        array[j+1]=key;
                }
                for(int w=0; w<arrSize ;w++)
                {
                cout<<array[w]<<" ";
                }
        cout<<endl;



	}
	else if(condition > 1)
	{
	cout<<"You did not enter a valid OPTION to sort the array!!"<<endl;
	}
}
