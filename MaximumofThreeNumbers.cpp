//my code

#include<iostream>
using namespace std;

void Max3(int a,int b,int c)
{

//write nested if statements to print maximum of 3 numbers
    if (a>b)
    {
        if (a>c)
            cout<<a;
    }
    else if (b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }   
    
}


//the answer

/*void Max3(int a,int b,int c)
{

    if(a > b && a > c)
    {
        cout<<a;
    }
    else
    {
        if(b > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
}*/
