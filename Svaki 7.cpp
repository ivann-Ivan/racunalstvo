#include <cstdlib>
#include <iostream>

using namespace std;

// Od nula od 1000 s korakom 7.

int main() 
{
	int a;
	cout<<"Svaki sedmi broj do 1000."<<endl;
	for (a=0; a<1000; a+=7)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}
