#include "FillRand.h"

void FillRand(int arr[], int const size, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
}
void FillRand(double arr[], int const size, int minValuIn, int maxValuIn)
{
	minValuIn *= 100;
	maxValuIn *= 100;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], int const size, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % (maxValuIn - minValuIn) + minValuIn;
}
void FillRand(int crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
		}
	}
}
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	minValuIn *= 100;
	maxValuIn *= 100;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
			crr[i][j] /= 100;
		}
	}
}
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn, int maxValuIn)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % (maxValuIn - minValuIn) + minValuIn;
		}
	}
}

void UniqueRand(int brr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		bool unique;
		do
		{
			brr[i] = rand() % size;
			unique = true;

			for (int j = 0; j < i; j++)
			{
				if (brr[i] == brr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	
}
void UniqueRand(double brr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		bool unique;
		do
		{
			brr[i] = rand() % size;
			unique = true;

			for (int j = 0; j < i; j++)
			{
				if (brr[i] == brr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	
}
void UniqueRand(char brr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		bool unique;
		do
		{
			brr[i] = rand() % size;
			unique = true;

			for (int j = 0; j < i; j++)
			{
				if (brr[i] == brr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	
}
void UniqueRand(int crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		bool unique;

		for (int j = 0; j < cols; j++)
		{
			do
			{
				crr[i][j] = rand() % 11;
				unique = true;

				for (int l = 0; l < j; l++)
				{
					if (crr[i][l] == crr[i][j])
					{
						unique = false;
						break;
					}
				}
			} while (!unique);
		}
	}
	
}
void UniqueRand(double crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		bool unique;

		for (int j = 0; j < cols; j++)
		{
			do
			{
				crr[i][j] = rand() % 11;
				crr[i][j] /= 100;
				unique = true;

				for (int l = 0; l < j; l++)
				{
					if (crr[i][l] == crr[i][j])
					{
						unique = false;
						break;
					}
				}
			} while (!unique);
		}
	}
	
}
void UniqueRand(char crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		bool unique;

		for (int j = 0; j < cols; j++)
		{
			do
			{
				crr[i][j] = rand() % 11;
				unique = true;

				for (int l = 0; l < j; l++)
				{
					if (crr[i][l] == crr[i][j])
					{
						unique = false;
						break;
					}
				}
			} while (!unique);
		}
	}
	
}