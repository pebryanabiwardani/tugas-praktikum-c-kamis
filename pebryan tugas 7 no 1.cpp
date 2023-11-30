#include <iostream>
using namespace std;
int main()
{
	int i,nilai[10];
	for(i=1; i<=10; i++)
	{
		cout<<"nilai mahasiswa ke-" <<i<<":";
		cin>>nilai[i];\
	}
	cout<<"daftar mahasiswa yang lulus \n";
	for(i=1; i<=10; i++)
	{
		if(nilai[i]>=68)
		cout<<"mahasiswa yang ke-"<<i<<"dengan nilai"<<nilai[i]<<endl;
	}
}
