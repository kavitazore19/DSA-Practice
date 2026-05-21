/* Add Two Arrays

Time Complexity  -> O(min(n,m) + n)

If n == m:
Time Complexity  -> O(n)

Space Complexity -> O(min(n,m))

If n == m:
Space Complexity -> O(n)

*/


#include<iostream>
#include<vector>
using namespace std;

void AddTwoArrays(int arr[100], int n, int brr[100], int m){

    vector<int> temp;
    int sum = 0;

    int i = 0, j = 0;
    while(i < n &&  j < m) {
            sum = arr[i] + brr[j];
            temp.push_back(sum);
            i++;
            j++;
        }
    

    for(int i=0; i<n; i++){
        cout << temp[i] << "  " ;
    }

}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter first array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    int m;
    cout << "Enter the number of elements: ";
    cin >> m;

    int brr[100];
    cout << "Enter Second array elements: ";
    for(int i=0; i<m; i++){
        cin >> brr[i];
    }

    AddTwoArrays(arr,n,brr,m);

    return 0;

}
