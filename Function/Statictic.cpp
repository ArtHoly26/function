#include "Statictic.h"

int Sum(int arr[], int const size)
{
	int summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}
double Sum(double arr[], int const size)
{
	double summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}
char Sum(char arr[], int const size)
{
	char summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}
int Sum(int crr[rows][cols], int const rows, int const cols)
{
	int summ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summ += crr[i][j];
		}

	}
	return summ;
}
double Sum(double crr[rows][cols], int const rows, int const cols)
{
	double summ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summ += crr[i][j];
		}

	}
	return summ;
}
char Sum(char crr[rows][cols], int const rows, int const cols)
{
	char summ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summ += crr[i][j];
		}

	}
	return summ;
}

double Avg(int arr[], int const size)
{
	return (double)Sum(arr, size) / size;
}
double Avg(double arr[], int const size)
{
	return (double)Sum(arr, size) / size;
}
double Avg(char arr[], int const size)
{
	return (char)Sum(arr, size) / size;
}
double Avg(int crr[rows][cols], int const rows, int const cols)
{
	return (double)Sum(crr, rows, cols) / (rows * cols);
}
double Avg(double crr[rows][cols], int const rows, int const cols)
{
	return (double)Sum(crr, rows, cols) / (rows * cols);
}
double Avg(char crr[rows][cols], int const rows, int const cols)
{
	return (char)Sum(crr, rows, cols) / (rows * cols);
}

int minValueIn(int arr[], int const size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}
double minValueIn(double arr[], int const size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}
char minValueIn(char arr[], int const size)
{
	char min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}
int minValueIn(int crr[rows][cols], int const rows, int const cols)
{
	int min = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
	}
	return min;
}
double minValueIn(double crr[rows][cols], int const rows, int const cols)
{
	double min = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
	}
	return min;
}
char minValueIn(char crr[rows][cols], int const rows, int const cols)
{
	char min = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
	}
	return min;
}

int maxValuenIn(int arr[], int const size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}
double maxValuenIn(double arr[], int const size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}
char maxValuenIn(char arr[], int const size)
{
	char max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}
int maxValuenIn(int crr[rows][cols], int const rows, int const cols)
{
	int max = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
	}
	return max;
}
double maxValuenIn(double crr[rows][cols], int const rows, int const cols)
{
	double max = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
	}
	return max;
}
char maxValuenIn(char crr[rows][cols], int const rows, int const cols)
{
	char max = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
	}
	return max;
}