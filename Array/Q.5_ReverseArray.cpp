/*
   Reverse the array

   Time Complexity -> O(n)
   Space Complexity -> O(1)

*/

#include<iostream>
using namespace std;

void ReverseArray(int arr[], int n){

    int i = 0, j = n-1;

    while( i < j){
        //swap(arr[i], arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "After Swapping : "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }
}

int main(){

    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    
    int arr[100];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ReverseArray(arr,n);

    return 0;
}
