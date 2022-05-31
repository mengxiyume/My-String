#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include"My_String.h"

int main()
{
	//多关键字查改
	//多个字符串的调用使用不冲突（大概吧）

	char arr[] = "www.hello@word.com";
	char arr1[] = "192.168.20.212";
	char* p = "*>.";

	char buf[1024] = { 0 };
	char buf2[1024] = { 0 };
	char* ret = NULL;

	strcpy(buf, arr1);			//使用前备份源字符串以防止源损坏（虽然已将源字符串const
	strcpy(buf2, arr);

	for (printf("%s\n", My_Strtok(arr1, p)); ret = My_Strtok(NULL, p); printf("%s\n", ret))
	{
		;//第一组调用
	}

	printf("\n%s\n\n", buf);

	for (printf("%s\n", My_Strtok(arr, p)); ret = My_Strtok(NULL, p); printf("%s\n", ret))
	{
		;//第二组调用
	}

	printf("\n%s\n\n", buf2);

	return 0;
}

			//put
			/*{
			192
			168
			20
			212
			
			192.168.20.212
			
			www
			hello@word
			com
			
			www.hello@word.com
			}*/