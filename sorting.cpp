#  include<iostream>
using namespace std;
void selectionSort(int arr[], int n){

     //first loop
    for(int i=0 ; i < n-1; i++ ){
        int min = i;              //assume i index have the smalles number;

     for (int j = i + 1; j <n; j++){                       //nexted loop for j

            if(arr[j] < arr[min]){
                min = j;
            }

     }
    int  tem = arr[i];
     arr[i] = arr[min];
     arr[min] = tem;


    }

}
int main(){

    int arr[] = {3,4,2,1,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int); //size of total byte / size of one int(4 byte   )
    selectionSort(arr,n);
    //output
    for(int i = 0; i< n; i++){
        cout<< arr[i];
    }


    return 0;

}







