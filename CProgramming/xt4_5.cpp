#include <iostream.h>
void main()
{
	int f,m,n,k;
	cout<<"1��99֮���ͬ�����У�"<<endl;
	for( n = 1,k=0; n<100; n++)
	{
		f = 0;
		m = n*n;
		if( m%10 == n || m%100 == n)
		{
				k++;
				cout<<"\t"<<n;
		}
		if( k%5 == 0)
			cout<<endl;
	}
	if( k%5 != 0)
		cout<<endl;
}
		
