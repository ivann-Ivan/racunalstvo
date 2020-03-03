#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string R ("Lipa si ko ruza.");
	int x;
	string R2="ruza";
	cout<<"Ovo je program koji zadanoj recenici daje novu rijec."<<endl;
	x=R.find (R2);
	R.replace (x, 4, "cvijet");
	cout<<"Nova recenica glasi: "<<R<<endl;
	return 0;
}
