#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	char x[100];
	char y[100];
	int i;
	cout<<"Ovo je program koji usporeduje dva znakovna niza po vasem izboru u kojem se ne obaziraju velika i mala slova."<<endl;
	cout<<"Unesite prvi niz:"<<endl;
	cin>>x;
	cout<<"Unesite drugi niz:"<<endl;
	cin>>y;
	strlwr(x);
	strlwr(y);
	cout<<"prvi: "<<x<<endl;
	cout<<"drugi: "<<y<<endl;
	if (strlen(x)==strlen(y))
	{
		cout<<"Jednake su duljine."<<endl;
		
	}
	else {
		cout<<"Nisu jednake duljine."<<endl;
	}
	
	for (i=0;x[i]!='\0';i++)
	{
		y[i]!='\0';
		if (x[i]!=y[i])
		{
			cout<<"Razliciti su."<<endl;
		}
		else
		{
			cout<<"Isti su."<<endl;
		}
	}
	return 0;
}
