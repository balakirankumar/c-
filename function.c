#include <iostream>

using namespace std;
void sayhi(string name ,int age )
{
    cout<<"Hello "<<name<< " you are "<<age<<endl;
}

int main()
{
    string name;
    int age;
    cout<<"enter yur name : "<<endl;
    cin>>(cin, name);
    cout<<"enter your age : "<<endl;
    cin>>age;
    sayhi(name ,age);
    return 0;
    
}