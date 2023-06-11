//Find the sum of N natural numbers in C++
//Input:8
//Output: 1 +2 +3 +4 +5+ 6+ 7+ 8 =36

#include<iostream>
using namespace std;
int Summation(int no)
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=1; iCnt<=no; iCnt++)
    {
        iSum=iSum+iCnt;
    }   
    return iSum;
}

int main()
{
    int no=0;
    int iRet=0;

    cout<<"Enter a number:";
    cin>>no;

    iRet=Summation(no);
    cout<<"Summation of n numbers :"<<iRet;



    return 0;
}