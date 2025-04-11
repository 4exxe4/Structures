#include <iostream>
using std::cin;
using std::cout;
using std::endl;


//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define PLUS_MINUS
#define RHOMBUS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++) // 2) Этот цикл повторяет вывод строки 
	{
		for (int j = i; j < n;j++) // 1) этот цикл повторяет вывод "* " на экран (формирует строку из "* ")
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;

		/*
		Тернарный оператор (conditional ternary operator)

		   true
		condition ? value_1 : value_2;
		   false

		Если условие вернуло true, тогда тернарный оператор возвращает value_1
		Если условие вернуло false, тогда тернарный оператор возвращает value_2

		Value_1 и Value_2 обязательно должны быть одного типа. В противном случае поведение не определено (behaviour is undefined)

		Тернарные операторы так же как и if можно объединять в цепочку, но следует учитывать то, что тернарный оператор никак не отлаживается.
		Кроме того большой уровень вложений тернарных операторов тяжело читается
		*/
	}
#endif

#ifdef RHOMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 - 1; j < i; j++)cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif
}
