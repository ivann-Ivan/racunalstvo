#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	int x[8] = { 8, 7, 6, 5, 4, 3, 2, 1};
	int* p;
	p = &x[4];
	cout << *(p+1) << *p-1 << *(p-1)<< *(p-1)+1 << endl;     // ispisat ce  3356
	p--;
	cout << *(p+1) << *p-1 << *(p-1) << *(p-1)+1 << endl;    // ispisat ce 4467
	return 0;
}
