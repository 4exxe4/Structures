#include <iostream>
using namespace std;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_NUMBERS
//#define PERFECT_NUMBERS
void main()
{
	setlocale(LC_ALL, "Russian");

	/*for (;false;)
	{
		cout << "Hello FOR";
	}
	*/

	
	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/
	

//CNTRL+/ закомментировать полностью выделенный код
#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif

#ifdef POWER
	double a; //основание степени
	int n; //показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	double N = 1; //степень
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << "\t";
	}
#endif

#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;

	cout << "Введите количество членов ряда: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;
#endif

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; //Изначально предполагаем, что число простое, но это нужно проверить:
		for (int j = 2; j < sqrt(i); j++)
		{
			//функция sqrt() возвращает квадратный корень числа
			if (i % j == 0)
			{
				simple = false;
				break; //ключевое слово "break" прерывает текущую итерацию и все последующие итерации цикла.
			}
		}
		if(simple)cout << i << "\t";
	}
	cout << endl;
#endif

#ifdef PERFECT_NUMBERS
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		//bool perfect = true; //Предположим, что число совершенное, но это нужно проверить
		int sum = 0;
		for (int j = 1; j <= i/2; j++)
		{
			if (i % j == 0)sum += j;
		}
		//if (sum == i)perfect = true;
		if(sum == i)cout << i << "\t";
	}
	cout << endl;
#endif

}
