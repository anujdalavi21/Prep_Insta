/*C++ Program to find the Reverse of a Number
Number: 5678
Reverse: 8765

*/
#include<iostream>
using namespace std;
int Reverse(int no)
{

    int iDigit=0;
    int iRev=0;

    while(no !=0)
    {
        iDigit=no % 10;
        iRev=(iRev * 10) +iDigit;
        

        no=no/10;
    }
    return iRev;


}

int main()
{
    int iNo=0;
    int iRet=0;
    cout<<"Enter number:";
    cin>>iNo;

    iRet=Reverse(iNo);
    cout<<"Reverse a number->"<<iRet<<endl;


    return 0;
}