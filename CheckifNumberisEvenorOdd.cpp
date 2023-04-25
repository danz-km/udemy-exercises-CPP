#include<iostream>
using namespace std;

void OddEven(int n)
{
    //write condition here to check "odd" or "even"
    //for this we could use the % operator to find out if 
    //there will be a remainder after the division of an int n/2 
    if (n%2==0)
        cout<<"even";
    else 
        cout<<"odd";
}
