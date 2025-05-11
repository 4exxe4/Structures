#include <iostream>
using namespace std;

int main()
{
    int n, coef = 1;
    setlocale(LC_ALL, "");
    cout << "Введите глубину треугольника: "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Печать пробелов
        for (int space = 1; space <= n - i; space++)
            cout << "  ";

        // Высчитывание коэффициентов
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            // Печать коэффициентов
            cout << coef << "   ";
        }
        // Переход на следующую строку
        cout << endl;
    }

}