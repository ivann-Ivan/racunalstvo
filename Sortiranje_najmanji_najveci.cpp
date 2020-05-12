#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	float a;
	int x;
	int y;
	vector <float> V;
	int min;
	cout<<"Ovo je program koji ispisuje brojeve po vasoj zelji sve dok ne upisete 1 i ispiuje ih od najmanjeg do najveceg."<<endl;
	cout<<"Unesite neki broj:"<<endl;
	cin>>a;
	while (a!=1)
	{
		cout<<"Unesite ponovno dok ne unesete 1."<<endl;
		V.push_back(a);
		cin>>a;
		
	}
	V.push_back(a);
	cout<<endl;
	cout<<"Vasi brojevi su:"<<endl;
	cout<<endl;
	for (x=0; x<V.size(); x++)
	{
		cout<<V[x]<<endl;
	}
	cout<<"Brojevi od najmanjeg do najveceg:"<<endl;
	cout<<endl;
	for (x=0; x<V.size(); x++)
	{
		min=x;
		for (y=x+1; y<V.size(); y++)
		{
			if (V[y]<V[min])
			{
				min=y;
			}
		}
		float tren;
		tren=V[x];
		V[x] = V[min];
		V[min] = tren;
	}
	for (x=0; x<V.size(); x++)
	{
		cout<<V[x]<<endl;
	}
	return 0;
}
