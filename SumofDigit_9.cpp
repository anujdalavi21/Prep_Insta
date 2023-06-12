/*C++ Program to find the Sum of Digits of a Number   
 number = 12345
Sum of digit of number = 1 + 2 + 3 + 4 + 5
Sum = 15
*/

#include<iostream>
using namespace std;
int SumDigit(int no)
{
    int iSum=0;
    int iDigit=0;

    while(no !=0)
    {
        iDigit=no % 10;
        iSum=iSum+iDigit;

        no=no/10;
    }
    return iSum;


}

int main()
{
    int iNo=0;
    int iRet=0;
    cout<<"Enter number:";
    cin>>iNo;

    iRet=SumDigit(iNo);
    cout<<"Summation of digit->"<<iRet<<endl;


    return 0;
}