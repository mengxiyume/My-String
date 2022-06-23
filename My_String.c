#define _CRT_SECURE_NO_WARNINGS 1

#include<assert.h>

#include"My_String.h"

//size_t���ͻᵼ��һЩ����	���Բ�����ʹ�ü�����Ϊ�ȽϷ�ʽ
//���ַ�������
size_t My_Strlen(const char* string)
{
	int count = 0;
	assert(string);
	while (*string++)
	{
		count++;
	}
	return count;
}

//src�ַ����ڱ������'\0'
//dest����ɱ�����
//dest��Ҫ�㹻��
//�ַ�������
char* My_Strcpy(char* destination, const char* sourse)
{
	char* start = destination;

	while (*destination++ = *sourse++)
	{
		;
	}
	return start;
}

//Ŀ�ĵر����㹻��
//Դͷ��Ŀ�ĵر������'\0'
//Ŀ�ĵ���Ҫת���ַ�
char* My_Strcat(char* destination, const char* sourse)
{
	char* start = destination;



	while (*destination++)
	{
		;//������\0�� 
	}

	destination--;

	while (*destination++ = *sourse++)
	{
		;
	}

	*destination = *sourse;//���ݿ���

	return start;//����ԭ���ַ�����ַ
}

//�ַ����Ƚ�
int My_Strcmp(const char* string1, const char* string2)
{
	while (*string1 && *string1++ == *string2++)
	{
		;	//�����������������뿪���Ƚ�
	}

	return *string1 - *string2;	//���ز�ֵ
}

//char* My_Strstr(const char* string, const char* charset)	//�ַ�������
//{
//	char* _string = NULL;
//	char* _charset = NULL;									//����һ����ʱָ�룬�洢����Ϊԭָ��洢�ĵ�ַ
//
//	if (!(*charset))
//	{
//		return string;										//����Ƚ�Դ��һ���ַ�Ϊ'\0'�򷵻ؿ�ֵ������
//	}
//
//	while (*string)											//string��ָ���ֵ��Ϊ'\0'�����ѭ������������������NULL
//	{
//		_string = (char*)string;									//��ʱָ�����ֵ����Ϊ��ʱ���������ʼ��ַ
//		_charset = charset;
//
//		while (*_string && *_charset && *_string == *_charset)	//������һ��ָ��ָ���ֵΪ'\0'������ѭ���������ж������Ƿ�Ϊֵͬ
//		{
//			_string++;											//��ʱָ������Լ�1������1�ֽ�
//			_charset++;
//		}
//		if (!(*_charset))
//		{
//			return --string;									//��ʱָ������ڵ�ֵΪ'\0'ʱ��������ѭ��ʱ��ԭָ����Լ�һ��ֵ
//		}
//
//		_string++;												//��ʱָ������Լ�һ
//
//		string = _string;										//����ʱָ�������ֵ����ԭָ�����
//		charset = _charset;
//
//	}
//	return NULL;											//�����û�н������ϼ����򷵻�NILL
//}


char* My_Strstr(const char* string, const char* charset)	//�ַ�������
{
	char* _string = NULL;										//����һ����ʱָ�����
	char* _charset = NULL;
	char* start = (char*)string;								//���÷���ָ�����Ϊǿ������ת�����ַ�ָ��

	if (! *charset)												//charset��ֵΪ'\0'ʱ��������ֵ��Ĭ��Ϊstring�ĵ�ַ
	{
		return *string;
	}
	while (*start)												//���ص�ָ������Ϊ'\0'ʱ����ѭ��������NULL
	{
		_string = start;										//��ʱָ�������_string��ֵ
		_charset = (char*)charset;								//��ʱָ�������ǿ��char*��charsetֵ
		while (*_string && *_charset && !(*_string - *_charset))//�ж����������һ��Ϊ��������������ָ��ָ�������������Լ�1
		{
			_string++;
			_charset++;
		}

		if (!*_charset)											//_charset��ֵΪ��ʱִ�з���
		{
			return start;										//����δ���ı��start��ֵ
		}

		start++;												//ָ��++������һ���ַ��Ĵ�С���Ƚ���һ���ַ�
	}

	return NULL;												//��string�ڲ���������charsetʱ����NULL
}

//ָ�����ȿ���
char* My_Strncpy(char* destination, const char* sourse, size_t count)
{
	char* start = destination;

	//����һ��copy
	while (count && (*destination++ = *sourse++))//������ֵcopy��ȥ֮��
	{
		count--;
	}
	if (count)//countΪ0�뿪
	{
		while (--count)//��--��ʹ�ã�����ǰһ�μ���copy��ȥ��'\0'�Ĵ���
		{
			*destination++ = '\0';//�õ�ַ��ֵ��0
		}
	}

	return start;
}

