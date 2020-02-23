#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main() 
{
	string R;
	int x;
	int a=0;
	int b=0;
	cout<<"Ovo je program koji æe analizirati rijec ili recenicu po vasem izboru."<<endl;
	cout<<"Unesite neku recenicu ili rijec:"<<endl;
	getline (cin,R);
	cout<<"Simboli zadane recenice ili rijeci su:"<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		cout<<"R["<<x<<"] = "<<R[x]<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		if (isalpha(R[x]))
		{
			a++;
		}
		if (isdigit(R[x]))
		{
			b++;
		}
	}
	cout<<"U ovoj recenici ima: "<<a<<" slovo/va."<<endl;
	cout<<"U ovoj recenici ima: "<<b<<" broj/ja/jeva."<<endl;
	return 0;
}
