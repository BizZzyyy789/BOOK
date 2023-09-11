#include <iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"A : "; cin >> a;
	cout<<"B : "; cin >> b;
	cout<<"C : "; cin >> c;
	if(a>b)
	{
		if(a>c)
		{
			max = a;
		}
		else {
			max = c;
		}
	}
	else {
		if(b>a)
		{
			if(b>c)
			{
				max = b;
			}
		}
		else {
			max = c;
		}
	}
	cout<<"Max : "<<max<<endl;
	return 0;
}