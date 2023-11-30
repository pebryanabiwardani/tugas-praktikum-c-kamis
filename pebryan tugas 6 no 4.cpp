#include <stdio.h>
#include <conio.h>
int main()
{
	float V,S,T;
	printf("masukan kecepatan kendaraan=");
	scanf ("%f",&V);
	printf( "masukan waktu tempuh=");
	scanf("%f",&T);
	S=V*T;
	printf ("maka jarak yang ditempuh adalah=%f",S);
	return 0;	
}

