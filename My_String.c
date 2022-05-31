#define _CRT_SECURE_NO_WARNINGS 1

#include<assert.h>

#include"My_String.h"

//size_t类型会导致一些错误	所以不建议使用减法作为比较方式
//求字符串长度
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

//src字符串内必须包含'\0'
//dest必须可被更改
//dest需要足够长
//字符串拷贝
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

//目的地必须足够大
//源头及目的地必须包含'\0'
//目的地需要转义字符
char* My_Strcat(char* destination, const char* source)
{
	char* start = destination;

	assert(destination);//指针有效性测试
	assert(source);

	while (*destination++)
	{
		;//跳过到\0处 
	}

	destination--;

	while (*destination++ = *source++)
	{
		;
	}

	*destination = *source;//数据拷贝

	return start;//返回原本字符串地址
}

//字符串比较
int My_Strcmp(const char* string1, const char* string2)
{
	assert(string1);
	assert(string2);

	while (*string1 && *string1++ == *string2++)
	{
		;	//相等则继续，不等则离开并比较
	}

	return *string1 - *string2;	//返回差值
}

//char* My_Strstr(const char* string, const char* charset)	//字符串查找
//{
//	char* _string = NULL;
//	char* _charset = NULL;									//设置一个临时指针，存储内容为原指针存储的地址
//
//	if (!(*charset))
//	{
//		return string;										//如果比较源第一个字符为'\0'则返回空值，结束
//	}
//
//	while (*string)											//string所指向的值不为'\0'则进行循环，否则跳出并返回NULL
//	{
//		_string = (char*)string;									//临时指针变量值设置为即时计算的新起始地址
//		_charset = charset;
//
//		while (*_string && *_charset && *_string == *_charset)	//有任意一个指针指向的值为'\0'则跳出循环，否则判断内容是否为同值
//		{
//			_string++;											//临时指针变量自加1，跳过1字节
//			_charset++;
//		}
//		if (!(*_charset))
//		{
//			return --string;									//临时指针变量内的值为'\0'时返还当次循环时的原指针的自减一的值
//		}
//
//		_string++;												//临时指针变量自加一
//
//		string = _string;										//将临时指针变量的值赋给原指针变量
//		charset = _charset;
//
//	}
//	return NULL;											//如果并没有进行以上计算则返回NILL
//}


char* My_Strstr(const char* string, const char* charset)	//字符串查找
{
	char* _string = NULL;										//设置一个临时指针变量
	char* _charset = NULL;
	char* start = (char*)string;								//设置返回指针变量为强制类型转换的字符指针

	if (! *charset)												//charset的值为'\0'时返还任意值，默认为string的地址
	{
		return *string;
	}
	while (*start)												//返回的指针内容为'\0'时跳出循环并返还NULL
	{
		_string = start;										//临时指针变量赋_string的值
		_charset = (char*)charset;								//临时指针变量赋强制char*的charset值
		while (*_string && *_charset && !(*_string - *_charset))//判断如果有任意一方为空则跳出，且两指针指向内容相等则各自加1
		{
			_string++;
			_charset++;
		}

		if (!*_charset)											//_charset的值为假时执行返还
		{
			return start;										//返还未被改变的start的值
		}

		start++;												//指针++，跳过一个字符的大小，比较下一个字符
	}

	return NULL;												//当string内不包含完整charset时返还NULL
}

//指定长度拷贝
char* My_Strncpy(char* destination, const char* source, size_t count)
{
	char* start = destination;

	assert(destination);
	assert(source);

	//进行一个copy
	while (count && (*destination++ = *source++))//将所以值copy过去之后
	{
		count--;
	}
	if (count)//count为0离开
	{
		while (--count)//先--再使用，减少前一次计算copy过去的'\0'的次数
		{
			*destination++ = '\0';//该地址处值赋0
		}
	}

	return start;
}

//指定长度追加
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
		if (!(*destination++ = *source++))		//判断完成时已经计算		//当*source值为'\0'时，赋值并使表达式值为0，！0转化为非0值，进行if内语句
		{
			*destination = '\0';
			return start;
		}
	}

	return start;
}

int My_Strncmp(const char* string1,const char* string2,size_t count)	//指定长度字符串比较
{
	while (*string1++ == *string2++ || count--)
	{
		;
	}
	return *string1 - *string2;

}


char* My_Strtok(const char* string, const char* separate)
{
	//string	-----	目标字符串
	//separate	-----	条件源字符串

	//在string中寻找是否拥有*separate，如果拥有则将第一个存在的字符更改为NULL且返回string源地址,静态起始地址更新

	char* start = string;				//返回值

	static char* Home_Tmp = NULL;		//长期起始地址
	static char The_End = NULL;

	char* home = string;				//当前起始地址
	char* tmp_sep = NULL;
	char* _string = NULL;

	if (!string)
	{
		if (The_End)
		{
			return NULL;
		}
		home = Home_Tmp + 1;
		start = home;					//如果触发NULL条件，起始值为静态起始值 + 1，返回值也更新为静态起始值 + 1
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
				Home_Tmp = home;			//如有检测到特点字符集中字符进行运算并返还该次运算起始地址
				return start;
			}
		}

	}


	return NULL;		//没有进行运算返回NULL
}


//浪费性能，应付面试
//size_t My_Strlen(const char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	return My_Strlen(++str) + 1;
//}
