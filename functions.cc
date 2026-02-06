#include<iostream>
#include<vector>

double tri_area(double base, double height){
    double area;
    area = 1./2*base*height;

    return area;
    //return 1./2*base*height; an alternative way
}
//passing by value
//& --> address of var
void tri_area2(double base, double height, double &area){
    area2 = 1./2*base*height;
}

//passing by value multiple outputs
void square_info(double length, double &area3, double &perimeter){
    area3 = length*length;
    perimeter = 4*length;
}

//vector func
void print_vec(srd::vector<double> out){
    for(int i=0; i<out.size(); i++){
        std::cout << out[i] << std::endl;
    }
}

int main(){
    // func to calculate area of triangle
    double area;
    area = tri_area(2.,3.);
    std::cout << area << std::endl;
   
    double area2;
    tri_area2(2.,3., area2);
    std::cout << area2 << std::endl;

    double Area1, Perimeter1;
    square_info(5, Area1, Perimeter1);
    std::cout << Area1 << " " << Perimeter1 << std::endl;

    std::vector<double> test(3, 1.2);
    print_vec(test);
    
    return 0;
}