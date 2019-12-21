#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	int niz[3]={8,6,4},*pn;
	pn=niz;
	pn++;
	cout<<*(pn++);    // ispisat ce 6
	return 0;
}
