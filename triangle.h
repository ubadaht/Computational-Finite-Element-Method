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