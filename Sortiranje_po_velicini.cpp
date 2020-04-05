#include <cstdlib>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() 

{
	vector<int> RT;
	float y;
	int x=0;
	cout<<"Ovo je program koji ispisuje brojeve sve dok ne unesete nulu i ispisuje kapacitet."<<endl;
	cout<<"Unesi neki broj:"<<endl;
	cin>>y;
	cout<<endl;
	while ((y!=0))
	{
		if (y!=int(y))
		{
			cout<<"Unesi ponovno cijeli broj."<<endl;
			cin>>y;
		}
		else
		{
			cout<<"Unesi ponovno dok nebude nula."<<endl;
			RT.push_back(y);
			cin>>y;
		}
 	}
 	RT.push_back(y);
 	cout<<endl;
	cout<<"Vasi brojevi su:"<<endl;
	cout<<endl;
	for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
	{
		cout<<*it<<" ";
		if (RT.size())
		{
			x++;
		}
		
	}
	cout<<"U ovom vektoru ima: "<<x<<" broj/a/eva."<<endl;
	cout<<"Kapacitet ovih brojeva je: "<<RT.capacity()<<" ."<<endl;
	cout<<"Nakon sortiranja, brojevi izgledaju ovako:"<<endl;
	sort (RT.begin(), RT.end());
	for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
