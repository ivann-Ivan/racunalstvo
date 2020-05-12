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
	cout<<"Ovo je program koji ispisuje brojeve po vasoj zelji sve dok ne upisete 1 i mijenja redoslijed borjeva na taj nacin da manji ide na lijevu stranu."<<endl;
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
	bool zamjena = true;
	cout<<"Brojevi od najmanjeg do najveceg:"<<endl;
	cout<<endl;
	for (x=0; zamjena; x++)
	{
		zamjena = false;
		for (y=0; y<V.size()-x-1; y++)
		{
			if (V[y]>V[y+1])
			{
				swap(V[y], V[y+1]); 
           		zamjena = true;
			}
		}
	}
	for (x=0; x<V.size(); x++)
	{
		cout<<V[x]<<endl;
	}
	return 0;
}
