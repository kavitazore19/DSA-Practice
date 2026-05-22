/*
  Find Largest and smallest element in array
  
  Time Complexity -> O(n)
  Space Complexity -> O(1)
  
  */

#include<iostream>
using namespace std;

void FindLargestSmallest(int arr[], int n){

    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){

        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }
   
    
    cout << "Largest element = " << max << endl;
    cout << "Samllest element = " << min << endl;
    

}

int main(){

    int n;
    cout << "Total number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements:  ";
    for(int i=0; i<n; i++){
    cin >> arr[i];
    }

    FindLargestSmallest(arr,n);

    return 0;
}
