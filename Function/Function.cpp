#include <iostream>
#include <ctime>

using namespace std;

void FillRand(int arr[], int size);
void Print(int arr[], int size);
double Sum(int arr[], int size);
double Avg(int arr[], int size);
int minValueIn(int arr[], int size);
int maxValuenIn(int arr[], int size);
void Sort(int arr[], int size);
void shiftLeft(int arr[], int size);
void shiftRight(int arr[], int size);
void UniqueRand(int arr[], int size);
void Search(int arr[], int size);

int main()
{
	setlocale(LC_ALL, "Rus");
	int const size = 10;
	int arr[size];
	int brr[size];

	FillRand(arr, size);
	Print(arr, size);
	cout << "Сумма массива равна:" << Sum(arr, size) << endl;
	cout << "Среднее арефметическое равно:" << Avg(arr, size) << endl;
	Search(arr, size);
	cout << "Минимальный элемент:" << minValueIn(arr, size) << endl;
	cout << "Максимвльный элемент:" << maxValuenIn(arr, size) << endl;
	Sort(arr, size);
	shiftLeft(arr, size);
	shiftRight(arr, size);
	UniqueRand(brr, size);
}

void FillRand(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
	cout << "\n";
}

double Sum(int arr[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++) summa += arr[i];
	return summa;
}

double Avg(int arr[], int size)
{
	double avg;
	avg = Sum(arr, size) / size;
	return avg;
}

int minValueIn(int arr[], int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];

	return min;;
}

int maxValuenIn(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];

	return max;
}

void Sort(int arr[], int size)    // Отсортирован методом прямой сортировки по возрастанию
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

void shiftLeft(int arr[], int size)
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

void shiftRight(int arr[], int size)
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

void UniqueRand(int brr[], int size)
{
	srand(time(NULL));
	int end;
	int begin;
	cout << "Введите начало диапазона:";
	cin >> begin;
	cout << "Введите конец диапазона:";
	cin >> end;
	for (int i = 0; i < size; i++) brr[i] = begin + rand() % (end - begin + 1);
	Print(brr, size);
}

void Search(int arr[], int size)
{
	int score = 0;
	for (int i = 0; i < size; i++)
	{
		int buffer = arr[i];

		for (int j = i + 1; j < size; j++)
		{
			if (buffer == arr[j])
			{
				cout << arr[j] << endl;
				score++;
			}
		}
	}
	cout << "Колличество повторений:" << score << endl;
}