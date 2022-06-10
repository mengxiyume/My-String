#define _CRT_SECURE_NO_WARNINGS

//如果传值为数字，则返回数值，如果不为数字，则返回原值
int NumToAssic(char sourse)
{
	if (sourse >= '0' && sourse <= '9')
	{
		return sourse - 48;
	}
	return sourse;
}