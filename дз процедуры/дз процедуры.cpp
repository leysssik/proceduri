#include <iostream>
#include <string>
using namespace std;

//задание 1( + и - зн-ия, четные/нечетные, мин и макс, среднее)
float num3;
float num4;
float num5;
void zad1()
{
	int list1[] = { num3,num4,num5 };
	cout << "Положительные элементы: ";
	for (size_t i = 0; i < size(list1); i++)
	{
		if (list1[i] >= 0)
		{
			cout << list1[i] << " ";
		}
	}
	cout << endl;
	cout << "Отрицательные элементы: ";
	for (size_t i = 0; i < size(list1); i++)
	{
		if (list1[i] < 0)
		{
			cout << list1[i] << " ";
		}
	}
	cout <<endl;
	cout << "Чётные элементы: ";
	for (size_t i = 0; i < size(list1); i++)
	{
		if (list1[i] % 2 == 0)
		{
			cout << list1[i] << " ";
		}
	}
	cout << endl;
	cout << "Нечётные элементы: ";
	for (size_t i = 0; i < size(list1); i++)
	{
		if (list1[i] % 2 !=0)
		{
			cout << list1[i] << " ";
		}
	}
	cout << endl;
	float min = list1[0];
	float max = list1[0];
	for (size_t i = 0; i < size(list1); i++)
	{
		if (min > list1[i])
		{
			min = list1[i];
		}
		else if (max < list1[i])
		{
			max = list1[i];
		}
	}
	cout << "Минимальный эл-т: " << min << endl;
	cout << "Максимальный эл-т: " << max << endl;
	float sum = { 0.0 };
	int counter = 0;
	float average;
	for (size_t i = 0; i < size(list1); i++)
	{
		sum += list1[i];
		counter++;
	}
	average = sum / counter;
	cout << "Ср.зн-ие: " << average << endl;


}


//задание 2(арифметич. действия)
float a;
float b;
int operasia;

void calculator()
{
	switch (operasia)
	{
	case 1:
		cout << "Сумма = " << a + b << endl;
		break;
	case 2:
		cout << "Разность = " << a - b << endl;
		break;
	case 3:
		cout << "Умножение = " << a * b << endl;
		break;
	case 4:
		if (b != 0)
		{
			cout << "Деление = " << a / b << endl;
		}
		else
		{
			cout << "Ошибка: Деление на ноль невозможно!" << endl;
		}
		break;
	default:
		cout << "Ошибка: неверная операция!" << endl;
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 числа: ";
	cin >> num3 >> num4 >> num5;
	zad1();
	cout << "Введите 2 числа(можно не целые): ";
	cin >> a >> b; 
	cout << "Введите 1, если хотите произвести +\nВведите 2, если хотите произвести -\nВведите 3, если хотите произвести *\nВведите 4, если хотите произвести / ";
	cin >> operasia;
	calculator();
	return 0;
}