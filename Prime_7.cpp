/*C++ Program to Check Whether the Number is Prime or Not
Example 
Input : 5
Output : 5 is a Prime

*/
#include<iostream>
using namespace std;
bool CheckPrime(int no)
{
    int iCnt=0;
    bool bFlag=true;

    for(iCnt=2; iCnt<(no /2); iCnt++)
    {
        if(no % iCnt==0)
        {
           bFlag=false;
           break; 
        }
    }
    return bFlag;

}

int main()
{
    int ino=0;
    bool bRet=false;

    cout<<"Enter a number:"<<endl;
    cin>>ino;

    bRet=CheckPrime(ino);
    if(bRet==true)
    {
        cout<<"Given number is Prime"<<endl;
    }
    else
    {
        cout<<"Given  number is not prime"<<endl;
    }
    return 0;
}