#include<iostream>
#include<vector>
using namespace std;
int main (){
    // * -> find value at address - dereference operator
    int a = 10;
    int *ptr = &a;
    int** parentpntr = &ptr; // ** => pointer to pointer
    cout<< ptr << " "<< *(&ptr) <<" " << parentpntr;  // * => make pointer ; & => output address of the value
    int arr[]= {1,2,3,4};
    return 0;
    // NULL pointer -> A pointer that doesn't point any address ; int *a = NULL;



}