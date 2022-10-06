#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int getA(int rok)
{
	if (rok <= 1582)
	{
		return 15;
	}
	if (rok <= 1699)
	{
		return 22;
	}
	if (rok <= 1899)
	{
		return 23;
	}
	if (rok <= 2199)
	{
		return 24;
	}
	if (rok <= 2299)
	{
		return 25;
	}
	if (rok <= 2399)
	{
		return 26;
	}
	if (rok <= 2499)
	{
		return 25;
	}
	return 0;
}


int getB(int rok)
{
	if (rok <= 1582)
	{
		return 6;
	}
	if (rok <= 1699)
	{
		return 2;
	}
	if (rok <= 1799)
	{
		return 3;
	}
	if (rok <= 1899)
	{
		return 4;
	}
	if (rok <= 2099)
	{
		return 5;
	}
	if (rok <= 2199)
	{
		return 6;
	}
	if (rok <= 2299)
	{
		return 0;
	}
	if (rok <= 2499)
	{
		return 1;
	}
	return 0; 
}

int wielkanoc(int rok)
{
	int a, b, c, d, e;

	a = rok % 19;
	b = rok % 4;
	c = rok % 7;
	d = (a * 19 + getA(rok)) % 30;
	e = (2 * b + 4 * c + 6 * d + getB(rok)) % 7;
	if ((d == 29 && e == 6) ||
		(d == 28 && e == 6))
	{
		d -= 7;
	}
	return d + e;
}


int main()
{
	int rok;
	int data;

	scanf("%d", &rok);

	data = 22 + wielkanoc(rok);
	if (data > 31)
	{
		printf("%d 4\n", data % 31);
	}
	else
	{
		printf("%d 3\n", data);
	}

	return 0;
}