//Find the Sum of Numbers in a Given Range in C++
/* Example
Input : 2 5
Output : 2 + 3 + 4 + 5 + 6 = 20   */

#include<iostream>
using namespace std;
int Summation(int no1 ,int no2)
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=no1; iCnt<=no2; iCnt++)
    {
        iSum=iSum+iCnt;
    }   
    return iSum;
}

int main()
{
    int no1=0;
    int no2=0;
    int iRet=0;

    cout<<"Enter a number1:";
    cin>>no1;

    cout<<"Enter a number2:";
    cin>>no2;

    iRet=Summation(no1,no2);
    cout<<"Summation of n numbers :"<<iRet;



    return 0;
}