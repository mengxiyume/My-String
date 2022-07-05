#define _CRT_SECURE_NO_WARNINGS 1


#include<string.h>
#include<assert.h>
#include<ctype.h>

#include"My_String.h"
#include"C_to_c.h"

#include<stdio.h>


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//
//	int i = 0;
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	_memmove(arr3 + 1, arr3, 7 * sizeof(int));
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//	printf("\n");
//
//	return 'a';
//}




int main()
{
	int arr1[] = { 1,3,2,4,5 };
	int arr2[] = { 1,2,3,4,5 };

	char str[10] = "";

	My_Memset(str, '#', 10);	//设置缓冲区
	
	printf("%d\n", My_Memcmp(arr1, arr2, 12));

	return 0;
}



//int main()
//{
//	//char ch = '2';
//
//	//int ret = islower(ch);
//
//	//ret = isdigit('4');
//
//	//printf("%d\n", ret);
//
//	char ch = 'c';
//
//	printf("%c\t", ch);
//
//	ch = My_Toupper(ch);//小写字符转大写
//
//	printf("%c\t", ch);
//
//	ch = My_Tolower(ch);//大写字符转小写
//
//	printf("%c\t", ch);
//
//	return 0;
//}

//第一次对同一个字符串使用时传字符串地址，第二次及以后对同一字符串使用时传NULL
//char* My_Strtok(char* string, const char* separate)			//字符串分离函数
//{
//	//string  --  目标字符串
//	//separate   --  分隔字符合集
//
//	//忘了加NULL选项了
//
//	static char* Char_Tmp = NULL;			//临时静态指针tmp记录起始位置，如果并未创建则创建并初始化为NULL
//
//	char* home = string;					//起始地址为string
//
//	char* _separate = NULL;
//
//
//	if (!string)
//	{
//		string = Char_Tmp + 1;
//		home = Char_Tmp + 1;
//	}
//
//		//while (*string++)						//遇到'\0'停止并退出
//		//{
//		//	_separate = separate;
//		//	while (*string == *_separate++)		//比较是否特定字符
//		//	{
//		//		Char_Tmp = string;
//		//		*string = '\0';
//		//		return home;					//分割并返回起始地址
//		//	}
//		//}
//
//	if (!*--string)
//	{
//		Char_Tmp = NULL;
//		return home;
//	}
//
//	return NULL;							//没有进行实际运算返回 NULL
//
//}

//int main()
//{
//	//char arr[] = "www.hello@word.com";
//	//char arr1[] = "192.168.20.212";
//	//char* p = "*>.";
//
//	//char buf[1024] = { 0 };
//	//char buf2[1024] = { 0 };
//	//char* ret = NULL;
//	//
//	//strcpy(buf, arr1);
//	//strcpy(buf2, arr);
//
//	//for (printf("%s\n",My_Strtok(arr1, p));ret=My_Strtok(NULL,p); printf("%s\n", ret))
//	//{
//	//	;
//	//}
//
//	//printf("\n%s\n\n", buf);
//
//	//for (printf("%s\n", My_Strtok(arr, p)); ret = My_Strtok(NULL, p); printf("%s\n", ret))
//	//{
//	//	;
//	//}
//
//	//printf("\n%s\n\n", buf2);
//
//	//printf("%s\n", My_Strtok(NULL, p));
//
//
//	//printf("%s", strtok(arr1, "k"));
//
//	//ret = strtok(NULL, p);
//
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//
//	//printf("%s\n", ret);
//
//
//
//	//My_Strtok(arr, p);
//
//
//	char* str = strerror(errno);
//
//	//FILE* pf = fopen("test.txt", "r");
//
//	//if (!pf)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else
//	//{
//	//	printf("open file success\n");
//	//}
//	//return 0;
//
//	int i = 0;
//
//	for (i = 0; i < 500; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//
//
//}



//int main()
//{
//	char* pch = "Hello Word!";			//字符指针pch存储着字符'H'的地址
//
//	printf("%c", *pch);					//打印字符'H'
//	while (*pch++)						//指针+1地址跳过一个字符大小 也就是1字节
//	{
//		printf("%c", *pch);				//打印该地址处存储的字符
//	}
//	printf("\n");						//换行
//
//	return 0;							//Tan Haoqiang`s mom is my love
//}




//int main()
//{
//	//char arr1[20] = " Word Eldit";
//	//char arr2[] = "Eldit";
//
//	//My_Strcat(arr1, arr2);	//在第一个字符串的末尾进行一个指定长度的追加，只补1个\0
//
//	//My_Strcpy(arr1, arr2);
//
//	//int as = My_Strncmp(arr1,arr2,5);
//
//	//printf("%s\n", arr1);
//
//	char* p1 = "abdcdef";
//	char* p2 = "def";
//
//	char* start = My_Strstr(p1, p2);
//
//	printf("%s\n", start); 
//
//
//	//printf("Hello Word!\n");
//
//	return 0;
//}


//count--;
//for (*destination++ = *source++; *source; *destination++ = *source++)
//{
//	count--;
//}
//count -= 2;//该次循环开始及末次循环所使用的操作次数
//for (*destination++ = '\0'; count; *destination++ = 0)
//{
//	count--;
//}
//*destination = '\0';
//return start;

	//return (*string1 - *string2);
	
	//int opent = 1;//循环开关
	//int state = 0;//结论状态
	//while (opent)
	//{
	//	if (*string1 > *string2)//第n个字符的大小对比->前项大，返回1
	//	{
	//		opent = 0;
	//		state = 1;
	//	}
	//	else if (*string1 < *string2)//第n个字符的大小对比->后项大，返回-1
	//	{
	//		opent = 0;
	//		state = -1;
	//	}
	//	else//第n个字符的大小比较->相同
	//	{
	//		if (*string1 == *string2 && *string1 == '\0')//第n项都为结束符时，跳出循环并返回0
	//		{
	//			opent = 0;
	//			state = 0;
	//		}
	//		else//第n项相同，地址增加，继续循环
	//		{
	//			opent = 1;
	//			string1++;
	//			string2++;
	//		}
	//	}
	//}
	//return state;

//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "wow";
//
//	char* p1 = "abcdef";
//	char* p2 = "bbcde";
//
//	if (My_Strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	if (My_Strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	if (My_Strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abcdef");
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////printf("6|%d\n", len);
//	////printf("随机值|%d\n", strlen(arr));
//	//len = My_Strlen("abcdef");
//	//printf("6|%d\n", len);
//
//	//char arr1[] = "abcdef";
//	//char arr2[] = "nmsl";
//
//	//assert(My_Strcpy(arr1, arr2));
//
//	//printf("%s", arr1);
//	char arr1[30] = "Hello ";
//	char arr2[] = "Word";
//
//	My_Strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	
//	return 0;
//}


//比较两个字符串里面的每一个内容用双循环