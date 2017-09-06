#include <iostream>
using namespace std;

int main(){
	string sentence ="I will always use object oriented programming";
	int kechuNum ;

	cout<<"Enter the number of lines for the punishment :" ;
	cin>>kechuNum;
	if(kechuNum<0)
	{
	cout<<"\nYou entered an incorrect value for the number of lines"<<endl;
	}
	else {
	
	for(int i=0; i<kechuNum;i++)
        {
	cout<<sentence<<endl;
	}

	}
 return 0;
}