//ָ������׷��
char* My_Strncat(char* destination, const char* sourse, size_t count)
{
	char* start = destination;

	while (*destination++)
	{
		;
	}

	destination--;

	while (count--)
	{
		if (!(*destination++ = *sourse++))		//�ж����ʱ�Ѿ�����		//��*sourceֵΪ'\0'ʱ����ֵ��ʹ���ʽֵΪ0����0ת��Ϊ��0ֵ������if�����
		{
			*destination = '\0';
			return start;
		}
	}

	return start;
}

int My_Strncmp(const char* string1,const char* string2,size_t count)	//ָ�������ַ����Ƚ�
{
	while (*string1++ == *string2++ || count--)
	{
		;
	}
	return *string1 - *string2;

}


char* My_Strtok(const char* string, const char* separate)
{
	//string	-----	Ŀ���ַ���
	//separate	-----	����Դ�ַ���

	//��string��Ѱ���Ƿ�ӵ��*separate�����ӵ���򽫵�һ�����ڵ��ַ�����ΪNULL�ҷ���stringԴ��ַ,��̬��ʼ��ַ����

	char* start = string;				//����ֵ

	static char* Home_Tmp = NULL;		//������ʼ��ַ
	static char The_End = NULL;			//ͬһ�ַ������������ʶ

	char* home = string;				//��ǰ��ʼ��ַ
	char* tmp_sep = NULL;
	char* _string = NULL;

	if (!string)
	{
		if (The_End)
		{
			return NULL;
		}
		home = Home_Tmp + 1;
		start = home;					//�������NULL��������ʼֵΪ��̬��ʼֵ + 1������ֵҲ����Ϊ��̬��ʼֵ + 1
	}

	The_End = NULL;						//���ñ�ʶͬһ�ַ�����δ����

	while (*home++)
	{
		tmp_sep = separate;
		while (*tmp_sep++)
		{
			if (*home == *tmp_sep)
			{
				if (!*tmp_sep)
				{
					The_End = 1;			//���������'\0'���������¼Ϊ1���´���NULL������ֱ�ӷ���NULL
				}

				*home = '\0';
				Home_Tmp = home;			//���м�⵽�ص��ַ������ַ��������㲢�����ô�������ʼ��ַ
				return start;
			}
		}

	}


	return NULL;		//û�н������㷵��NULL
}

int OS_Bit()	//����ϵͳ��λ���
{
	float Bit;
	if (sizeof(Bit) > 4)
	{
		return 1;
	}
	return 0;	//64λ����ϵͳ����true��32λ����ϵͳ����false
}

int AB_sort(void* p1, void* p2)
{
	return (int)p1 - (int)p2;		//p1��ַ���򷵻�ֵ����0��p1��ַ���򷵻�ֵС��0
}


void* My_Memcpy(void* destination, const void* sourse, size_t number)		//�ڴ濽��
{
	char* _destination = (char*)destination;
	const char* _sourse = (char*)sourse;

	char* Tmp_Destination;

	char _tmp = *_sourse;

	size_t _number = number;

	assert(destination);
	assert(sourse);

	while (_number--)
	{

		*_destination++ = *_sourse++;	//һ�θ���һ���ֽ�
	}

	return destination;
}

//------------------------------------------------------------------------------------------------------------------//
void* My_Memmove(void* destination, const void* sourse, size_t number)												//
{																													//
	char* _destination = destination;																				//
	char* _sourse = sourse;																							//
																													//
	if (_destination == _sourse)																					//	d1 = s1 || d2 = s2
	{														//��ʼ��ַ��ͬ��ֱ�ӷ�����ʼ��ַ						//	Ŀ�ĵؿռ���Դ�ռ���ȫ�غ�
		return destination;																							//
	}																												//
																													//
	else if (_destination >= _sourse + number || _destination + number <= sourse)									//	d1 > s2 && d2 < s1
	{																												//
		while (number--)																							//
		{																											//	�ռ䲻�غ�
			*_destination++ = *_sourse++;					//�ڴ�ռ以��������ֱ��˳������						//
		}																											//
		return destination;																							//
	}																												//
																													//
	if (_destination < _sourse)																						//
	{																												//
		int input = 0;																								//	���ֿռ��غ���Ŀ�ĵ���ǰ��
		while (input++ <= number)																					//
		{																											//
			*(_destination + input) = *(_sourse + input);	//��ǰ�����ƶ�											//
		}																											//
		return destination;																							//
	}																												//
																													//
	else																											//	���ֿռ��غ���Ŀ�ĵ��ں�
	{																												//
		int input = number;																							//
		while (input--)																								//
		{																											//
			*(_destination + input) = *(_sourse + input);	//�Ӻ���ǰ�ƶ�											//
		}																											//
		return destination;																							//
	}																												//
}																													//
//------------------------------------------------------------------------------------------------------------------//

//�˷����ܣ�Ӧ������
//size_t My_Strlen(const char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	return My_Strlen(++str) + 1;
//}
