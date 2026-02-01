#include<iostream> //header file FOR I/P, PRINT ETC
#include<vector> //header file for using vectors --> see part B

int main(){
    std::cout << "Hello, World" << std::endl;
    int a;
    int d, b;
    int d=1, e=2, f;
    double h = 1.3;
    unsigned int g = 11, i;

    std::cout <<3/4 << std::endl; //this will print 0
    /* because in C++ an integer divided by an integer is still an integer
    it truncates integer infront of decimal
    but if you put decimal around any number like following it's fine */
    std::cout <<3./4 << std::endl;

    //Part B Vectors
    std::vector<double> vec1; //defining data type for the vector and name
    std::vector<double> vec2(3); //defining data type for the vector, name and size/length
    std::vector<double> vec3(3,1.), vec4(4 ); /*defining data type for the
    vectors, name and size/length and initialized value*/

    vec1.resize(5); //pretty self evident what we did here
    std::cout << vec1.size() << std::endl; //should print 5

    std::cout << vec1[0] << std::endl; //fist element which will be 0 i.e. default value
    vec1.push_back(3.4); //adds element to the back
    std::cout << vec1.size() << std::endl; //should print 6
    std::cout << vec1[5] << std::endl; //fist element which will be 3.4 i.e. last value

    return 0
}  