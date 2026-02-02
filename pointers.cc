#include<iostream>
#include<vector>

//pointers store address of variables
//let's see how this works out in the code

int main(){
    int a, *b; //this *  asterisk notation in pointer definition
    // at this point b is not intialized
    int a = 2
    b = &a;
    std::cout << *b << std::endl; //b/c of asterisk* it'll give value stored at address b
    a = 4;
    std::cout << *b << std::endl; //value pointed to by b is changed
    
    std::vector<double> vec1(2.1,5), *vec2;
    vec2 = &vec1; // now vec2 stores address of vec1

    std::cout << vec1.size() << std::endl; //this should give 2
    std::cout << vec1.size() << " " << vec2->size() << std::endl; //this should give 2
    /* in above line output will be 2 2,
    the syntax we used is basicaly Dereferencing the pointer
    and working with the data stored at that position*/

    vec1.resize(5,2,8,9); //resize vec1
    std::cout << vec1.size() << " " << vec2->size() << std::endl; //this should give 4 4

    return 0;
}

