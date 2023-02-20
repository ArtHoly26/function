#include <iostream>
#include <ctime>

using namespace std;

int const rows = 5;
int const cols = 6;

void FillRand(int arr[], int const size, int minValuIn = 0, int maxValuIn = 5);
void FillRand(double arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(int crr[rows][cols], const int rows,const int cols, int minValuIn= 0, int maxValuIn= 10);
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);

void Print(int arr[], int const size);
void Print(double arr[], int const size);
void Print(char arr[], int const size);
void Print(int crr[rows][cols], const int rows, const int cols);
void Print(double crr[rows][cols], const int rows, const int cols);
void Print(char crr[rows][cols], const int rows, const int cols);

int Sum(int arr[], int const size);
double Sum(double arr[], int const size);
char Sum(char arr[], int const size);
int Sum (int crr[rows][cols], int const rows,int const cols);
double Sum(double crr[rows][cols], int const rows, int const cols);
char Sum(char crr[rows][cols], int const rows, int const cols);

double Avg(int arr[], int const size);
double Avg(double arr[], int const size);
double Avg(char arr[], int const size);
double Avg(int crr[rows][cols], int const rows,int const cols);
double Avg(double crr[rows][cols], int const rows, int const cols);
double Avg(char crr[rows][cols], int const rows, int const cols);

int minValueIn(int arr[], int const size);
double minValueIn(double arr[], int const size);
char minValueIn(char arr[], int const size);
int minValueIn(int crr[rows][cols], int const rows, int const cols);
double minValueIn(double crr[rows][cols], int const rows, int const cols);
char minValueIn(char crr[rows][cols], int const rows, int const cols);

int maxValuenIn(int arr[], int const size);
double maxValuenIn(double arr[], int const size);
char maxValuenIn(char arr[], int const size);
int maxValuenIn(int crr[rows][cols], int const rows,int const cols);
double maxValuenIn(double crr[rows][cols], int const rows, int const cols);
char maxValuenIn(char crr[rows][cols], int const rows, int const cols);

void Sort(int arr[], int const size);
void Sort(double arr[], int const size);
void Sort(char arr[], int const size);
void Sort(int crr[rows][cols], int const rows,int const cols);
void Sort(double crr[rows][cols], int const rows, int const cols);
void Sort(char crr[rows][cols], int const rows, int const cols);

void shiftLeft(int arr[], int const size);
void shiftLeft(double arr[], int const size);
void shiftLeft(char arr[], int const size);
void shiftLeft(int crr[rows][cols], int const rows, int const cols);
void shiftLeft(double crr[rows][cols], int const rows, int const cols);
void shiftLeft(char crr[rows][cols], int const rows, int const cols);

void shiftRight(int arr[], int const size);
void shiftRight(double arr[], int const size);
void shiftRight(char arr[], int const size);
void shiftRight(int crr[rows][cols], int const rows, int const cols);
void shiftRight(double crr[rows][cols], int const rows, int const cols);
void shiftRight(char crr[rows][cols], int const rows, int const cols);

void UniqueRand(int brr[], int const size);
void UniqueRand(double brr[], int const size);
void UniqueRand(char brr[], int const size);
void UniqueRand(int crr[rows][cols], int const rows, int const cols);
void UniqueRand(double crr[rows][cols], int const rows, int const cols);
void UniqueRand(char crr[rows][cols], int const rows, int const cols);

void Search(int arr[], int size);
void Search(double arr[], int size);
void Search(char arr[], int size);
void Search(int crr [rows][cols],int const rows,int const cols);
void Search(double crr [rows][cols], int const rows, int const cols);
void Search(char crr[rows][cols], int const rows, int const cols);

int main()
{
	setlocale(LC_ALL, "Rus");
	int const size = 10;
	int arr[size];
	int brr[size];
	int minValuIn;
	int maxValuIn;
	int crr[rows][cols];
	
	FillRand(arr, size);
	Print(arr, size);
	Search(arr, size);
	cout << "Сумма элементов массива равна:" << Sum(arr, size) << endl;
	cout << "Среднее арефметическое элементов массива равна:" << Avg(arr, size) << endl;
	cout << "Минимальный элемент:" << minValueIn(arr, size) << endl;
	cout << "Максимвльный элемент:" << maxValuenIn(arr, size) << endl;
	Sort(arr, size);
	shiftLeft(arr, size);
    shiftRight(arr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(brr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	FillRand(crr, rows, cols);
	Print(crr, rows, cols);
	Search(crr, rows,cols);
	cout << "Сумма элементов двумерного массива равна:" << Sum(crr, rows ,cols) << endl;
	cout << "Среднее арефметическое элементов двумерного массива равно:" << Avg(crr, rows,cols) << endl;
	cout << "Минимальный элемент:" << minValueIn(crr, rows ,cols) << endl;
	cout << "Максимальный элемент:" << maxValuenIn(crr, rows, cols) << endl;
	Sort(crr, rows ,cols);
	shiftLeft(crr, rows, cols);
	shiftRight(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
}

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
void FillRand(char arr[], int const size, int minValuIn,  int maxValuIn )
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
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn , int maxValuIn)
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
	return (double)Sum(crr, rows,cols) / (rows*cols);
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
	Print(arr, size);
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
	Print(arr, size);
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
	Print(arr, size);
	cout << "\n";
}
void Sort(int crr[rows][cols], int const rows, int const cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int i = 0; i < cols; i++)
		{
			for (int j = cols - 1; j > i; j--)
			{
				if (crr[k][j] < crr[k][j-1])
				{
					int buffer = crr[k][j];
					crr[k][j] = crr[k][j - 1];
					crr[k][j - 1] = buffer;
				}
			}
		}
	}
	Print(crr, rows,cols);
}
void Sort(double crr[rows][cols], int const rows, int const cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int i = 0; i < cols; i++)
		{
			for (int j = cols - 1; j > i; j--)
			{
				if (crr[k][j] < crr[k][j - 1])
				{
					double buffer = crr[k][j];
					crr[k][j] = crr[k][j - 1];
					crr[k][j - 1] = buffer;
				}
			}
		}
	}
	Print(crr, rows, cols);
}
void Sort(char crr[rows][cols], int const rows, int const cols)
{
	for (int k = 0; k < rows; k++)
	{
		for (int i = 0; i < cols; i++)
		{
			for (int j = cols - 1; j > i; j--)
			{
				if (crr[k][j] < crr[k][j - 1])
				{
					char buffer = crr[k][j];
					crr[k][j] = crr[k][j - 1];
					crr[k][j - 1] = buffer;
				}
			}
		}
	}
	Print(crr, rows, cols);
}

