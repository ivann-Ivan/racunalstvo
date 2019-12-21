#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	float niz[5]={1,2,3,4,5},*pn;
	pn=niz;
	cout<<*(pn+3);   //ispisat ce broj 4
	return 0;
}
