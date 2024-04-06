#include <map>
#include "iostream"
#include "vector"
#include "stack"
using namespace std;
int romanToInt(string s);
int main() {

    cout << romanToInt("III");
}
/*  Problem :->
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
 */

// Solution

int romanToInt(string s) {
    map<char, int> romanChars;
    romanChars['I'] = 1;
    romanChars['V'] = 5;
    romanChars['X'] = 10;
    romanChars['L'] = 50;
    romanChars['C'] = 100;
    romanChars['D'] = 500;
    romanChars['M'] = 1000;
    int prev = 0;
    int total = 0;
    for (auto ch : s) {
        for (auto pair : romanChars) {
            if (ch == pair.first) {

                if (pair.second <= prev || prev == 0)
                    total += pair.second;
                else
                    total += (pair.second - prev) - prev;
                prev = pair.second;
                break;
            }
        }
    }
    return total;
}