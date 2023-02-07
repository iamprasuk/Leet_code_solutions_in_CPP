#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        signed long int reverse=0;
        int n =x;
        while (n>0){
            int reminder = n%10;
            reverse = reverse *10 + reminder;
            n = n/10;
        }
        
        if (reverse == x){
            return true;
        }
        else{
            return false;
        }
        
}

int main()
{
    int number = 4576755;
    cout<<isPalindrome(number); 
    return 0;
}