#define _CRT_SECURE_NO_WARNINGS 1


size_t My_Strlen(const char* str);													//�ַ����󳤶�

char* My_Strcpy(char* destination, const char* source);								//�ַ�������
char* My_Strcat(char* destination, const char* source);								//�ַ���׷��
int My_Strcmp(const char* string1, const char* string2);							//�ַ����Ƚ�
char* My_Strstr(const char* string, const char* charset);							//�ַ�������
//ֻ������'\0'�Ż�ֹͣ																//���Ȳ������Ƶ��ַ�������

char* My_Strncpy(char* destination, const char* source, size_t count);				//�ַ�������
char* My_Strncat(char* destination, const char* source, size_t count);				//�ַ���׷��
int My_Strncmp(const char* string1, const char* string2, size_t count);				//�ַ����Ƚ�
//�ﵽָ���ַ�����������ֹͣ				 										//�����Ƶ��ַ�������