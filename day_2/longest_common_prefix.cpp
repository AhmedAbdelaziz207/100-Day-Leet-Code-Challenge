#include <algorithm>
#include "iostream"
#include "vector"
#include "stack"

using namespace std;

string longestCommonPrefix(vector<string> &strs);

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
}

/*
 * Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
 */
// Solution
string longestCommonPrefix(vector<string> &strs) {
    sort(strs.begin(), strs.end());
    string end = strs.at(strs.size() - 1);
    string start = strs.at(0);

    string result = "";
    for (int i = 0; i < start.length(); ++i) {
        if (start[i] == end[i])
            result += start[i];
        else
            return result;
    }
    return result;
}