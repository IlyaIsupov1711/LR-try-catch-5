#include <iostream>
#include <string>
#include <typeinfo>
#include <cmath>

using namespace std;

void f()
{
	int a, b, step;
	double znach;
	cin >> a;
	cin >> b;
	cin >> step;
	if (!a || !b || !step)
	{
		throw "f";
	}
	if (a < 0 || b<0 || step<0)
	{
		throw 1;
	}
	if (a == 1 || b == 1)
	{
		throw 1.1;
	}
	for (int i = a; i <= b; i+=step)
	{
		znach = log(i - 1);
		cout << i << "= " << znach << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		f();
	}
	catch (double)
	{
		cerr << "Введено значение равное 1!" << endl;
	}
	catch (int a)
	{
		cerr << "Ошибка, введено значение меньше 0! Значение=" << a << endl;
	}
	catch (...)
	{
		cerr << "Ошибка, введено некорректное значение или значение равно 0!" << endl;
	}
}