#include<iostream>
using namespace std;

void Working(int hour)
{
    //write condition here to print "working" or "leisure"
    //condition is if hour is from 9 to 18 its working hours
    if (hour>=9&&hour<=18)
        cout<<"working";
    else
        cout<<"leisure";
}
