
#include <iostream>

using namespace std;

int main()
{
    int secretnum = 7;
    int guess;
    int guesslimit =3;
    int guesscount = 0;
    bool outofguess = false;
    
    while(secretnum!=guess && !outofguess)
    {
        if(guesscount<guesslimit)
        {
            cout<<"enter the number you guess : ";
            cin>>guess;
            guesscount++;
        }
        else{
            outofguess=true;
        }
    }
    if(outofguess){
        cout<<"you lose";
    }
    else{
        cout<<"you won";
    }
    return 0 ;
}
