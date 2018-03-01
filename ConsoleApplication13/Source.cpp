#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;
#define lenght 5
#define lenght16 16
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	cout << "Введите номер задания: " << endl;
	cin >> w;
	switch (w)
	{
	case 1:
		sh();
	break;
	case 2:
	{
		int mas[lenght];
		fillArray(mas, lenght);
		printArray(mas, lenght);
		SortUb(mas, lenght, higher);
		printArray(mas, lenght);
	}
	break;
	case 4:
	{
		int mas[lenght16];
		fillArray(mas, lenght16);
		printArray(mas, lenght16);
		Delaying(mas, lenght16);
	}
	break;
	case 6:
	{
		int x, y;
		f(&x, &y);
	}
	break;
	case 7:
	{
		double x, y;
		doublef(&x, &y);
	}
	break;
	case 8:
	{
		double x, y, z;
		doublef2(&x, &y, &z);
	}
	break;
	case 10:
	{
		int mas[lenght];
		fillArray(mas, lenght);
		printArray(mas, lenght);
		int n, max;
		cout << "Result = "<<rek(mas, lenght-1, lenght, &max)<<endl;
	}
	break;
	case 15:
	{
		int x, y, z;
		boolf(&x, &y, &z);
	}
	break;
	case 16:
	{
		NameOfFunction(10, 0);
	}
	break;
	}
}