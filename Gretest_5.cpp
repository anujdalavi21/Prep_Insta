//Given two integers as input, the objective is to check both numbers for the greatest and write a code to find the greatest of the two numbers in C++.


#include<iostream>
using namespace std;
void GreatTwo(int no1,int no2)
{
    if(no1==no2)
    {
        cout<<"Both are equal"<<endl;
    }

    else if(no1 > no2)
    {
        cout<<"First number is greater:"<<no1<<endl;
    }
    else
    {
       cout<<"Second number is greater:"<<no2<<endl; 
    }


}

int main()
{
    int no1=0;
    int no2=0;

    cout<<"Enter a number1:";
    cin>>no1;

    cout<<"Enter a number2:";
    cin>>no2;

    GreatTwo(no1,no2);
  
    return 0;
}