#include<simplecpp>
main_program{
turtleSim();
int nsides;
cout<<"how many sides u need";
cin>>nsides;
repeat(nsides){
forward(50);
right(360/nsides);
}
wait(5);
}
