#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	float a;
	a=6.8;
	float *pa=&a;
	float b;
	b=7.9;
	float *pb=&b;
	float c;
	cout<<"Ovo jep program koji zbraja dva broja i ispisuje adrese dvaju pribrojnika i zbroja."<<endl;
	cout<<"Prvi broj i adresa:"<<endl;
	cout<<a<<endl;
	cout<<*pa<<endl;
	cout<<pa<<endl;
	cout<<"Drugi broj i adresa:"<<endl;
	cout<<b<<endl;
	cout<<*pb<<endl;
	cout<<pb<<endl;
	c=a+b;
	cout<<"Zbroj i njegova adresa:"<<endl;
	cout<<c<<endl;
	cout<<&c<<endl;
	return 0;
}
