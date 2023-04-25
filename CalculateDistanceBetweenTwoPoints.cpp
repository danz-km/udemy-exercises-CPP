//including math header file to use sqrt()
#include<cmath>


float distance(int x1,int y1,int x2,int y2)
{
    float dist;
    //so the formula I got from the web is d=√((x2 – x1)² + (y2 – y1)²)
    //got it first try
    dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));//write expression here
    
    return dist;
}
