#include<iostream>

int main(){
    int month;
    std::cout<< "Enter the month number:";
    std:: cin>> month;

    switch (month)
    {
        case 1:
            std::cout<< " It is January.";
            break;
        case 2 :
            std::cout<< " It is Fabruary.";
            break;
        case 3 :
            std::cout<< " It is March.";
            break;
        default:
            std::cout<<"error";


    }
    return 0;
}