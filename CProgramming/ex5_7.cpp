#include<iostream.h>
void main()
{
	long n,m;
	int a=0,b=0;
	float t = 1,p;
	cout<<"������һ��������8λ������: ";
	cin>>n;
	m = n;
	if( n < 0)
	{
		t = 1.5;
		m = -n;
	}
	if( m%2 == 0)
		t *= 2;
	
	while( m > 0)
	{
		a++;
		if( m%10 == 2) b++;
		m = m/10;
	}
	
	p = b/(float)a*t*100;

	cout<<n<<"�ķ����̶���:"<<p<<"%"<<endl;
}

