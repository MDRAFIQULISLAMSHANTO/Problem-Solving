#include<iostream>
#include<cmath>
int main(){
    double a, b, c;
    std::cout << "The the value of a: ";
    std::cin>> a ;

    std::cout<< "Enter the value of b:";
    std::cin>> b;

    a = pow(a, 2); // a square
    b = pow(b, 2); // b squares
    c = sqrt(a + b);
    std::cout << "The value of the C: " << c;
    return 0;



}