#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string &word) {
    int left = 0;
    int right = word.length() - 1;
    
    while (left < right) {
        if (tolower(word[left]) != tolower(word[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countPalindrome(const string &str) {
    istringstream stream(str);
    string word;
    int count = 0;
    
    while (stream >> word) {
        if (isPalindrome(word)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string str1 = "Mom and Dad are my best friends";
    string str2 = "mohit speaks english";
    
    cout << countPalindrome(str1) << endl; // Output: 2
    cout << countPalindrome(str2) << endl; // Output: 0
    
    return 0;
}
