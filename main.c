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

	My_Memset(str, '#', 10);	//���û�����
	
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
//	ch = My_Toupper(ch);//Сд�ַ�ת��д
//
//	printf("%c\t", ch);
//
//	ch = My_Tolower(ch);//��д�ַ�תСд
//
//	printf("%c\t", ch);
//
//	return 0;
//}

//��һ�ζ�ͬһ���ַ���ʹ��ʱ���ַ�����ַ���ڶ��μ��Ժ��ͬһ�ַ���ʹ��ʱ��NULL
//char* My_Strtok(char* string, const char* separate)			//�ַ������뺯��
//{
//	//string  --  Ŀ���ַ���
//	//separate   --  �ָ��ַ��ϼ�
//
//	//���˼�NULLѡ����
//
//	static char* Char_Tmp = NULL;			//��ʱ��ָ̬��tmp��¼��ʼλ�ã������δ�����򴴽�����ʼ��ΪNULL
//
//	char* home = string;					//��ʼ��ַΪstring
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
//		//while (*string++)						//����'\0'ֹͣ���˳�
//		//{
//		//	_separate = separate;
//		//	while (*string == *_separate++)		//�Ƚ��Ƿ��ض��ַ�
//		//	{
//		//		Char_Tmp = string;
//		//		*string = '\0';
//		//		return home;					//�ָ������ʼ��ַ
//		//	}
//		//}
//
//	if (!*--string)
//	{
//		Char_Tmp = NULL;
//		return home;
//	}
//
//	return NULL;							//û�н���ʵ�����㷵�� NULL
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
//	char* pch = "Hello Word!";			//�ַ�ָ��pch�洢���ַ�'H'�ĵ�ַ
//
//	printf("%c", *pch);					//��ӡ�ַ�'H'
//	while (*pch++)						//ָ��+1��ַ����һ���ַ���С Ҳ����1�ֽ�
//	{
//		printf("%c", *pch);				//��ӡ�õ�ַ���洢���ַ�
//	}
//	printf("\n");						//����
//
//	return 0;							//Tan Haoqiang`s mom is my love
//}




//int main()
//{
//	//char arr1[20] = " Word Eldit";
//	//char arr2[] = "Eldit";
//
//	//My_Strcat(arr1, arr2);	//�ڵ�һ���ַ�����ĩβ����һ��ָ�����ȵ�׷�ӣ�ֻ��1��\0
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
//count -= 2;//�ô�ѭ����ʼ��ĩ��ѭ����ʹ�õĲ�������
//for (*destination++ = '\0'; count; *destination++ = 0)
//{
//	count--;
//}
//*destination = '\0';
//return start;

	//return (*string1 - *string2);
	
	//int opent = 1;//ѭ������
	//int state = 0;//����״̬
	//while (opent)
	//{
	//	if (*string1 > *string2)//��n���ַ��Ĵ�С�Ա�->ǰ��󣬷���1
	//	{
	//		opent = 0;
	//		state = 1;
	//	}
	//	else if (*string1 < *string2)//��n���ַ��Ĵ�С�Ա�->����󣬷���-1
	//	{
	//		opent = 0;
	//		state = -1;
	//	}
	//	else//��n���ַ��Ĵ�С�Ƚ�->��ͬ
	//	{
	//		if (*string1 == *string2 && *string1 == '\0')//��n�Ϊ������ʱ������ѭ��������0
	//		{
	//			opent = 0;
	//			state = 0;
	//		}
	//		else//��n����ͬ����ַ���ӣ�����ѭ��
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
//	////printf("���ֵ|%d\n", strlen(arr));
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


//�Ƚ������ַ��������ÿһ��������˫ѭ��