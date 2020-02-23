#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	char x[100];
	char y[100];
	cout<<"Ovo je program koji usporeduje dva znakovna niza po vasem izboru u kojem se ne obaziraju velika i mala slova."<<endl;
	cout<<"Unesite prvi niz:"<<endl;
	cin>>x;
	cout<<"Unesite drugi niz:"<<endl;
	cin>>y;
	strlwr(x);
	strlwr(y);
	cout<<"prvi: "<<x<<endl;
	cout<<"drugi: "<<y<<endl;
	if (strlwr(x)!=strlwr(y))
	{
		cout<<"Nisu jednaki."<<endl;
		
	}
	else {
		cout<<"Jednaki su."<<endl;
	}
	
	
	return 0;
}
