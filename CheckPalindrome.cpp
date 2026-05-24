/*

   Time Complexity -> O(n)
   Space Complexity -> O(n)
    
   */

#include<iostream>
using namespace std;

bool Palindrome(string name, int start, int end){

    //Base case
    if(start >= end){
        return 1;
    }

    if(name[start] != name[end]){
        return 0;
    } 
    
    // Recursive call
    return Palindrome(name, start+1, end-1);
    
    return 1;
}


int main(){

    string name;
    cout << "Enter string:  ";
    getline(cin, name);

    cout << name << endl;

    int ans=   Palindrome(name, 0 , name.length()-1);

    if(ans){
        cout << "It's a Palindrome." << endl;
    }
    else{
        cout << "Not a palindrome.";
    }

    return 0;
}
