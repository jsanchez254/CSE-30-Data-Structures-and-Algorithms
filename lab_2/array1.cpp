#include <iostream>
#include <string>

using namespace std;

int main(){
	int arrSize;					 //stores the size of the array that is input by the user
	int arrValue;					//stores the values inside the array
	int sum;					//will store the sum that gives the condition of whether or not the array is increasing
	int maxNumber=0;
	int kechuC=0;				       //helps decide if array is increasing

	cout<<"Enter the size of the array: ";
	cin>>arrSize;					//user enters size of the array
	
	if(arrSize<0){

       		cout<<"\n ERROR: you entered an incorrect value for the array size! ";		//if size of array is negative then an ERROR will occur
	}

	else{											//if size of array is positive then continue the program

       		int arr[arrSize];

		cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
		cin>> arrValue;									//user enters values of arrays separated by spaces
		
		
		for(int i=0;i< sizeof(arr)/sizeof(arr[0]);i++){				//will catch all the values of the arrays followed by a chronological order
	        arr[i]=arrValue;
		if(i<sizeof(arr)/sizeof(arr[0])-1){
		cin>>arrValue;
		}


		}

		for(int j=0;j< sizeof(arr)/sizeof(arr[0]);j++){
	        
		if(arr[j]>maxNumber){
		maxNumber=arr[j];
	
	}
		else{
		 kechuC=1;
		break;


	}
		

        	 }
           if( kechuC==1){
            cout<<"This is NOT an increasing array" <<endl;
	}
	if(kechuC==0){
	cout<<"This is an increasing array!!"<<endl;
	}
	}


}
	
