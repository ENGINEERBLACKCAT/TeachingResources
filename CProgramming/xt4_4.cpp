#include <iostream.h>
void main()
{
	int n = 2,s=2,days = 0;
	double money = 0;
	for(;s<100;s=s+n)
	{
		money += 0.8*n;
		days++;
		cout<<"��"<<days<<"�칺��"<<n
			<<"��ƻ������ֹ���գ����ܹ�����"
			<<s<<"��ƻ��,������"<<money<<endl;
		n *= 3;
	}
	cout<<"ÿ��ƽ����"<<money/days<<endl;
}
	
	