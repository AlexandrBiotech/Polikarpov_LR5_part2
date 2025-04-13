#ifndef MATH_TASK_H
#define MATH_TASK_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

bool isNaturalNumber(const string &input) {
    if (input.empty()) return false;
    for (char c : input) {
        if (!isdigit(c)) return false;
    }
    return stoi(input) > 0;
}

void inputX(int &X, const string &prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    while (!isNaturalNumber(input)) {
        cout << "Ошибка! Введите натуральное число: ";
        getline(cin, input);
    }
    X = stoi(input);
}

void inputN(int &N, const string &prompt, int X) {
    string input;
    int digits = (X == 0) ? 1 : static_cast<int>(log10(X)) + 1;
    cout << prompt;
    getline(cin, input);
    while (!isNaturalNumber(input) || stoi(input) >= digits) {
        cout << "Ошибка! N должно быть меньше " << digits << ": ";
        getline(cin, input);
    }
    N = stoi(input);
}

int productOfLastNDigits(int X, int N) {
    int product = 1;
    for (int i = 0; i < N; ++i) {
        product *= X % 10;
        X /= 10;
    }
    return product;
}

int countDigits(int X) {
    return (X == 0) ? 1 : static_cast<int>(log10(X)) + 1;
}

#endif