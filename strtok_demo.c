#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include"My_String.h"

int main()
{
	//��ؼ��ֲ��
	//����ַ����ĵ���ʹ�ò���ͻ����Űɣ�

	char arr[] = "www.hello@word.com";
	char arr1[] = "192.168.20.212";
	char* p = "*>.";

	char buf[1024] = { 0 };
	char buf2[1024] = { 0 };
	char* ret = NULL;

	strcpy(buf, arr1);			//ʹ��ǰ����Դ�ַ����Է�ֹԴ�𻵣���Ȼ�ѽ�Դ�ַ���const
	strcpy(buf2, arr);

	for (printf("%s\n", My_Strtok(arr1, p)); ret = My_Strtok(NULL, p); printf("%s\n", ret))
	{
		;//��һ�����
	}

	printf("\n%s\n\n", buf);

	for (printf("%s\n", My_Strtok(arr, p)); ret = My_Strtok(NULL, p); printf("%s\n", ret))
	{
		;//�ڶ������
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