// year.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "iostream"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int s_year, s_month, s_day, e_year, e_month, e_day;
	int i, j, k, count;
	for (i = e_year - s_year, i<e_year, i++; j = e_month - s_month; k = e_day - s_day)
	{
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
		{
			i = 366;
		}
		else
		{
			i = 365;
		}
	}
	if (s_month<e_month && (j == 1 || 5 || 7 || 8 || 10 || 12))
	{
		j = (12 - s_month + e_month) * 31;
	}
	else if (s_month<e_month, (j == 4 || 6 || 9 || 10))
	{
		j = (12 - s_month + e_month) * 30;
	}
	else if (j == 2)
	{
		j = (12 - s_month + e_month) * 28;
	}
	if (s_month>e_month, (j == 1 || 3 || 5 || 7 || 8 || 10 || 12))
	{
		j = (e_month - s_month) * 31;
	}
	else if (s_month>e_month, (j == 4 || 6 || 9 || 10))
	{
		j = (s_month - s_month) * 30;
	}
	else
	{
		j = (e_month - e_month) * 28;
	}
	if (s_day<e_day)
	{
		k = e_day - s_day;
	}
	else if (s_day>e_day)
	{
		k = -(e_day - s_day);
	}
	cout << count << "=" << "i" << "+" << "j" << "+" << "k" << endl;
	return 0;
}