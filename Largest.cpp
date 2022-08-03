/* wap to find largest number from three number*/
#include<iostream>
using namespace std;
/*Function to find largest number*/
int Largest(int n1,int n2,int n3)
{	
	if ((n1>n2) && (n1>n3))
	{
		return n1;
	}

	else if((n2>n3) && (n2>n1))
	{
		return n2;
	}

	else
	{
		return n3;
	}	
}
/* main program*/
int main()
{
	int num1,num2,num3;
	cout<<"Enter First Number:";
	cin>>num1;

	cout<<"Enter Second Number:";
	cin>>num2;

	cout<<"Enter Third Number:";
	cin>>num3;

	cout<<"Largest number is :"<<Largest(num1,num2,num3);
	return 0;

}