// 
// Лабораторная №1. 
// lab 1.cpp 
// Черкасова Елена, группа 6382
// 20.09.2016
//
// Задача. Определить, попадает ли  область заданная точка (x,y).

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
setlocale (0,""); // для использования кириллицы при вводе-выводе
double x, y; // координаты точки p
cout <<"Введите координаты точки Q (x y):\n";
cin >> x >> y; // считываем координаты точки с клавиатуры
while(true) //проверка на тип данных
{
		if(!cin) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Неверный тип данных. Пожалуйста, введите еще раз. \n";
		cin >> x >>y;
	}
	break;
}
	if ((x>=-1) && (x<=0) && (y<=1) && (y>=0) || (x*x+y*y<=1) && (x>=0) && (y<=0))
	cout <<"Точка попала в область\n";
	else cout <<"Точка  не попала в область\n";
_getch (); // для задержки "экрана ввода-вывода"
return 0;
}
