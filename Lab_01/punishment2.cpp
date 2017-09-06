#include <iostream>
using namespace std;

int main(){
	string sentence ="I will always use object oriented programming";
        string typo= "I will always use object orienteddd programing";
	int kechuNum ;
	int kechuNum2;
	cout<<"Enter the number of lines for the punishment :" ;
	cin>>kechuNum;
	
if(kechuNum<0)
	{
	cout<<"\nYou entered an incorrect value for the number of lines"<<endl;
	}
	
else {
	cout<<"\n Enter the line for which we want to make the typo: ";
	cin>>kechuNum2;
	
if(kechuNum2<0)
	{
	cout<<"\n You entered the an incorrect value for the line typo!";
	}
for(int i=0; i<kechuNum;i++)
        {
	if(kechuNum2 ==i-1){
        
	cout<<typo<<endl;
	continue;
	}
	cout<<sentence<<endl;
        
	}

	}
 return 0;
}
