#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	float z;
	float r;
	int i;
	int a;
	vector<int> primjer;
	vector<int> primjer_2;
	int x;
	int y;
	cout<<"Ovo je program koji radi analizu programskog vektora."<<endl;
	cout<<"Unesi broj elemenata za prvi vektora: "<<endl;
	cin>>z;
	while (z!=int(z) || (z<=0))
	{
		cout<<"Mora biti cijeli broj veci od nule."<<endl;
		cout<<"Pokusaj ponovno."<<endl;
		cin>>z;
	}
	cout<<"Unesite elemente vektora:"<<endl;
	for (i=0; i<z; i++)
	{
		cin>>x;
		primjer.push_back(x);
	}
	cout<<"Elementi vektora su: "<<endl;
	for (i=0; i<z; i++)
	{
		cout<<i<<". "<<primjer[i]<<endl;	
	}
	cout<<endl;
	cout<<endl;
	if (primjer.empty())
	{
		cout<<"Vektor je prazan."<<endl;
			cout<<"Elementi praznog vektora su: "<<endl;
			for (i=0; i<z; i++)
			{
				cout<<i<<". "<<primjer[i]<<endl;	
			}
	}
	else 
	{
		cout<<"Vektor nije prazan."<<endl;
		cout<<"Praznim vektor."<<endl;
	//	cout<<primjer.size()<<endl;
		primjer.clear();
	//	cout<<primjer.size()<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Unesi broj elemenata za drugi vektor: "<<endl;
	cin>>r;
	while (r!=int(r) || (r<=0))
	{
		cout<<"Mora biti cijeli broj veci od nule."<<endl;
		cout<<"Pokusaj ponovno."<<endl;
		cin>>r;
	}
	cout<<"Unesite elemente vektora:"<<endl;
	for (a=0; a<r; a++)
	{
		cin>>y;
		primjer_2.push_back(y);
	}
	cout<<"Brojeve koje ste unjeli su: "<<endl;
	for (a=0; a<r; a++)
	{
		cout<<a<<". "<<primjer_2[a]<<endl;	
	}
	if (primjer!=primjer_2)
	{
		cout<<"Vektori su razliciti."<<endl;
	}
	else
	{
		cout<<"Vektori su isti."<<endl;
	}
	primjer=primjer_2;
	if (primjer!=primjer_2)
	{
		cout<<"Vektori su razliciti."<<endl;
	}
	else
	{
		cout<<"Vektori su isti."<<endl;
	}
	return 0;
}
