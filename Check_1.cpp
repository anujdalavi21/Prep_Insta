//check if a nu,mber is positive or negative 
#include<iostream>
using namespace std;
bool Check(int no)
{
    if(no > 0)
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

    bRet=Check(ino);
    if(bRet==true)
    {
        cout<<"Given numbers is positive"<<endl;
    }
    else
    {
        cout<<"Given  number is not positive"<<endl;
    }
    return 0;
}