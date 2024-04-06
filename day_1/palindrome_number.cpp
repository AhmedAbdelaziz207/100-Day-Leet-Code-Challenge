#include "iostream"
using namespace std;
bool isPalindrome(long long x);
int main() {
 cout<<isPalindrome(121);
}


/*
Given an integer x, return true if x is a
        palindrome
, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.*/

// Solution

bool isPalindrome(long long x) {
    long long  number_before_reverse = x ;

    if (x < 0) return false;

    long long reversed_number = 0;
    while (x > 0) {
        reversed_number = (reversed_number * 10) + x % 10;
        x = x / 10;
    }
    return number_before_reverse == reversed_number;

}