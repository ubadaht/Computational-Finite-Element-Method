#include<iostream> //header file FOR I/P, PRINT ETC
#include<vector> //header file for using vectors

int main(){
    std::vector<double> vec1(2,7.2);
    /* iterator itself is not a number
     we are first defining an iterator over standard vector of doubles
    naming it "it"
    than we ask it to begin by an object from vector class
    now not equal to condition
    it++  will increment it's not adding, it's not number*/
    for(std::vector<double>::iterator it = vec1.begin(); it !=vec1.end(); it++){
        std::cout << *it << std::endl; //prints values in vector
    }

    vec1[1] = 8.8;
    for(std::vector<double>::iterator it = vec1.begin(); it !=vec1.end(); it++){
        std::cout << *it << std::endl; //prints values in vector
    }
    return 0;
}

