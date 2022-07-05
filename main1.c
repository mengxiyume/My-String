#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include"My_String.h"
//#include<assert.h>
//
//struct s
//{
//	short age;
//	char name[20];
//
//};

//void* My_Memcpy1(void* destination, const void* sourse, size_t number)		//内存拷贝
//{
//	char* _destination = (char*)destination;
//	const char* _sourse = (char*)sourse;
//
//	char* Tmp_Destination;
//
//	char _tmp = *_sourse;
//
//	size_t _number = number;
//
//	while (_number--)
//	{
//
//		*_destination++ = *_sourse++;	//一次复制一个字节
//	}
//
//	return destination;
//}

//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//
//	////memcpy(arr2, arr1,sizeof(arr1));
//
//	//struct s arr3[] = { {5,"ZhangSan"},{6,"LiSi"} };
//	//struct s arr4[5] = { 0 };
//
//	//My_Memcpy(arr4, arr3, sizeof(arr3));
//	//My_Memcpy(arr2, arr1, sizeof(arr1));
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[20] = { 0 };
//	int i = 0;
//
//	My_Memmove(arr+2, arr,8*sizeof(int));
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr1[i]);
//	//}
//
//	printf("\n");
//
//	return 0;
//}
