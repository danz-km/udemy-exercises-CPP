#include<iostream>
using namespace std;

void Grades(int m1,int m2,int m3)
{
    float Total,Avg;
    
    //use the float typecase
    Total = (float)m1+m2+m3;
    
    Avg=Total/3;
    
    //write nested if statements to print grades
    if (Avg>=60)
    {
        cout<<'A';
    }
    
    else 
    {
        if (Avg>=35&&Avg<60)
        {
            cout<<'B';
        }
        
        else 
        {
            cout<<'C';
        }
    }
    
}
