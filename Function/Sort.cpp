#include "Sort.h"

void Sort(int arr[], int const size)    // Отсортирован методом прямой сортировки по возрастанию
{
	int buffer;
	int min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;

		buffer = arr[i];
		arr[i] = arr[min];
		arr[min] = buffer;
	}
	
	cout << "\n";
}
void Sort(double arr[], int const size)    // Отсортирован методом прямой сортировки по возрастанию
{
	double buffer;
	int min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;

		buffer = arr[i];
		arr[i] = arr[min];
		arr[min] = buffer;
	}
	
	cout << "\n";
}
void Sort(char arr[], int const size)
{
	char buffer;
	int min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;

		for (int j = i + 1; j < size; j++) if (arr[j] < arr[min]) min = j;

		buffer = arr[i];
		arr[i] = arr[min];
		arr[min] = buffer;
	}
	
	cout << "\n";
}
void Sort(int crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					if (crr[k][l] < crr[i][j])
					{
						int buffer = crr[i][j];
						crr[i][j] = crr[k][l];
						crr[k][l] = buffer;
					}
				}
			}
		}
	}
	
}
void Sort(double crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					if (crr[k][l] < crr[i][j])
					{
						int buffer = crr[i][j];
						crr[i][j] = crr[k][l];
						crr[k][l] = buffer;
					}
				}
			}
		}
	}
	
}
void Sort(char crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					if (crr[k][l] < crr[i][j])
					{
						int buffer = crr[i][j];
						crr[i][j] = crr[k][l];
						crr[k][l] = buffer;
					}
				}
			}
		}
	}
	
}