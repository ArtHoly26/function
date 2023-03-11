#include "Search.h"

void Search(int arr[], int size)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				score++;
			}
		}

		if (score == 1)
		{
			cout << arr[i] << "\t";
			f++;
			score = 0;
		}
		score = 0;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
void Search(double arr[], int size)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				score++;

			}
		}

		if (score == 1)
		{
			cout << arr[i] << "\t";
			f++;
			score = 0;
		}
		score = 0;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
void Search(char arr[], int size)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				score++;

			}
		}

		if (score == 1)
		{
			cout << arr[i] << "\t";
			f++;
			score = 0;
		}
		score = 0;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
void Search(int crr[rows][cols], int const rows, int const cols)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < rows; i++)
	{
		cout << "Строчка " << i << "\t";

		for (int k = 0; k < cols; k++)
		{
			for (int j = k + 1; j < cols; j++)
			{
				if (crr[i][k] == crr[i][j])
				{
					score++;
				}
			}

			if (score == 1)
			{
				cout << crr[i][k] << "\t";
				f++;
				score = 0;
			}
			score = 0;
		}

		cout << endl;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
void Search(double crr[rows][cols], int const rows, int const cols)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < rows; i++)
	{
		cout << "Строчка " << i << "\t";

		for (int k = 0; k < cols; k++)
		{
			for (int j = k + 1; j < cols; j++)
			{
				if (crr[i][k] == crr[i][j])
				{
					score++;
				}
			}

			if (score == 1)
			{
				cout << crr[i][k] << "\t";
				f++;
				score = 0;
			}
			score = 0;
		}

		cout << endl;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}
void Search(char crr[rows][cols], int const rows, int const cols)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < rows; i++)
	{
		cout << "Строчка " << i << "\t";

		for (int k = 0; k < cols; k++)
		{
			for (int j = k + 1; j < cols; j++)
			{
				if (crr[i][k] == crr[i][j])
				{
					score++;
				}
			}

			if (score == 1)
			{
				cout << crr[i][k] << "\t";
				f++;
				score = 0;
			}
			score = 0;
		}

		cout << endl;
	}
	cout << endl;
	cout << "Колличетсво повторений : " << f;
	cout << endl;
}