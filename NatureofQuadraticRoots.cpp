#include<iostream>
#include<cmath>
using namespace std;

void Roots(float a,float b,float c)
{
    float d,r1,r2;
    
    //calculate d
    //based on the formula given d=b^2-4ac
    d = (b*b)-(4*a*c);
    
    // print nature of roots using nested if
    //the case for roots are real and equal
    if (d==0)
    {
        //https://www.storyofmathematics.com/what-is-b-2a-and-why-is-it-important-in-math/
        //r1 will just be -b/2a
        r1 = -b/(2*a);
        cout<<"real and equal "<<r1;
    }  
    
    else 
    {
        //the case for roots are real but unequal
        if (d>0)
        {
            //we use sqrt(b^2-4ac)/2a
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            cout<<"real and unequal "<<r1<<" "<<r2;
        
        }
        //we can just print d<0 simply   
        else
        {
            cout<<"imaginary";
        }
            
   
    }
            
}
