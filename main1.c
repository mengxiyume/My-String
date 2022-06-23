#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"My_String.h"
#include<assert.h>

struct s
{
	short age;
	char name[20];

};

int main()
{
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[10] = { 0 };

	////memcpy(arr2, arr1,sizeof(arr1));

	//struct s arr3[] = { {5,"ZhangSan"},{6,"LiSi"} };
	//struct s arr4[5] = { 0 };

	//My_Memcpy(arr4, arr3, sizeof(arr3));
	//My_Memcpy(arr2, arr1, sizeof(arr1));

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[20] = { 0 };
	int i = 0;

	int* parr1 = My_Memmove(arr1, arr, sizeof(arr));

		for (i = 0; i < 10; i++)
		{
			printf("%d ", parr1[i]);
		}

	printf("\n");

	return 0;
}
