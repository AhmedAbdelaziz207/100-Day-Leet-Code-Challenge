#include "iostream"
#include "vector"
#include "stack"

using namespace std;

bool isValid(const string &input);

int main() {

    cout << isValid("{[}]");
}
/*
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
 */
// Solution

bool isValid(const string &input) {
    stack<char> stack;
    string open = "[{(";
    size_t found;

    for (auto ch: input) {
        // Check if exist in opened brackets
        found = open.find(ch);
        if (found != string::npos) {
            // Push new element onto the stack
            stack.push(ch);
        } else {

            if ((stack.empty() || ch == ']' && stack.top() != '[') ||
                (ch == '}' && stack.top() != '{') ||
                (ch == ')' && stack.top() != '(')) {
                return false;
            } else
                stack.pop();
        }
    }
    return stack.empty();
}