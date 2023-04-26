#include<iostream>

using namespace std;

void Prime(int n)
{
    int count=0;
    
    //Write a loop to count factors
    for(int i=1; i<=n;i++)
    {
        if (n%i==0){count++;}
    }
    
    //PRIME NUMER -- a number having factors 1 and itself, it will have only 2 factors
    //check if number is prime, it is true if count will exactly be 2
    if(count==2){cout<<"prime";}
    else {cout<<"not prime";}
    
}
