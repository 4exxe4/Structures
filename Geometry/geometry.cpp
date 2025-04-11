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
	cout << "������� ������ ������: "; cin >> n;

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
	for (int i = 0; i < n; i++) // 2) ���� ���� ��������� ����� ������ 
	{
		for (int j = i; j < n;j++) // 1) ���� ���� ��������� ����� "* " �� ����� (��������� ������ �� "* ")
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
		��������� �������� (conditional ternary operator)

		   true
		condition ? value_1 : value_2;
		   false

		���� ������� ������� true, ����� ��������� �������� ���������� value_1
		���� ������� ������� false, ����� ��������� �������� ���������� value_2

		Value_1 � Value_2 ����������� ������ ���� ������ ����. � ��������� ������ ��������� �� ���������� (behaviour is undefined)

		��������� ��������� ��� �� ��� � if ����� ���������� � �������, �� ������� ��������� ��, ��� ��������� �������� ����� �� ������������.
		����� ���� ������� ������� �������� ��������� ���������� ������ ��������
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
