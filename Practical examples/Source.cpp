#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	const int SIZE = 5;
	int arr[SIZE][SIZE];

	// Дан двумерный массив размерностью 5х5, заполненный случайными числами из диапазона от 0 до 20. 
	// Определить сумму элементов массива.

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 21;
			cout << setw(4) << arr[i][j];
			sum += arr[i][j];
		}
		cout << endl;
	}
	cout << "\nSum of elements: " << sum << endl << endl;

	// Дан двумерный массив размерностью 5х5, заполненный случайными числами из диапазона от 0 до 20. 
	// Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.

	// 1 способ
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 21;
			cout << setw(4) << arr[i][j];
			if (i == j)
				sum1 += arr[i][j];
			if (i == SIZE - 1 - j)
				sum2 += arr[i][j];
		}
		cout << endl;
	}
	cout << "\nSum of elements on main diagonal: " << sum1;
	cout << "\nSum of elements on side diagonal: " << sum2 << endl << endl;

	// 2 способ
	sum1 = 0;
	sum2 = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 21;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		sum1 += arr[i][i];
		sum2 += arr[i][SIZE - 1 - i];
	}
	cout << "\nSum of elements on main diagonal: " << sum1;
	cout << "\nSum of elements on side diagonal: " << sum2 << endl << endl;

	// Дан двумерный массив размерностью 5х5, заполненный случайными числами из диапазона от 0 до 20. 
	// Определить сумму по каждому столбцу массива. 

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 21;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "Sum: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		sum = 0;
		for (int j = 0; j < SIZE; j++)
		{
			sum += arr[j][i];
		}
		cout << setw(4) << sum;
	}
	cout << endl << endl;


	// В двумерном массиве размерности 6 x 6 поменять местами соседние строки

	const int N = 6;
	int A[N][N];
	cout << "The original array:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = rand() % 20;
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < N; i += 2)
	{
		for (int j = 0; j < N; j++)
		{
			int temp = A[i][j];
			A[i][j] = A[i + 1][j];
			A[i + 1][j] = temp;
		}
	}
	cout << endl << endl;
	cout << "The convert an array:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
	cout << endl << endl;

	// В двумерном массиве определить максимальный элемент каждой строки

	cout << "The original array:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = rand() % 100;
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < N; i++)
	{
		int max = A[i][0];
		for (int j = 0; j < N; j++)
		{
			if (A[i][j] > max)
				max = A[i][j];
		}
		cout << "Maximum element " << i << " row = " << max << endl;
	}

	return 0;
}