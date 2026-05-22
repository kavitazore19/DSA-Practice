/*
  Two pointer approach
  Time complexity -> O(n)
  Space Complexity -> O(1)
  
  */

#include<iostream>
#include<cstring>
using namespace std;

bool CheckPalindrome(char name[]){

    //Two pointer approach

    int i=0;
    int j = strlen(name)-1;

    while(i < j){

        if(name[i] != name[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}



int main(){

    char name[100];
    cout << "Enter word : " ;
    cin >> name;

    bool ans = CheckPalindrome(name);

    if(ans == 1){
        cout << "Given string is palindrome.";
    }
    else{
        cout << "Not a palindrome.";
    }

    return 0;
}
