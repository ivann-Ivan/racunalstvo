#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int x;
	char R[] ={"Danas si lipa kao ruza."} ;
	char *z;
	z=R;
	cout<<"Ovo je program koji ce analizirati recenicu po vasoj zelji."<<endl;
	cout<<"Znakovi u ovoj recenici su:"<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		cout<<"R["<<x<<"] = "<<R[x]<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Adrese svakog znaka su:"<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		cout<<"R["<<x<<"] = "<<&R[x]<<endl;
	}
	return 0;
}
