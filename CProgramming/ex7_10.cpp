#define N 100
#include <stdio.h>
#include <iostream.h>
void fun(char s[], int m);
void main()
{
	char s[N];
	int m;
	cout<<"�������ַ�����"<<endl;
	gets(s);
	cout<<"������Ҫ�ƶ����ַ�����";
	cin>>m;
	fun(s,m);
	cout<<"ƽ�ƺ���ַ����ǣ�"<<endl;
	puts(s);
}

void fun(char s[], int m)
{
	char c;
	int j;
	for( int i = 0; i < m; i++)
	{
		c = s[0];
		j = 1;
		while( s[j] != '\0')
		{
			s[j-1]=s[j];
			j++;
		}
		s[j-1]=c;
	}
}
