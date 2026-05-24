/*  
    Time Complexity  -> O(b)
    Space Complexity -> O(b)
    
*/


#include<iostream>
using namespace std;

int Power(int a , int b){

    //Base Case
    if(b == 0){
        return 1;
    }

    //Recursive call
    int ans = Power(a, b-1);

    return a * ans;
}


int main(){

    int x;
    cout << "Enter first number:  ";
    cin >> x;

    int y;
    cout << "Enter second number:  ";
    cin >> y;

    int ans = Power(x,y);

    cout << ans;

    return 0;
}
