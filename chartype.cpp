#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "input a character ";
    std::cin >> ch;

    if (std::isalpha(ch)) {
        ch = std::tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            std::cout << ch << "is vowel";
        } else {
            std::cout << ch << "is consonant";
        }
    } else if (std::isdigit(ch)) {
        std::cout << ch << "is digit";
    } else if (std::ispunct(ch)) {
        std::cout << ch << "is punctuation";
    } else {
        std::cout << ch << "is unrecognised";
    }


    return 0;
}