// Verificarea unui număr prim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool estePrim(int numar) {
    if (numar <= 1) {
        return false;
    }

    int divisor = 2;
    while (divisor * divisor <= numar) {
        if (numar % divisor == 0) {
            return false;
        }
        divisor++;
    }

    return true;
}

int main() {
    int numar;

    // Citim numărul de la utilizator
    std::cout << "Introduceti un numar: ";
    std::cin >> numar;

    // Verificăm dacă numărul este prim
    if (estePrim(numar)) {
        std::cout << numar << " este un numar prim." << std::endl;
    }
    else {
        std::cout << numar << " nu este un numar prim." << std::endl;
    }

    return 0;
}