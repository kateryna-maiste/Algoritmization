// Algoritmization.cpp 

//Обчислити вираз y=2a-(x+6)

#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

int main()

{
	setlocale(LC_ALL, "rus");

	
	int x;
	int y;
	int a;
	int b;
	int mult;
	int sum;

	cout << "y = 2 * a - (b + 6)" << endl;
	cout << "Введите значение: a= " << endl;
	cin >> a;
	cout << "Введите значение: x= " << endl;
	cin >> b;
	
	
	mult = 2 * a;

	sum = b + 6;
	
	cout << "y =" << mult - sum; 

	cout << "\n Верно!" << endl ;





}

