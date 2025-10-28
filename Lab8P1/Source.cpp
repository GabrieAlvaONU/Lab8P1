#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
    string input;

    cout << "Enter a string or Q to quit: ";
    getline(cin, input);

    if (input == "Q" || input == "q") {
        return 0;
    }

    cout << "Vowel count: " << countVowel(input) << endl;

    return 0;
}

int countVowel(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char vowel = str[i];
        if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U') {
            count = count + 1;
        }
    }
    return count;
}

