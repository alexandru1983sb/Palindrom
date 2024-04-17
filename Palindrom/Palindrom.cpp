#include <iostream>
#include <iomanip>
#include <Windows.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

int main() {
    std::string palindrom;
    for (int x = 0; x < 30; x++) {
        std::cout << "*";
        if (x == 29) {
            std::cout << "\n";
            for (int x = 0; x < 3; x++) {
                std::cout << "*";
            }
            std::cout << GREEN << "   Tema : 'Palindrom'" << RESET << std::setw(4);
            for (int x = 0; x < 3; x++) {
                std::cout << "*";
            }
            std::cout << "\n";
            for (int x = 0; x < 30; x++) {
                std::cout << "*";
            }
        }
    }
    //Sleep(2000);
    //system("CLS");
    std::cout << "\n\n";

    std::cout << "Software loading" << "\n";
    for (int i = 0; i < 31; i++) {
        if (i < 8) {
            std::cout << ".";
            Sleep(150);
        }
        else if (i <= 16) {
            std::cout << GREEN << ".";
            Sleep(150);
            if (i == 16) {
                std::cout << RESET;
            }
        }
        else if (i <= 24) {
            std::cout << YELLOW;
            std::cout << ".";
            Sleep(150);
            if (i == 24) {
                std::cout << RESET;
            }
        }
        else if (i <= 29) {
            std::cout << RED;
            std::cout << ".";
            Sleep(150);
            if (i == 29) {
                std::cout << RESET;
            }
        }
    }
    std::cout << "\n\n";
    std::cout << "Adaugati un cuvant : ";
    std::cin >> palindrom;
    int temp = 0;
    temp += palindrom.size();
    char temp_temp = 0, temp_cire = 0;
    std::cout << "Cuvantul este format din : " << temp << " caractere." << "\n";

    if (palindrom == std::string(palindrom.rbegin(), palindrom.rend())) {
        std::cout << "Cuvantul : " << YELLOW << palindrom << RESET << " este un palindrome." << std::endl;
    }

    else {
        std::cout << "Cuvantul : " << YELLOW << palindrom << RESET << " nu este un palindrome." << std::endl;
    }

}