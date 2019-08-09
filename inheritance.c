#include <iostream>

using namespace std;

class Indianchef{
    public:
    void makestarters(){
        cout<<"The CHEF is making STARTERS ."<<endl;
        cout<<"Please wait ,"<<endl;
    }
    void makebiryani(){
        cout<<"The CHEF is making BIRYANI ."<<endl;
        cout <<"Please wait ."<<endl;
    }
    void spcldish(){
        cout<<"The CHEF is making SPECIAL DISH ."<<endl;
        cout<<"Please wait ."<<endl;
    }
};
class Italianchef : public Indianchef{
   public:
   
    void makingbbq(){
        cout<<"The CHEF is making BBQ ."<<endl;
        cout<<"Please wait ."<<endl;
    }
    void makebiryani(){
        cout<<"The CHEF is making SPCL BIRYANI ."<<endl;
        cout<<"Please wait . "<<endl;
    }
    
};
int main()
{
    Indianchef chef;
    Italianchef chef1;
    chef.makestarters();
    chef.makebiryani();
    chef1.makebiryani();
    chef1.spcldish();
    

    return 0;
}
