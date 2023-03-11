#include <iostream>
#include <ctime>

using namespace std;

int const rows = 5;
int const cols = 6;

void FillRand(int arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(double arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(int crr[rows][cols], const int rows,const int cols, int minValuIn= 0, int maxValuIn= 10);
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);

template<typename T>
void Print(T arr[], int const size);
template<typename T>
void Print(T crr[rows][cols], const int rows, const int cols);

template<typename T>
T Sum(T arr[], int const size);
template<typename T>
T Sum (T crr[rows][cols], int const rows,int const cols);

template<typename T>
T Avg(T arr[], int const size);
template<typename T>
T Avg(T crr[rows][cols], int const rows,int const cols);

template<typename T>
T minValueIn(T arr[], int const size);
template<typename T>
T minValueIn(T crr[rows][cols], int const rows, int const cols);

template<typename T>
T maxValuenIn(T arr[], int const size);
template<typename T>
T maxValuenIn(T crr[rows][cols], int const rows,int const cols);

template<typename T>
void Sort(T arr[], int const size);
template<typename T>
void Sort(T crr[rows][cols], int const rows,int const cols);

template<typename T>
void shiftLeft(T arr[], int const size);
template<typename T>
void shiftLeft(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void shiftRight(T arr[], int const size);
template<typename T>
void shiftRight(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void UniqueRand(T brr[], int const size);
template<typename T>
void UniqueRand(T crr[rows][cols], int const rows, int const cols);

template<typename T>
void Search(T arr[], int size);
template<typename T>
void Search(T crr [rows][cols],int const rows,int const cols);


int main()
{
	setlocale(LC_ALL, "Rus");
	int const size = 10;
	double arr[size];
	double brr[size];
	double minValuIn;
	double maxValuIn;
	double crr[rows][cols];
	
	FillRand(arr, size);
	Print(arr, size);
	Search(arr, size);
	cout << "Сумма элементов массива равна:" << Sum(arr, size) << endl;
	cout << "Среднее арефметическое элементов массива равна:" << Avg(arr, size) << endl;
	cout << "Минимальный элемент:" << minValueIn(arr, size) << endl;
	cout << "Максимвльный элемент:" << maxValuenIn(arr, size);
	Sort(arr, size);
	Print(arr, size);
	shiftLeft(arr, size);
	Print(arr, size);
    shiftRight(arr, size);
	Print(arr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(brr, size);
	Print(arr, size);
	cout << "--------------------------------------------------------------------------" << endl;
	FillRand(crr, rows, cols);
	Print(crr, rows, cols);
	Search(crr, rows,cols);
	cout << "Сумма элементов двумерного массива равна:" << Sum(crr, rows ,cols) << endl;
	cout << "Среднее арефметическое элементов двумерного массива равно:" << Avg(crr, rows,cols) << endl;
	cout << "Минимальный элемент:" << minValueIn(crr, rows ,cols) << endl;
	cout << "Максимальный элемент:" << maxValuenIn(crr, rows, cols) << endl;
	Sort(crr, rows ,cols);
	Print(crr, rows, cols);
	shiftLeft(crr, rows, cols);
	Print(crr, rows, cols);
	shiftRight(crr, rows, cols);
	Print(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(crr, rows, cols);
	Print(crr, rows, cols);
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

template<typename T>
void Print(T arr[], int const size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";

	cout << "\n";
	
}
template<typename T>
void Print(T crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";

}

template<typename T>
T Sum(T arr[], int const size)
{
	T summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}
template<typename T>
T Sum(T crr[rows][cols], int const rows, int const cols)
{
	T summ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summ += crr[i][j];
		}
	}
	return summ;
}

template<typename T>
T Avg(T arr[], int const size)
{
	return (T)Sum(arr, size) / size;
}
template<typename T>
T Avg(T crr[rows][cols], int const rows, int const cols)
{
	return (T)Sum(crr, rows,cols) / (rows*cols);
}

template<typename T>
T minValueIn(T arr[], int const size)
{
	T min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}
template<typename T>
T minValueIn(T crr[rows][cols], int const rows, int const cols)
{
	T min = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValuenIn(T arr[], int const size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}
template<typename T>
T maxValuenIn(T crr[rows][cols], int const rows, int const cols)
{
	T max = crr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
	}
	return max;
}

template<typename T>
void Sort(T arr[], int const size)    // Отсортирован методом прямой сортировки по возрастанию
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
template<typename T>
void Sort(T crr[rows][cols], int const rows, int const cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k <rows; k++)
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

template<typename T>
void shiftLeft(T arr[], int const size)
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
	
}
template<typename T>
void shiftLeft(T crr[rows][cols], int const rows, int const cols)
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
}

template<typename T>
void shiftRight(T arr[], int const size)
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
	
}
template<typename T>
void shiftRight(T crr[rows][cols], int const rows, int const cols)
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
}

template<typename T>
void UniqueRand(T brr[], int const size)
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
}
template<typename T>
void UniqueRand(T crr[rows][cols], int const rows, int const cols)
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

template<typename T>
void Search(T arr[], int size)
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
template<typename T>
void Search(T crr[rows][cols], int const rows, int const cols)
{
	int score = 0;
	int f = 1;
	cout << "Строчки с одинаковыми значениями элементов: " << endl;
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
