#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;
//1.Получить все четырехзначные счастливые номера.
//Счастливым называется номер, у которого сумма первых двух цифр 
//номера равна сумме последних двух цифр. Использовать функцию 
//для расчета суммы цифр двухзначного числа.
int sh()
{
	int a, b, c, d, num;
	cout << "Введите четырехзначное число: " << endl;
	cin >> num;
	a = (num / 1000);
	b = (num / 100) % 10;
	c = (num/ 10) % 10;
	d = num % 10;
	if ((a + b) == (c + d))
		cout << "Счастливое число. " << endl;
	else
		cout << "Несчастливое число. " << endl;
	return 0;
}
//2.Отсортировать по убыванию заданный массив чисел, используя функцию сортировки.
void SortUb(int *mas, int n, typeSor sort)
{
	int temp;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
			if (sort == higher)
				SortHigher(mas, j);
			else
				SortLower(mas, j);
}
void SortLower(int *mas, int j)
{
	int temp;
	if (mas[j] < mas[j - 1])
	{
		temp = mas[j];
		mas[j] = mas[j - 1];
		mas[j - 1] = temp;
	}
}
void SortHigher(int *mas, int j)
{
	int temp;
	if (mas[j] > mas[j - 1])
	{
		temp = mas[j];
		mas[j] = mas[j - 1];
		mas[j - 1] = temp;
	}
}
void fillArray(int *mas, int n)
{
	for (short int i = 0; i < n; i++)
		mas[i] = 1 + rand() % 59;
}
void printArray(int *mas, int n)
{
	for (short int i = 0; i < n; i++)
		cout << "mas[" << i << "] = " << mas[i] << endl;
	cout << endl;
}
//4.Задан одномерный массив из 16 элементов. Сформировать двухмерный массив 4×4, 
//используя функцию преобразования любого одномерного массива в двухмерный массив
//размерностью n×n с добавлением нулевых элементов.
void Delaying(int *mas, int n)
{
	int p = n / 4;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] <<"\t";
		c++;
		if (c == p)
		{
			c = 0;
			cout << endl;
		}
	}
}
//6.Напишите функцию int f(int x, int y), которая возвращает x - y, 
//если x больше y, иначе возвращает y - x.
void f(int *x, int *y)
{
	cout << "Введите два числа: " << endl;
	cin >> *x >> *y;
	if (*x > *y)
		cout << *x << endl;
	else
		cout << *y << endl;
}
//7.Напишите функцию doublef(double x, double y), которая возвращает x / y, 
//если x больше y, иначе возвращает y / x. Предполагается, 
//что значения параметров больше нуля.
int doublef(double *x, double *y)
{
	cout << "Введите два числа: " << endl;
	cin >> *x >> *y;
	if (*x != 0 && *y != 0)
	{
		if (*x > *y)
			cout << *x / *y << endl;
		else
			cout << *y / *x << endl;
	}
	else
		cout << "Error " << endl;
	return 0;
}
//8.Напишите функцию doublef(double x, double y, double z), которая возвращает m*n / k, 
//где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел.
//Предполагается, что значения параметров больше нуля
int doublef2(double *x, double *y, double *z)
{
	if (*x != 0 && *y != 0 && *z != 0)
	{
		if (*x > *y && *y > *z)
			cout << (*x * *y) / *z << endl;
	}
	else
		cout << "Error " << endl;
	return 0;
}
//10.Написать рекурсивную функцию для вычисления индекса 
//максимального элемента массива из n элементов
int rek(int *mas, int n, int i, int *max)
{
	*max = mas[n - i];
	if (i != 0)
	{
		*max = rek(mas, n, i - 1, max);
		if (*max < mas[n - i])
			*max = mas[n - i];
	}
	return *max;
}
//15.Положительные числа x, y, z могут быть сторонами равнобедренного треугольника, если 
//большее из них меньше суммы двух других. Напишите функцию boolf(int x, int y, int z), 
//которая возвращает true, если числа x, y, z могут быть сторонами треугольника,
//иначе возвращает false.Предполагается, что значения параметров больше нуля
int boolf(int *x, int *y, int *z)
{
	cout << "Введите три стороны равнобедренного треугольника: " << endl;
	cin >> *x >> *y >> *z;
	if (*x == *y || *x == *z || *y == *z)
	{
		cout << "flag = 1" << endl;
	}
	else
	{
		cout << "flag = 0" << endl;
		cout << "Равнобедренного треугольника с такими сторонами не может быть. " << endl;
	}
	return 0;
}
//16.Написать рекурсивную процедуру для вывода на экран цифр натурального 
//числа в обратном порядке
void NameOfFunction(int num, int i)
{
	cout << i << endl;
	if (num != i)
		NameOfFunction(num, i + 1);
}