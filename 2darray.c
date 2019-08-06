#include <iostream>

using namespace std;

int main()
{
     int array[3][3];
     cout<<"enter the array elements : ";
     for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             cin>>array[i][j];
         }
     }
     cout<<"you entered is : "<<endl;
      for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             cout<<array[i][j];
             cout<< "   ";
         }
         cout<<endl;
      }
    return 0;
}