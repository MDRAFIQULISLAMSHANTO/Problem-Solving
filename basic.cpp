//variables
/* #include <iostream>;
int main() {;
    int x ;
    x = 3;
    std:: string name = "shanto";
    double b = 12.032;
    bool pass = true;
    //single character;
    char grade = 'A';



    int y = 6;
    int sum = x + y ;
   std::cout<<"The name is "<< name << '\n';
   std::cout<<"the age"<< b << grade << "reult" << grade ;

    return 0;


}; */


/* // const

#include<iostream>
namespace first{
    double radius = 22.22;
}
int main() {
    const double PI = 3.1416; // can't change const value

    double circumference = 2 * PI * first::radius;

    std:: cout<< circumference << " cm" ;
    return 0;
} */
//typedef

/* #include<iostream>
#include<vector>
typedef std::string text_t ;
typedef  int number_t;
//using text_t = std::string;
//using number_t = int;
int main() {
    text_t firstName = "Shanto";
    number_t age = 43;
    std::cout<< "My name is "<< firstName << '\n';
    std::cout<< age << '\b';
    return 0;
}

 */
/* #include<iostream>
int main(){
    int number = 9;
    number ++;
    int s =4 ;
    s--;
    std::cout<< number << "  " << s;
    return 0 ;
} */
//
#include<iostream>
int main(){
    std::string name;
    int age;
    std::cout<< "What's your name: ";
    std::cin>> name;
    std:: cout<< "What's your age: ";
    std::cin>> age;
    std::cout<< "You are " << name << " and your age is " << age;
    return 0 ;
}