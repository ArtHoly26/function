#pragma once
#include "Constance.h"
#include "Stdafx.h"

int Sum(int arr[], int const size);
double Sum(double arr[], int const size);
char Sum(char arr[], int const size);
int Sum(int crr[rows][cols], int const rows, int const cols);
double Sum(double crr[rows][cols], int const rows, int const cols);
char Sum(char crr[rows][cols], int const rows, int const cols);

double Avg(int arr[], int const size);
double Avg(double arr[], int const size);
double Avg(char arr[], int const size);
double Avg(int crr[rows][cols], int const rows, int const cols);
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
int maxValuenIn(int crr[rows][cols], int const rows, int const cols);
double maxValuenIn(double crr[rows][cols], int const rows, int const cols);
char maxValuenIn(char crr[rows][cols], int const rows, int const cols);