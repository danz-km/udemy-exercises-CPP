#include<iostream>
using namespace std;

int Digits(int n)
{
    int digit;
    
    //display digits in reverse, seperated by space
    for (int i=1; i<=n; i++)
    {
        digit = n-i;
        cout<<digit;
    }
    return digit;
}

int main()
{
    int m;
    
    m = Digits(5);
}
