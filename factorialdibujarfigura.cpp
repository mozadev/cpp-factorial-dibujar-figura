// ConsoleApplication20.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

using namespace std;
using namespace System;

int ingresan()
{
	int n;
	cout << "ingresa n"; cin >> n;
	return n;
}

int ingresax()
{
	int x;
	cout << "ingresa x"; cin >> x;
	return x;
}

void menu()
{
	cout << endl; cout << endl;
	cout << "1.calculo de r" << endl;
	cout << "2.genera figura" << endl;
	cout << "3. salir" << endl;

}


int funcionfactorial(int *n, int *x)
{
	int result = 1;
	for (int i = 1; i < *n; i++)
		result = result*i;
	return result;
}

float funcioncalculo(int *n, int *x)
{
	float suma = 0;
	for (int i = 1; i < *n; i++)
		suma = suma + pow((i - *x), i) / (funcionfactorial(n, x) - *x);

	return suma;

}



void dibujafigura(int m)
{
	for (int i = m; i >=1; i--)
	{
		for (int e = 20 - i; e >= 1; e--)
			cout << " ";
		for (int j = i; j >=1; j--)
			cout << j;
		cout << endl;
	}
}

int main()
{
	menu();
	int opcion;
	int m;
	while (1)
	{

		cin >> opcion;
		switch (opcion)
		{
		case 1:
			int n;
			n = ingresan();
			int x;
			x = ingresax();
			cout<<"el calculo es " <<funcioncalculo(&n, &x)<<endl;
			break;
		case 2:
			cout << "ingrese numero"; cin >> m;
			dibujafigura(m);
			break;
		case 3:
			exit(0);
			_getch();
		}
	}

	_getch();
}

