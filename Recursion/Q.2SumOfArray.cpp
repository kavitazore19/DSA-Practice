/*

   Find the sum of the array? 
   
   Time Complexity	-> O(n)
   Space Complexity	 -> O(n)
	​
*/

#include<iostream>
using namespace std;

int getSum(int* arr, int n){

    //Base case
    if(n == 0){
        return 0;
    }

    //Recursive Relation
    return arr[0] + getSum(arr+1, n-1);

}

int main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements:  ";
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }

    int ans = getSum(arr, n);
    
    cout << "Sum = " << ans ;
}


//Recursive Funtion :

// getSum([1,2,3,4],4)

// = 1 + getSum([2,3,4],3)

// = 1 + 2 + getSum([3,4],2)

// = 1 + 2 + 3 + getSum([4],1)

// = 1 + 2 + 3 + 4 + getSum([],0)

// = 1 + 2 + 3 + 4 + 0

// = 10
