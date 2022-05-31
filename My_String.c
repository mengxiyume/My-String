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
char* My_Strcpy(char* destination, const char* source)
{
	char* start = destination;

	assert(destination);
	assert(source);

	while (*destination++ = *source++)
	{
		;
	}
	return start;
}

//Ŀ�ĵر����㹻��
//Դͷ��Ŀ�ĵر������'\0'
//Ŀ�ĵ���Ҫת���ַ�
char* My_Strcat(char* destination, const char* source)
{
	char* start = destination;

	assert(destination);//ָ����Ч�Բ���
	assert(source);

	while (*destination++)
	{
		;//������\0�� 
	}

	destination--;

	while (*destination++ = *source++)
	{
		;
	}

	*destination = *source;//���ݿ���

	return start;//����ԭ���ַ�����ַ
}

//�ַ����Ƚ�
int My_Strcmp(const char* string1, const char* string2)
{
	assert(string1);
	assert(string2);

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
char* My_Strncpy(char* destination, const char* source, size_t count)
{
	char* start = destination;

	assert(destination);
	assert(source);

	//����һ��copy
	while (count && (*destination++ = *source++))//������ֵcopy��ȥ֮��
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
char* My_Strncat(char* destination, const char* source, size_t count)
{
	char* start = destination;

	assert(destination);
	assert(source);

	while (*destination++)
	{
		;
	}

	destination--;

	while (count--)
	{
		if (!(*destination++ = *source++))		//�ж����ʱ�Ѿ�����		//��*sourceֵΪ'\0'ʱ����ֵ��ʹ���ʽֵΪ0����0ת��Ϊ��0ֵ������if�����
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
	static char The_End = NULL;

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

	The_End = NULL;

	while (*home++)
	{
		tmp_sep = separate;
		while (*tmp_sep++)
		{
			if (*home == *tmp_sep)
			{
				if (!*tmp_sep)
				{
					The_End = 1;
				}

				*home = '\0';
				Home_Tmp = home;			//���м�⵽�ص��ַ������ַ��������㲢�����ô�������ʼ��ַ
				return start;
			}
		}

	}


	return NULL;		//û�н������㷵��NULL
}


//�˷����ܣ�Ӧ������
//size_t My_Strlen(const char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	return My_Strlen(++str) + 1;
//}
