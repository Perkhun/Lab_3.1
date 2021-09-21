/* Lab_03_1.cpp */
/* <Перхун Ірини> */
/* Лабораторна робота № 3.1 */
/* Розгалуження задане формолую: функція однієї змінної. */
/* Варіант 17 */

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;  /*Вхідний параметр*/
	double y;  /*Результат обчислення виразу*/
	double A;  /*Проміжний результат - функціонально стала величина виразу*/
	double B;   /*Проміжний результат - функціонально змінна величина виразу*/

	cout << "x = "; cin >> x;

	A = x * x + 1;

		/*1 спосіб - розгалуження в скороченій формі*/
	if (x < 4)
	   B = 4 * x * x * x * x * x * x * x - x * x * x * x * x - 2;
	if (4 <= x && x < 7)
	   B = atan((abs(x) + 1) / 2) + 8, 3 * x;
	if (x >= 7)
	   B = log(abs(2 * x + exp(4 * x + 1)));

	y = A + B;

	cout << endl;
	cout << "1)y= " << y << endl;

	/*2 спосіб - розгалуження в повній формі*/
	if (x < 4)
	   B = 4 * x * x * x * x * x * x * x - x * x * x * x * x - 2;
	else 
		if (x >= 7)
			B = log(abs(2 * x + exp(4 * x + 1)));
		else 
			B = atan((abs(x) + 1) / 2) + 8, 3 * x;

	y = A + B;

	cout << "2) y= " << y << endl;

	cin.get();
	return 0;
}
