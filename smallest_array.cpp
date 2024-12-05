#include<iostream>
using namespace std;
int main(){
    int nums[] = {2,3,4,5,32,33};
    int smallest = INT_MAX;
    int size = sizeof(nums)/ sizeof(int);
    int largest = INT_MIN;
int k;


    for(int i=0; i<size; i++){
         //logic for find smallest
    if( nums[i]< smallest){
        smallest = nums[i];
        k = i;

    }
    //alternative using data structure
   /*  smallest = min(nums[i],smallest);

    largest =  max(nums[i],largest); */

    }
    /* cout<< smallest<<'\n'<<largest; */
    cout<<k;
    return 0;

}