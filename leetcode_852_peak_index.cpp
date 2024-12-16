class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int st =1 ;
        int end =  arr.size() - 2;
       //Binary Search
        while(st <= end){
            int mid = st + (end - st)/ 2;
            if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1]){
                return mid;
            }if( arr[mid] < arr[mid + 1]){   //right sight sorted
                st = mid + 1;

            }else{                      // left side sorted
                end = mid - 1;
            }
        }
        return -1;


    }
};

/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.



Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1



Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array. */