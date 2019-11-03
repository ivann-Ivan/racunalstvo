#include <cstdlib>
#include <iostream>

using namespace std;

int main() 

{
	
	float N; 
	int x;
	int D=0;
	cout<<"Pozdrav. Ovo je program koji ispisuje clanove polja i zbraja ih."<<endl;
	cout <<"Unesi cijeli broj izmedju 0 i 10!"<<endl;
	cin>>N;

	while (N!=int(N))
		{
	
		cout<<"Broj mora biti cijeli."<<endl;
		cin>>N;
	
		}
	while (N<=0 || N>10)
		{
	
		cout<<"Broj mora biti izmedju 0 i 10."<<endl;
		cin>>N;
	
		}		
	int M=N;
	int Z[M];   		
	
	for (x=0; x<M; x++)
	
		{
		
			cout<<"Unesi Z["<<x<<"] clan: ";
			cin>>Z[x];	
		}	
	cout<<"Uneseni clanovi su: "<<endl;
	for (x=0; x<M;x++)
		{
			cout<<Z[x]<<endl;
			D=D+Z[x];
		}	
	cout<<"Zbroj svih clanova je: "<<D<<"."<<endl;
	return 0;
}
