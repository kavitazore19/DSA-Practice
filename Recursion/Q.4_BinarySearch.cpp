/*
   Binary Search In Recursion
   
   Time Complexity -> O(log n)
   Space Complexity -> O(log n)
   
   */


#include<iostream>
using namespace std;

int BinarySearch(int* arr, int n,int start , int end, int target){

    //Base case
    if(start > end){
        return -1;   //Element not found
    }

    int mid = start + (end - start ) / 2;

    if(arr[mid] == target){
        return mid;
    }

    // Search in right half
    else if(arr[mid] < target){
        return BinarySearch(arr, n, mid+1, n-1, target);
    }

     // Search in left half
    else{
         return BinarySearch(arr, n, 0 , mid-1, target);
    }
}



int main(){
    int n;
    cout << "Enter the total number of elements:  ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements:  ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search:  ";
    cin >> target;

    int ans =  BinarySearch(arr, n , 0 , n-1 ,target);

   
    if(ans != -1){
        cout << "Element found at index: " << ans;
    }
    else{
        cout << "Element not found";
    }

    delete[] arr;


    return 0;
}
