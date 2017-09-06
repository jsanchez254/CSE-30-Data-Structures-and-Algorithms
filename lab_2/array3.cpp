#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sizeArr;
	int arrValues;
	int count=0;

	cout<< "Enter the size of a 2D array:(This number has to be in between 1 and 10) ";
	cin>>sizeArr;
	if(sizeArr>10){
	cout<<"\n ERROR: your array is too large!";
	}
	else{
	int kechu2d [sizeArr][sizeArr];
	
	
	for(int i=0;i<sizeArr;i++){
	cout<<"Enter the values for row "<<i+1;
	cout<<", seperated by a space, and press enter: "<<endl;
	cin>>arrValues;
	
	for(int j=0;j<sizeArr;j++){
	kechu2d [i][j]=arrValues;
	if(j<sizeArr-1){
	cin>>arrValues;

	}

	}
	}
	for(int w=0;w<sizeArr;w++){
	for(int k=0;k<sizeArr;k++){
	if(kechu2d [w][k]<0){
	count++;
	}

	}
	}
	}	
	cout<<"There are "<<count<< "negative values"<<endl;
}
