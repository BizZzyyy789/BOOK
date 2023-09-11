#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"A : "; cin >> a;
	cout<<"B : "; cin >> b;
	if(a>b)
	{
		cout<<"A";
	}
	else{

    	if(a<b)
		{
			cout<<"B";
		}
		else {
			cout<<"A=B";
		}

	}
	return 0;
}