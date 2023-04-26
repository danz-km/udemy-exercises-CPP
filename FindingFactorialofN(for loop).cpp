#include<iostream>

using namespace std;

void Factorial(int n)
{
    int fact=1;
    
    //write a loop for finding factorial on n
    for (int i=1; i<=n; i++)
    {
        //fact = fact*i;
        //rewriting it in a shorter way
        fact*=i;
    }
    
    cout<<fact;
    
}
