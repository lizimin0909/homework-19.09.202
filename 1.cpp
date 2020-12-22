// HW19.09.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
int main()
{
	std::cout << "Input m n:";
	int m, n;
	std::cin >> m >> n;
	int m1 = m, n1 = n;
	int** a = new int * [m];

	for (int i = 0; i < m; ++i)
	{
		a[i] = new int[n];
	}
	int k = 0, j = 0, g = 1;
	while (k < m && j < n)
	{
		for (int i = j; i < n; ++i)
			a[k][i] = g++;
		k++;
		for (int i = k; i < m; ++i)
			a[i][n - 1] = g++;
		n--;
		if (k < m)
		{
			for (int i = n - 1; i >= j; --i)
				a[m - 1][i] = g++;
			m--;
		}
		if (j < n)
		{
			for (int i = m - 1; i >= k; --i)
				a[i][j] = g++;
			j++;
		}
	}

	for (int i = 0; i < m1; ++i)
	{
		for (int j = 0; j < n1; ++j)
			std::cout  << "  "<<a[i][j];
		std::cout <<std::endl;
	}
}
