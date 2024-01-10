#include <iostream>
#include <string>

class Solution {
public:

//Method 1 conversion to string and iterating/reverse iterating to compare
    bool isPalindrome(int x) {
            string xToStr = to_string(x);
            char first,second;
            for(int i = 0; i < xToStr.length(); i++){
                if(xToStr[i] != xToStr[(xToStr.length()-1)-i]) return false;
            }
            return true;

        }
    
    /* Method 2  bitwise comparison
    bool isPalindrome(int x) {
        long reversedX = 0;
        int originalX = x; 
        if (x < 0) {
            return false;
        } else {
        while (x != 0) {
            int lastDigit = x % 10;
            x /= 10;

            if (reversedX > INT_MAX / 10 || (reversedX == INT_MAX / 10 && lastDigit > 7)) return false; // Overflow for positive numbers
            if (reversedX < INT_MIN / 10 || (reversedX == INT_MIN / 10 && lastDigit < -8)) return false; // Overflow for negative numbers

            reversedX = reversedX * 10 + lastDigit;
        }
        return reversedX == originalX;
        }
    }
    */
};
