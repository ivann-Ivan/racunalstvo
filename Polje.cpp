#include <cstdlib>
#include <iostream>

using namespace std;

int main() 
{
	double niz[10]={0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	double *x;
	int n;
	int a;
	x=niz;
	cout<<"Ovo je program koji izdaje sljedece informacije o polju."<<endl;
	cout<<"Ovo polje zauzima: "<<(niz, sizeof(double))<<" Byte-a."<<endl;
	n= sizeof(niz) / sizeof(niz[0]);
	cout<<"Zadana clanovi polja su:"<<endl;
	for (a=0; a<n; a++)
	{
		cout<<"niz["<<a<<"] = "<<niz[a]<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Prvi element polja i njegova adresa:"<<endl;
	cout<<niz[0]<<endl;
	cout<<&niz[0]<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Cetvrti element polja i njegova adresa:"<<endl;
	cout<<niz[3]<<endl;
	cout<<&niz[3]<<endl;
	cout<<"x+3= "<<x+3<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Adrese svih elemenata:"<<endl;
	for (a=0; a<n; a++)
	{
		
		cout<<"niz["<<a<<"] = "<<&niz[a]<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Drugi nacin zapisa clanova polja:"<<endl;
	for (a=0; a<n; a++)
	{
		cout<<"*(x+"<<a<<") = "<<*(x+a)<<endl;
	}	
	return 0;
}
