#include<iostream>
using namespace std;

//#define Pointer-basics
//#define pointers-and-arrays
#define pointer_homework

void main()
{
	setlocale(LC_ALL, "");
#ifdef Pointer-basics
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
#endif // Pointer-basics
	/*const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	cout << arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *arr + i << "\t";
	}
	cout << endl;*/
#ifdef pointer_homework
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	for (int i = 0; i < n; i++)
	{
		cout << *arr + i << "\t";
	}
	cout << endl;
#endif // pointer_homework

}