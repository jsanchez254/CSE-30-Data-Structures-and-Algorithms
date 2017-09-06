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
	int tmp;

	if(condition == 0)
	{
	cout<<"This is the sorted array in ascending order: ";
	  for (int i = 0; i < arrSize -1; i++)
		{

			for (int j = i+1; j < arrSize; j++)
			{

				if (array[i] > array[j])

				{

				tmp = array[i];

				array[i] = array[j];

				array[j] = tmp;

				}
			}
   		 }
		for(int i=0; i<arrSize;i++)
		{
		cout<<array[i]<<" ";
		}
	cout<<endl;
	}

	if(condition == 1)
	{
	cout<<"This is the sorted array in descenidng order: ";
	  for (int i = 0; i < arrSize -1; i++)
		{

			for (int j = i+1; j < arrSize; j++)
			{

				if (array[i] < array[j])

				{

				tmp = array[i];

				array[i] = array[j];

				array[j] = tmp;

				}
			}
		}
	 	for(int i=0; i<arrSize;i++)
                {
                cout<<array[i]<<" ";
                }
	 cout<<endl;

	}
	else if(condition > 1)
	{
	cout<<"You did not enter a valid OPTION to sort the array!!"<<endl;
	}
}


