#include <iostream>

int universal(const std::string& op) {

    std::string text;
    int shift;

    printf("text: ");
    std::getline(std::cin >> std::ws, text);

    printf("shift: ");
    std::cin >> shift;

    if (op == "+") {
        printf("encoded: ");
    } else if (op == "-") {
        printf("decoded: ");
    }
    for (int i = 0; i < text.length(); i++) {
        if (op == "+") {
            printf("%c",text[i] + shift);
        } else if (op == "-") {
            printf("%c", text[i] - shift);
        }
    }

    return 0;
}

int main() {
    int mode;
    
    printf("mode: ");
    std::cin >> mode;

    switch (mode) {
        case 1:
            universal("+");
            break;
        case 2:
            universal("-");
            break;
    }

    return 0;
}
