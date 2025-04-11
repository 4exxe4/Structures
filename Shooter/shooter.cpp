//#define SHOOTER
//#define LUCKY_TICKET
#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined LUCKY_TICKET
	int number;

	cout << "Введите номер вашего билета: "; cin >> number;

	int n1 = number / 100000;
	int n2 = (number / 10000) % 10;
	int n3 = (number / 1000) % 10;
	int n4 = (number / 100) % 10;
	int n5 = (number / 10) % 10;
	int n6 = number % 10;



	if ((n1 + n2 + n3) == (n4 + n5 + n6)) {
		cout << "Это счастливый билет!" << endl;
	}
	else if ((n1 + n2 + n3) != (n4 + n5 + n6)) {
		cout << "Это не счастливый билет!" << endl;
	}
#endif
#if defined SHOOTER
	char key;
	string forward = "Вперед";
	string back = "Назад";
	string left = "Влево";
	string right = "Вправо";
	string jump = "Прыжок";
	string shoot = "Огонь";
	string exit = "Выход";
	do
	{
		key = _getch();
		if (key == 119)
		{
			cout << key << "\t" << forward << endl;
		}
		else if (key == 115)
		{
			cout << key << "\t" << back << endl;
		}
		else if (key == 97)
		{
			cout << key << "\t" << left << endl;
		}
		else if (key == 100)
		{
			cout << key << "\t" << right << endl;
		}
		else if (key == 32)
		{
			cout << "Space" << "\t" << jump << endl;
		}
		else if (key == 13)
		{
			cout << "Enter" << "\t" << shoot << endl;
		}
		else if (key == 27)
		{
			cout << "Escape" << "\t" << exit << endl;
		}
		else
		{
			cout << "Error" << endl;
		}

	} while (key != 27);
#endif
}