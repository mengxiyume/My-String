#define _CRT_SECURE_NO_WARNINGS 1

#include"C_to_c.h"

size_t My_Strlen(const char* str);													//�ַ����󳤶�

char* My_Strcpy(char* destination, const char* sourse);								//�ַ�������
char* My_Strcat(char* destination, const char* sourse);								//�ַ���׷��
int My_Strcmp(const char* string1, const char* string2);							//�ַ����Ƚ�
char* My_Strstr(const char* string, const char* charset);							//�ַ�������
//ֻ������'\0'�Ż�ֹͣ																//���Ȳ������Ƶ��ַ�������

char* My_Strncpy(char* destination, const char* sourse, size_t count);				//�ַ�������
char* My_Strncat(char* destination, const char* sourse, size_t count);				//�ַ���׷��
int My_Strncmp(const char* string1, const char* string2, size_t count);				//�ַ����Ƚ�
//�ﵽָ���ַ�����������ֹͣ				 										//�����Ƶ��ַ�������

char* My_Strtok(const char* string, const char* separate);							//�ַ�������

int OS_Bit();																		//����ϵͳ��λ�ж�
int AB_sort(void* p1, void* p2);													//��ַ�ߵ��ж�

void* My_Memcpy(void* destination, const void* sourse, size_t number);				//�ڴ濽������
void* My_Memmove(void* destination, const void* sourse, size_t number);				//�ڴ��ƶ�����