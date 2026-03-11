// Common String Functions - TCS NQT
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "Welcome to TCS NQT";
    
    // 1. Length/Size
    cout << "Length: " << s.length() << endl;
    
    // 2. Substring (start_index, length)
    cout << "Substring: " << s.substr(11, 3) << endl; // Output: TCS
    
    // 3. Find string/character
    size_t pos = s.find("NQT");
    if (pos != string::npos) {
        cout << "'NQT' found at index: " << pos << endl;
    }
    
    // 4. Concatenation
    string s2 = s + " 2026!";
    cout << "Concatenated: " << s2 << endl;
    
    // 5. Reverse string
    string toRev = "hello";
    reverse(toRev.begin(), toRev.end());
    cout << "Reversed: " << toRev << endl;
    
    // 6. String to Integer (stoi)
    string numStr = "12345";
    int num = stoi(numStr);
    cout << "Integer value + 5: " << (num + 5) << endl;
    
    // 7. Integer to String (to_string)
    int val = 987;
    string valStr = to_string(val);
    cout << "String value: " << valStr << endl;
    
    return 0;
}
