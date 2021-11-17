//Program to Swap two numbers using call by refrence//
#include<iostream>
using namespace std;
void swap (int &x, int &y) //&x and &y are Reference variables
{
        int temp;
        temp=x;
        x=y;
        y=temp;
}
int main()
{
        int a=6,b=9;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}