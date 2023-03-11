#include "Print.h"

void Print(int arr[], int const size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
}
void Print(double arr[], int const size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
}
void Print(char arr[], int const size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
}
void Print(int crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}