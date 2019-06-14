#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int n,cont,fib,fib1,fib2,negado,retorno;
	do //punto de retorno
	{
	printf("dame un numero\n");
	scanf("%i",&n);
	fib=0;
	fib1=0;
	fib2=1;
	negado=fib1;
	for(cont=0;cont<=n;cont=cont+1)  
	{
	if(cont==0)    
		{
			fib=0;
		}
	else if(cont==1)          
		{
			fib=1;
		}
	if(cont>1)
		{
			fib=fib1+fib2;             
			fib1=fib2;
			fib2=fib;
		if(fib2>=5)                  
		{
			negado=fib1;
			while((negado<(fib2-1))&&((fib2-1)<=n))   
			{
				++negado;
				printf("%i\t",negado);
			}
		}
		}
	}
	system("pause");
	printf("si usted quiere salir del programa inserte '1' de lo contrario inserte cualquier otro caracter... ");
	scanf("%i",&retorno);
	}
	while(!(retorno==1));
	
}
