#include <iostream>
using namespace std;
int main()
{
	int a,b,c,l;
	cin>>l;
	while(l!=0)
	{
		cin>>a>>b;
		c=a%b;
		cout<<c<<endl;
		l--;
	}
}