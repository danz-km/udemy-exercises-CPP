#include<iostream>

using namespace std;

void Factors(int n)
{
    
    //print all factors of a number n
    for (int i=1; i<=n; i++)
    {
        //dividing itself by index
        //as index increases
        //no remainders are factors
        if (n%i==0){cout<<i<<" ";}

    }
}
