#include "stdio.h"
#include "math.h"
#include "iostream"

main()
{
	int n=0, i=0,num[50], menor=0, medio=0, mayor=0, total=0;

	printf ("Dame el numero de datos\n");
	scanf ("%d", &n);
	
	
	//Leer
	for(i=0; i<n; i++)
	{
	printf ("El %d numero es: ", i+1);
	scanf ("%d", &num[i]);
	}
	
	//Procedimiento
	for(i=0; i<n; i++)
	if (num[i]>=mayor)
	mayor= num[i];
	{
	    for(i=0; i<n; i++)
	    {
	    if (num[i]>=medio && num[i]<mayor)
	    medio= num[i];
	    {
	        for(i=0; i<n; i++)
	        {
	        if (num[i]>=menor && num[i]<medio && num[i]<mayor)
	        menor= num[i];
        	}
        	}
        	}
        	}
        	
        	
    for(i=0; i<n; i++)
	{
	if (num[i]==mayor or num[i]==medio or num[i]==menor)
	total=total+1;
	}
	
	//Imprimir 
	printf ("---- Los resultados se empezarán a escribir ----- \n");
	printf ("%d, %d, %d\n", menor, medio, mayor);
	printf ("%d\n", total);
	
}




