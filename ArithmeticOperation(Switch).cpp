#include<iostream>

using namespace std;

void ArithOpt(int x,int y, int choice)
{
    // write switch statement to perform Arithmetic operations
    // depending on choice
    switch(choice)
    {
        case 1: cout<<x+y;
        break;
        
        case 2: cout<<x-y;
        break;
        
        case 3: cout<<x*y;
        break;
        
        case 4: cout<<x/y;
        break;
    }
}
