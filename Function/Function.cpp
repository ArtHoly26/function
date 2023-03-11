#include "Stdafx.h"
#include "Constance.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statictic.h"
#include "Shift.h"
#include "Search.h"

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
	shiftLeft(crr, rows, cols);
	Print(crr, rows, cols);
	shiftRight(crr, rows, cols);
	Print(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
	UniqueRand(crr, rows, cols);
	Print(crr, rows, cols);
	cout << "--------------------------------------------------------------------------" << endl;
}

