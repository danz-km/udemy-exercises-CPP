#include<iostream>

using namespace std;

void Perfect(int n)
{
    int sum=0;
    
    //write a loop to find sum of the factors of number
    //check if number is perfect or not
    for (int i=1; i<=n; i++)
    {
        if (n%i==0){sum+=i;}
        
    }
    
    if (sum==n*2){cout<<"perfect";}
    else {cout<<"not perfect";}
}
