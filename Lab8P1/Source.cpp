#include <iostream>
#include <string>
using namespace std;

int countChar(string str);

int main() {
    string test1 = "apple";
    string test2 = "banana";

    cout << "Test string 1: " << test1 << endl;
    cout << "Character count: " << countChar(test1) << endl;

    cout << "Test string 2: " << test2 << endl;
    cout << "Character count: " << countChar(test2) << endl;

    return 0;
}

int countChar(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        count = count + 1;
    }
    return count;
}
