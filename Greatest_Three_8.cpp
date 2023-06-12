/*C++ Program to find the Greatest of three numbers
Program to*/
#include<iostream>
using namespace std;
void GreatThree(int no1,int no2, int no3)
{
   /* if(no1==no2==no3)
    {
        cout<<"All are equal"<<endl;
    } */

    if((no1 >= no2) && (no1 >= no3) )
    {
        cout<<"First number is greater:"<<no1<<endl;
    }
    else if((no2 >=no1) && (no2 >= no3))
    {
       cout<<"Second number is greater:"<<no2<<endl; 
    }
    else
    {
        cout<<"Third number is greater:"<<no3<<endl;
    }


}

int main()
{
    int no1=0;
    int no2=0;
    int no3=0;

    cout<<"Enter a number1:";
    cin>>no1;

    cout<<"Enter a number2:";
    cin>>no2;

    cout<<"Enter a number3:";
    cin>>no3;

    GreatThree(no1,no2,no3);
  
    return 0;
}