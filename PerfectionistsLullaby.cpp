#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <iterator>
#include <cmath>
using namespace std;

int main() {
    vector<unsigned char> stack;
    stack.push_back(0);
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+') {
            stack[stack.size() - 1]++;
        }
        else if (input[i] == '-') {
            stack[stack.size() - 1]--;
        }
        else if (input[i] == '^') {
            unsigned char temp = stack[0];
            for (int j = 0; j < stack.size() - 1; j++) {
                stack[j] = stack[j + 1];
            }
            stack[stack.size() - 1] = temp;
        }
        else if (input[i] == '?') {
            unsigned char temp = stack[0];
            stack[0] = stack[stack.size() - 1];
            stack[stack.size() - 1] = temp;
        }
        else if (input[i] == '*') {
            stack.push_back(stack[stack.size() - 1]);
        }
        else if (input[i] == '|') {
            stack[stack.size() - 1] = ~stack[stack.size() - 1];
        }
        else if (input[i] == '~') {
            unsigned char temp = stack[stack.size() - 1];
            stack[stack.size() - 1] = (temp << 4) | (temp >> 4);
        }
        else if (input[i] == '.') {
            for (int j = 0; j < stack.size(); j++) {
                cout << stack[j];
            }
            cout << endl;
        }
    }

    // Prints out the value held in each element
    for (int i = 0; i < stack.size(); i++)
    {
        cout << (int)stack[i] << " ";
    }
    cout << endl;

    // Prints out the size of the stack
    cout << stack.size();

    return 0;
}