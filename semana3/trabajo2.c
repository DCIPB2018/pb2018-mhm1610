/*Programa creado el 24 de agosto 2018 por Mariana Herrera*/
#include<stdio.h>

 

int  main()

{

int numero1, numero2;

printf("Introduzca dos numeros enteros: \n");

scanf("%i %i", &numero1, &numero2);

 

if(numero1==numero2)

{

printf("Resultado; %d",numero1,numero2);

}

else if (numero1> numero2)

{

printf("Resultado: %d > %d", numero1,numero2);

}

else

{

printf("Result: %d < %d",numero1, numero2);

}

return 0;

}
