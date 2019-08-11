#include<simplecpp>
main_program{
cout<<"Hello";
turtleSim();
repeat(4){
    repeat(3){
        forward(10); penUp();
        forward(10);penDown();

    }
    right(90);
}
wait(10);

}
