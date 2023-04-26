#include<iostream>

using namespace std;

void Factors(int n)
{
    //got these from https://www.scaler.com/topics/factors-of-a-number-in-c/
    //print all factors of a number n
    int i=1;
    while (i<=n)
    {
        if (n%i==0){cout<<i<<" ";}
        i++;
    }
}
