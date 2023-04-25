#include<iostream>
using namespace std;

void Eligible(int age)
{
    //write condition here to check if person is eligible
    //the condition: if age is less than 12 or greater than 50
    if (age<=12||age>=50)
        cout<<"eligible";
    else
        cout<<"not eligible";
}
