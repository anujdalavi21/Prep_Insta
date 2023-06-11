//Program to Check Whether a Year is a Leap Year or Not in C++
/*
    Example
Input : 2020
Output : 2020 is a Leap Year
*/

#include<iostream>
using namespace std;

bool CheckLeap(int iYear)
{
    if((iYear % 400 ==0) || ( (iYear %4==0) && (iYear % 100 !=0))) 
    {
        return true; 
    }
    else
    {
        return false;
    }

}

int main()
{
    int iYear=0;
    bool bRet=false;
    cout<<"Enter a year:";
    cin>>iYear;

    bRet=CheckLeap(iYear);
    if(bRet==true)
    {
        cout<<"Leap year"<<endl;
    }
    else
    {
        cout<<"Not a leap year"<<endl;
    }

    return 0;
}