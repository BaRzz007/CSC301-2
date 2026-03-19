#include <iostream>
#include <string>

std::string reverse(std::string str) {
    if (str.length() == 1) {
        return str;
    }
    return reverse(str.substr(1, str.length())) + str[0];
}

int main() {
    std::cout << "Reverse 'Ezekiel': " << reverse("Ezekiel") << std::endl;
    std::cout << "Reverse 'Reverse this': " << reverse("Reverse this") << std::endl;
    std::cout << "Reverse 'not a palindrome': " << reverse("not a palindrome") << std::endl;
}