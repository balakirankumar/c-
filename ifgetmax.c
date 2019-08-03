#include <iostream>

using namespace std;

int getmax(int num1,int num2)
{
    int result;
    if(num1>num2){
       result=num1;
    }
    else{
        result =num2;
    }
}

int main()
{
    int num1,num2;
    cout<<"enter any two numbers : ";
    cin>>num1;
    cin>>num2;
    cout<<"the greatest number is "<< getmax(num1,num2);
    return 0;
}