#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers:";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum is "<<sum;
}