/*
  Time Complexity  -> O(n²)
   Space Complexity -> O(n)

*/

#include<iostream>
using namespace std;

void BubbleSort(int* arr,  int n){

    if(n == 0){
        return ;
    }

    if(n == 1){
        return;
    }

    for(int i=0; i<n-1; i++){
    if(arr[i] > arr[i+1]){
        swap(arr[i] , arr[i+1]);
    }
}
    BubbleSort(arr, n-1);
}


int main(){

    int n;
    cout << "Enter total number of elements:  ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter array elements:  ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    cout << "Sorted Array :  " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << "   ";
    }

    return 0;

}
