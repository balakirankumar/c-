#include <iostream>

using namespace std;

class data{
    public:
        string name;
        int phone;
        int rollno;
        string gender;
};
int main()
{
    data data1;
    data1.name="Kiran";
    data1.phone=1234;
    data1.rollno=888;
    data1.gender="male";
    data data2;
    data2.name="sharan";
    data1.phone=4321;
    data1.rollno=999;
    data1.gender="male";
    cout<<data1.name<<endl;;
    cout<<data1.gender<<endl;;
    cout<<data1.phone<<endl;
    return 0;
}