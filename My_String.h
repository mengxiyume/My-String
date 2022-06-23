#define _CRT_SECURE_NO_WARNINGS 1

#include"C_to_c.h"

size_t My_Strlen(const char* str);													//字符串求长度

char* My_Strcpy(char* destination, const char* sourse);								//字符串拷贝
char* My_Strcat(char* destination, const char* sourse);								//字符串追加
int My_Strcmp(const char* string1, const char* string2);							//字符串比较
char* My_Strstr(const char* string, const char* charset);							//字符串查找
//只有遇到'\0'才会停止																//长度不受限制的字符串函数

char* My_Strncpy(char* destination, const char* sourse, size_t count);				//字符串拷贝
char* My_Strncat(char* destination, const char* sourse, size_t count);				//字符串追加
int My_Strncmp(const char* string1, const char* string2, size_t count);				//字符串比较
//达到指定字符运算数量后停止				 										//受限制的字符串函数

char* My_Strtok(const char* string, const char* separate);							//字符串裁切

int OS_Bit();																		//操作系统数位判定
int AB_sort(void* p1, void* p2);													//地址高低判断

void* My_Memcpy(void* destination, const void* sourse, size_t number);				//内存拷贝函数
void* My_Memmove(void* destination, const void* sourse, size_t number);				//内存移动函数