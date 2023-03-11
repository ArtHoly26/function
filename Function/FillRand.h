#pragma once
#include "Constance.h"
#include "Stdafx.h"

void FillRand(int arr[], int const size, int minValuIn = 0, int maxValuIn = 5);
void FillRand(double arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char arr[], int const size, int minValuIn = 0, int maxValuIn = 10);
void FillRand(int crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(double crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);
void FillRand(char crr[rows][cols], const int rows, const int cols, int minValuIn = 0, int maxValuIn = 10);

void UniqueRand(int brr[], int const size);
void UniqueRand(double brr[], int const size);
void UniqueRand(char brr[], int const size);
void UniqueRand(int crr[rows][cols], int const rows, int const cols);
void UniqueRand(double crr[rows][cols], int const rows, int const cols);
void UniqueRand(char crr[rows][cols], int const rows, int const cols);
