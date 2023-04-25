#include<iostream>

using namespace std;

void DayName(int day)
{
    
    //Display day name in 3 letters using else if ladder
    if (day==1)
    {
       cout<<"sun"; 
    }
    else if(day==2)
    {
        cout<<"mon"; 
    }
    else if(day==3)
    {
        cout<<"tue"; 
    }
    else if(day==4)
    {
        cout<<"wed"; 
    }
    else if(day==5)
    {
        cout<<"thu"; 
    }
    else if(day==6)
    {
        cout<<"fri"; 
    }
    else if(day==7)
    {
        cout<<"sat"; 
    }
}
