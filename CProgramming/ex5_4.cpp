#include <iostream.h>
void main()
{
	//��1^2+2^2+3^2+...+100^2
	int n = 1;
	long s = 0;
	while( n <= 100)
	{
		s += n*n;
		n++;
	}
	cout<<"1^2+2^2+3^2+...+100^2="<<s<<endl;

	//��n!
	double t = 1.0;
	int i = 1;
	cout<<"Please enter an Integer: ";
	cin>>n;
	while(i<=n)
	{
		t = t*i;
		i++;
	}
	cout<<"n!="<<t<<endl;
}
	