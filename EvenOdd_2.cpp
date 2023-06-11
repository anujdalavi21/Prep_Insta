//Check number is even or odd
#include<iostream>
using namespace std;
bool CheckEvenOdd(int no)
{
    
    if(no % 2==0)
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
    int ino=0;
    bool bRet=false;

    cout<<"Enter a number:"<<endl;
    cin>>ino;

    bRet=CheckEvenOdd(ino);
    if(bRet==true)
    {
        cout<<"Given number is Even "<<endl;
    }
    else
    {
        cout<<"Given  number is Odd"<<endl;
    }
 
    return 0;
}