#include<iostream>
#include<Windows.h>

using namespace std;

/* //1.	Напишите функцию, которая принимает число и возвращает истину, если число четное и ложь, если нечетное.

bool number(int n)
{
	if (n % 2 == 0) return true;
	else return false;
}

int main()
{
	int n, flag = 0;
	char answer;

	do
	{

		cout << endl << endl << "Enter number => ";
		cin >> n;
		cout << endl << number(n) << endl << endl;

		cout << "Do You want to continue? y/n ->  ";
		cin >> answer;
		if (answer != 'y')
		{
			flag = 1;
			cout << endl << endl;
		}

	} while (flag == 0);

	system("pause");
}*/



// 2.	Написать функцию, которая возвращает истину, если переданный параметр является знаком препинания и ложь, если не является.

bool symbol(char c)
{
	if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') return false;
	
	else return true;
}

int main()
{
	int flag = 0;
	char c, answer;

		do
		{

			cout << endl << endl << "Enter symbol => ";
			cin >> c;
			cout << endl << symbol(c) << endl << endl;

			cout << "Do You want to continue? y/n ->  ";
			cin >> answer;
			if (answer != 'y')
			{
				flag = 1;
				cout << endl << endl;
			}

		} while (flag == 0);

		system("pause");
}