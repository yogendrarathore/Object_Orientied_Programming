#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;

    cout<<"Enter Positive Integer: ";
    cin>>num;
    for(int i=num; i>=1; i--)
    {
        fact*=i;
        
        
    }

    cout<<"Factorial Of Given Number is: "<<fact;

    

}