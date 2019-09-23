#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	float a;
	cout<<"Unesite kolika je danasnja temperatura."<<endl;
	cin>>a;
	
	if (a>24.5)
	{
		cout<<"Danas je toplo."<<endl;
	}
	else
	{
		cout<<"Danas je hladno."<<endl;
	}
	return 0;
}
