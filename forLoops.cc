#include<iostream>

int main(){
    for(int i=0; i<10; i++){
        std::cout << i << std::endl; //will print 0 to 9
        /* to increment
    i = i+1
    i += 1
    i++
    */
    }

    // to iterate elements in a vector
    std::vector<double> vec1(10,2)
    
    for(int x=0; x<10; x++){
        vec1[x] += x; //taking value at x index in vector and adding x to it
        std::cout << vec1[x] << std::endl;
    }


    //SCOPE of the variable--> where variable is valid
    for(int j=0; j<10; j++)
        std::cout << j << std::endl;

    return 0;
}