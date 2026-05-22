/*

   Check whether the array is sorted in Ascending and Decsending both
   Time Complexity  ->
   Ascending check → O(n)
   Descending check → O(n)
   
   Space Complexity  -> 
   Ascending check → O(n)
   Descending check → O(n)

   */

#include<iostream>
using namespace std;

//Ascending Order Array

bool isSorted(int* arr, int n){

    //Base Case
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, n-1);
    }
}

//Decending order array

bool Sorted(int* arr, int n){

    //Base case
    if(n == 0 || n == 1){
        return 1;
    }

    if(arr[0] < arr[1]){
        return false;
    }
    else{
        return Sorted(arr+1, n-1);
    }
}


int main(){
    int n;
    cout << "Enter the number of elements:  ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements:  ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(arr[0] < arr[1]){
        int ans = isSorted(arr,n);
        if(ans){
        cout << "Array is sorted.";
        }
        else{
        cout << "Array is not sorted.";
        }
    }


    if(arr[0] > arr[1]){
        int ans = Sorted(arr,n);
        if(ans){
        cout << "Array is sorted.";
        }
        else{
        cout << "Array is not sorted.";
        }
    }

return 0;
}
