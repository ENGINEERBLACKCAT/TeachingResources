#include <iostream.h>
void main()
{
	char c;
	cin>>c;
	if( c >= '0' && c <= '9')
		cout<<"\n ������������� :"<<c-48<<endl;
	else
		cout<<"\n ���������ַ���ASCII���ǣ�"<<(int)c<<endl;
}