#pragma once
#include <stdio.h>
#include <math.h>

//������ � ������ - x
//������ � �������� - 1
//������ � ���������� - 1
//������ � ��������� - x

double revSum(double (*nextEl)(double x, double pref, int i), double first, double x);

static double recSum(double (*nextEl)(double x, double pref, int i), double x, double pref, int i);

//����� ����
double straightSum(double (*nextEl)(double x, double pref, int i), double first, double x);

//����� �������� ���������
double nearbySum(double (*nextEl)(double x, double pref, int i), double first, double x);

double nextSin(double x, double pref, int i);

double nextCos(double x, double pref, int i);

double nextExp(double x, double pref, int i);

double nextLn(double x, double pref, int i);

double absoluteDeviation(double value, double standard);

double relativeDeviation(double value, double standard);