#include<iostream>
int main() {
    int age ;
    std::cout<< "Enter your age: ";
    std::cin>> age;
    if(age >= 18){
        std::cout<< " Welcome to the Adult world!";

    }else if(age <0){
        std::cout<< "You are not human yet";

    }else {
        std:: cout<< " you are not allowed to enter";
    }
    return 0;
}