void shiftLeft(int arr[], int const size)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	for (int i = 0; i < on_Left; i++)
	{
		int buffer = arr[0];

		for (int i = 0; i < size; i++) arr[i] = arr[i + 1];

		arr[size - 1] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftLeft(double arr[], int const size)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	for (int i = 0; i < on_Left; i++)
	{
		int buffer = arr[0];

		for (int i = 0; i < size; i++) arr[i] = arr[i + 1];

		arr[size - 1] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftLeft(char arr[], int const size)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	for (int i = 0; i < on_Left; i++)
	{
		char buffer = arr[0];

		for (int i = 0; i < size; i++) arr[i] = arr[i + 1];

		arr[size - 1] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftLeft(int crr[rows][cols], int const rows, int const cols)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	int buffer;

		for (int i = 0; i < rows; i++)
		{
			for (int l = 0; l <on_Left; l++)
			{
				buffer = crr[i][0];

				for (int j = 0; j < cols-1; j++) crr[i][j] = crr[i][j + 1];
				
				crr[i][cols - 1] = buffer;
			}
		}

	Print(crr, rows, cols);
}
void shiftLeft(double crr[rows][cols], int const rows, int const cols)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	double buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Left; l++)
		{
			buffer = crr[i][0];

			for (int j = 0; j < cols - 1; j++) crr[i][j] = crr[i][j + 1];

			crr[i][cols - 1] = buffer;
		}
	}

	Print(crr, rows, cols);
}
void shiftLeft(char crr[rows][cols], int const rows, int const cols)
{
	int on_Left;
	cout << "На сколько едениц необходимо сдвинуть массив влево?" << endl;
	cin >> on_Left;
	char buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Left; l++)
		{
			buffer = crr[i][0];

			for (int j = 0; j < cols - 1; j++) crr[i][j] = crr[i][j + 1];

			crr[i][cols - 1] = buffer;
		}
	}

	Print(crr, rows, cols);
}

void shiftRight(int arr[], int const size)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	for (int i = 0; i < on_Right; i++)
	{
		int buffer = arr[size - 1];

		for (int i = 1; i < size; i++) arr[size - i] = arr[size - 1 - i];

		arr[0] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftRight(double arr[], int const size)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	for (int i = 0; i < on_Right; i++)
	{
		int buffer = arr[size - 1];

		for (int i = 1; i < size; i++) arr[size - i] = arr[size - 1 - i];

		arr[0] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftRight(char arr[], int const size)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	for (int i = 0; i < on_Right; i++)
	{
		char buffer = arr[size - 1];

		for (int i = 1; i < size; i++) arr[size - i] = arr[size - 1 - i];

		arr[0] = buffer;
	}
	Print(arr, size);
	cout << "\n";
}
void shiftRight(int crr[rows][cols], int const rows, int const cols)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	int buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Right; l++)
		{
			buffer = crr[i][cols-1];

			for (int j = 1; j < cols; j++) crr[i][cols - j] = crr[i][cols - 1 - j];
			
			crr[i][0] = buffer;
		}
	}

	Print(crr, rows, cols);
}
void shiftRight(double crr[rows][cols], int const rows, int const cols)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	double buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Right; l++)
		{
			buffer = crr[i][cols - 1];

			for (int j = 1; j < cols; j++) crr[i][cols - j] = crr[i][cols - 1 - j];

			crr[i][0] = buffer;
		}
	}
}
void shiftRight(char crr[rows][cols], int const rows, int const cols)
{
	int on_Right;
	cout << "На сколько едениц необходимо сдвинуть массив вправо?" << endl;
	cin >> on_Right;
	char buffer;

	for (int i = 0; i < rows; i++)
	{
		for (int l = 0; l < on_Right; l++)
		{
			buffer = crr[i][cols - 1];

			for (int j = 1; j < cols; j++) crr[i][cols - j] = crr[i][cols - 1 - j];

			crr[i][0] = buffer;
		}
	}

	Print(crr, rows, cols);
}

void UniqueRand(int brr[], int const size)
{
	for (int i=0; i < size; i++)
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

	Print(brr, size);
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

	Print(brr, size);
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

	Print(brr, size);
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
	Print(crr, rows, cols);
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
	Print(crr, rows, cols);
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
	Print(crr, rows, cols);
}

void Search(int arr[], int size)
{
	int score = 0;
	int f = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
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
			score= 0;
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
		cout << "Строчка " << i <<"\t";

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
		
		cout<<endl;
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