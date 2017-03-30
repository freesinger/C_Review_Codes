#include "stdafx.h"
#include <stdio.h>
#include <string.h>

#define MAX 100

void sort(char str[][MAX + 1], int n, int len)
{
	char temp[MAX + 1];
	int i, j, k;
	for (i = 0; i<len; i++)     //选择排序法进行按从大到小排序
	{
		k = i;
		for (j = i + 1; j<len; j++)
		{
			if (strcmp(str[j], str[k]) >= 1)
				k = j;
		}
		if (k != i)
		{
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);
		}
	}
	if (n == 1)     //如是要求从大到小输出，则从后面开始向前面输出
	{
		for (i = len - 1; i >= 0; i--)
		{
			puts(str[i]);
		}
	}
	else                 //否则从前面到后面输出，因为排序时是从小到大排序的
	{
		for (i = 0; i<len; i++)
		{
			puts(str[i]);
		}
	}
}
int main()
{
	char str[MAX + 1][MAX + 1];   //一共可以存储100个字符串，每个串长最长为100
	int i, n;

	printf("n:");
	scanf("%d", &n);
	gets_s(str[0]);    //用来吃掉输入后面的回车
	
	for (i = 0; i<n; i++)
	{
		gets_s(str[i]);
	}

	sort(str, 1, n);
	printf("-------------\n");
	sort(str, 0, n);
}