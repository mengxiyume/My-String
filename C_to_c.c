#define _CRT_SECURE_NO_WARNINGS

char My_Toupper(char ch)		//小写字符转大写
{

	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 32;			//区间返还对应大写字符
	}

	return ch;
}

char My_Tolower(char ch)		//大写字符转小写
{

	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + 32;			//区间返还对应小写字符
	}

	return ch;

}