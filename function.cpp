/* #include<iostream>

void function1(int arr1[5][5]){
    for (int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            std::cout<<"The value for "<<i << ", " << j << "is: " <<std::endl;
            std::cin>>arr1[i][j];

        }
    }

    }
    void function2(int arr2[4][4]){
    for (int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            std::cout<<"The value for "<<i << ", " << j << "is: " <<std::endl;
           std::cin>>arr2[i][j];
        }
    }



}
template <size_t row, size_t col>
void printFunction(int arr[row][col]){
    for (int i=0; i < row; i++){
        for(int j=0; j<col; j++){
            std::cout<< arr[i][j]<< "  ";
        }
        std::cout<< std::endl;
    }


}

int main(){
    int arr1[5][5];
    int arr2[4][4];


//1

    std::cout<< "Enter First Matrix: "<< std::endl;
    function1(arr1);
    std::cout<< "First Matrix: "<< std::endl;
    printFunction(arr1);

//2
std::cout<< "Enter Second Matrix: "<< std::endl;
    function2(arr2);
    std::cout<< "Second Matrix: "<< std::endl;
   printFunction(arr2);




return 0 ;
} */
#include<iostream>

void function1(int arr1[5][5]) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << "Enter the value for [" << i << "][" << j << "]: " << std::endl;
            std::cin >> arr1[i][j];
        }
    }

}

void function2(int arr2[5][5]) {
    for (int i = 0; i < 5; i++) {  // Correct loop condition to iterate only 4 times
        for (int j = 0; j < 5; j++) {  // Correct loop condition to iterate only 4 times
            std::cout << "Enter the value for [" << i << "][" << j << "]: " << std::endl;
            std::cin >> arr2[i][j];
        }
    }
}



void printFunction(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;  // To move to the next line after each row
    }
}

int main() {

    int arr1[5][5];  // Declare a 5x5 array
    int arr2[5][5];  // Declare a 4x4 array

    // Input and print first matrix
    std::cout << "Enter values for the first matrix (5x5): " << std::endl;
    function1(arr1);
    std::cout << "First Matrix: " << std::endl;
    printFunction(arr1);

    // Input and print second matrix
    std::cout << "Enter values for the second matrix (4x4): " << std::endl;
    function2(arr2);
    std::cout << "Second Matrix: " << std::endl;
    printFunction(arr2);

    return 0;
}
