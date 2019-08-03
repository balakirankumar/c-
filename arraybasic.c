#include <iostream>

using namespace std;

int main()
{
    int array[10],size,i;
    cout <<"enter the array size : ";
    cin>>size;
    cout<<"enter array elements: ";
    for(i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"yoy have entered the following : "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
    
}