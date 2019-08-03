#include <iostream>

using namespace std;
string getdayname(int daynum){
    string dayname;
    switch(daynum)
    {
        case 0 :{
            dayname="sunday";
            break;
        }
        case 1 :{
            dayname="monday";
            break;
        }
        case 2 :{
            dayname="tuesday";
            break;
        }
        case 3 :{
            dayname="wednesday";
            break;
        }
        case 4 :{
            dayname="thrusday";
            break;
        }
        case 5 :{
            dayname="friday";
            break;
        }
        case 6 :{
            dayname="saturday";
            break;
        }
        defaut :{
            dayname="invalid number";
            break;
        }
        return (dayname);
    }
}    
int main()
{
    int num;
    cout<<"enter any week number : ";
    cin>>num;
    cout<<"the day name is " << getdayname(num);
    return 0;
}
