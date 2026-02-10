#include<iostream>
#include<vector>
// vectors are a class in C++
// class a group of data objects and functions
//we can save class as a header file and import later
    //see traingle.h
//#include "triangle.h"  //this is how you import
class Triangle
{
private:
    /* data */
    //double base, height; //no one after initiating will be able to access 

public:
    Triangle(double b, double h); //constructor, always has same name as class
 //   ~Triangle(){}; //destructor, operations when class object goes out of scope
    double area();

    double base, height; //class fucnctions has access to these var
};

Triangle::Triangle(double b, double h){
    base = b;
    height = h;
}
double Triangle::area(){
    return 0.5*base*height;
}

/*Triangle::~Triangle()
{
}*/


int main(){

    Triangle tri1(1.,5.), tri2(3.,2.);

    std::cout << tri1.area() << std::endl; //2.5

    tri1.base = 3.;
    std::cout << tri1.area() << std::endl; // 7.5
    return 0;
}