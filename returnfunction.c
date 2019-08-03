#include <iostream>
#include<math.h>

using namespace std;

double cube(int num)
{
    return(pow(num,3));
}
int main()
{
    int num;
    cout<<"enter any number : ";
    cin>>num;
    cout<<"the cube of "<< num<< " is "<<cube(num);
    return 0;
    
}