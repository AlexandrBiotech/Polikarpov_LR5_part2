#include "Polikarpov_MathTask.h"

int main() {
    int X = 0, N = 0;
    inputX(X, "Введите натуральное число X: ");
    inputN(N, "Введите цифру N (меньше количества цифр в X): ", X);
    cout << "Произведение последних " << N << " цифр: " << productOfLastNDigits(X, N) << endl;
    cout << "Количество цифр в числе X: " << countDigits(X) << endl;
    return 0;
}