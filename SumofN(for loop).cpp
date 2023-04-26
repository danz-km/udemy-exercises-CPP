#include<iostream>
using namespace std;

void SumOfN(int n)
{
    int sum=0;
  
    // write a loop to find sum of n natural number
    //index starts from 1
    for (int i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    cout<<sum;
}
