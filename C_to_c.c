#define _CRT_SECURE_NO_WARNINGS

char My_Toupper(char ch)		//Сд�ַ�ת��д
{

	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 32;			//���䷵����Ӧ��д�ַ�
	}

	return ch;
}

char My_Tolower(char ch)		//��д�ַ�תСд
{

	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + 32;			//���䷵����ӦСд�ַ�
	}

	return ch;

}