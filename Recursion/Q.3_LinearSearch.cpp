/*

  Linear Search using recursion.

  Time Complexity -> O(n)
  Space Complexity -> O(n)
  
  */

#include<iostream>
using namespace std;

bool LinearSearch(int* arr, int n, int key){

    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        return LinearSearch(arr+1, n-1, key);
    }
}



int main(){
    int n;
    cout << "Enter total number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element:  ";
    cin >> target;


    bool found = LinearSearch(arr, n, target);

    if(found){
        cout << "Element is found.";
    }
    else{
        cout << "Element is not found.";
    }

    return 0;
}
