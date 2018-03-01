#pragma once
int sh();
void fillArray(int *mas, int n);
enum typeSor {higher, lower};
void SortUb(int *mas, int n, typeSor sort);
void printArray(int *mas, int n);
void SortHigher(int *mas, int j);
void SortLower(int *mas, int j);
void Delaying(int *mas, int n);
void f(int *x, int *y);
int doublef(double *x, double *y);
int doublef2(double *x, double *y, double *z);
int rek(int *mas, int n, int i, int *max);
int boolf(int *x, int *y, int *z);
void NameOfFunction(int num, int i);