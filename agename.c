#include <iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout<<"enter the age :";
    cin >>age;
    getline(cin,name);
    cout<<"hi  "<<name<< " your current  "<< age<< " years old ";
    return 0;
}
