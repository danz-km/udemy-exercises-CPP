//since we've included necessary directives, it's time to solve this
//we need sqrt() for because we need to find the square root of the b squared minus 4 ac
#include<cmath>

float root(int a,int b,int c)
{
    //based off the internet, this is the formula for x = (-b ± √ (b2 - 4ac)
    //yes line 7 has an incomplete formula
    //the correct formula is x = (-b ± √ (b2 - 4ac)/2a
    float root1;
    
    //what's required is just the positive root, we'll ignore the minus of the plus-minus
    //don't forget to format the float
    root1=(float)((sqrt((b*b)-(4*a*c)))-b)/2*a;
    
    return root1;
}
