#include<iostream>
using namespace std;

void Discount(int amount)
{
    float disAmount;
    
    //write nested conditions to print discounted amount 
    if (amount>=5000)
    {
        disAmount = amount*0.80;
    }
    else
    {
        if (amount>=2000&&amount<5000)
        {
            disAmount = amount*0.90;
        }
        else
        {
            disAmount = amount*0.95;
        }
    }
    
    cout<<disAmount;
}
