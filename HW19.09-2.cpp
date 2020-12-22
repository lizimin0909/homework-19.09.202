﻿
#include <iostream>
using namespace std;
void fun(int a, int b)
{
	int k = -1;
	while (a > 0)
	{
		k++;
		a /= 10;
	}
	for (int i = 0; i <= b - k; ++i)
		std::cout << ' ';
	return;
}
int main()
{
	const int n = 5, m = 6;
	int M[n][m]; int mx = 0, k = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			M[i][j] = rand() % 10000;
			mx = max(M[i][j], mx);
		}
	}
	while (mx > 0)
	{
		k++;
		mx /= 10;
	}
	std::cout << "L:" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << M[i][j];
			fun(M[i][j],k);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "R:" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			fun(M[i][j],k);
			std::cout << M[i][j];
		}
		std::cout << std::endl;
	}
}