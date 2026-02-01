#include<iostream>
int g = 9; // global variable


int main(){
    int a = 2;
    
    if(a == 3){
        std::cout << a << std::endl; // nothing will print in this case
    }
    else if (a == 2){
        std::cout << "statement 2 is True . \n "; /*/this will print obviously
        but if the first statement is true it will not move to second one even if it's true*/
    }
    else{std::cout <<  "no conditions are met\n";
    }
    
    int x = 4;
    int y = 5;

    if(x == 4 && y = 5){
        std::cout << "condition is met" << std::endl;
    }
    //&& --> and ; requires both conditions to be met
    // || --> or ; requires one statement to be met

    //SCOPE --> no need of curly brackets if body in oneline i.e the scope is till there 
    //curly brackets define that scope for us, are where value is valid
    int t = 20;
    if(t == 20)
        std::cout << "t=20\n";
    return 0;
}