//Time Complexity -> O(n²)
//Space Complexity -> O(1)

#include<iostream>
using namespace std;

int FindRepeated(int arr[100], int n){

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
            
        }
    }
}


int main(){

    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    int arr[100];
    cout <<  "Enter array elements:  " << endl;
    for(int i=0; i<n; i++){
    cin >> arr[i];
    }

    int ans = FindRepeated(arr,n);

    cout << ans  << " is repeated";
    return 0;

}
