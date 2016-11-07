// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void getmemory(char *p)
{
	//p = new char[20];
	strcpy(p,"Hello, World\n");
	
}

int main()
{
	char *str = new char[20];
	getmemory(str);
	printf("%s", str);
	system("PAUSE");
	//int a[7] = { 9,45,28,10,3,2,7 }, t;
	//for (int i = 0; i < 7; i++)
	//{
	//	for (int j = i + 1; j < 7; j++)
	//	{
	//		t = a[i];
	//		if (a[i] < a[j])
	//		{
	//			t = a[i];
	//			a[i] = a[j];
	//			a[j] = t;
	//		}
	//	}
	//}
	/*int a[10], i, s[7] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		switch (a[i] / 10)
		{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			s[6]++;
			break;
		case 5:
			s[5]++;
			break;
		case 4:
			s[4]++;
			break;
		case 3:
			s[3]++;
			break;
		case 2:
			s[2]++;
			break;
		case 1:
			s[1]++;
			break;
		case 0:
			s[0]++;
			break;
		default:
			break;
		}

		
		
	}
	for (i = 6; i > 0; i--)
	{
		if (s[i] >= 6) break;
		else
			s[i - 1] += s[i];
	}*/
	//for(int i=0;i<7;i++)
	//{ 
	//   printf("%d ", a[i]);
	//}
	//system("PAUSE");
	//return 0;
}

