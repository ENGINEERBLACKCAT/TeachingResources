#include <iostream.h>
void main()
{
	double r, pi=3.14159;
	int k;
	cout<<"����һ��Բ�İ뾶��һ������ r k: "<<endl;
	cin>>r>>k;
	switch(k)
	{
	case 1:
		cout<<"Բ�����="<<pi*r*r<<endl;
		break;
	case 2:
		cout<<"Բ���ܳ�="<<2*pi*r<<endl;
		break;
	case 3:
		cout<<"Բ�����="<<pi*r*r<<endl;
		cout<<"Բ���ܳ�="<<2*pi*r<<endl;
		break;
	}
}
