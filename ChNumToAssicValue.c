#define _CRT_SECURE_NO_WARNINGS

//�����ֵΪ���֣��򷵻���ֵ�������Ϊ���֣��򷵻�ԭֵ
int NumToAssic(char sourse)
{
	if (sourse >= '0' && sourse <= '9')
	{
		return sourse - 48;
	}
	return sourse;
}