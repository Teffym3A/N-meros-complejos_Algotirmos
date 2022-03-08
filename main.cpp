/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
int main()
{
	int xo,x1,xs; /*xs=semilla, xo=valor anterior al que se quiere generar, 
	x1=número siguiente que va a ser generado */
	int a,b,m; /*a=cte multiplicador, c=cte incremento, m=módulo */
	int i,n; /*i para el loop, n cantidad mínima de valores a generar */
	int array[50]; /*para almacenar los valores obtenidos */
	int Periodo = 0; /*Para llevar cuenta del periodo de cada configuracion */
	
	printf("A continuación, el usuario deberá ingresar 4 valores, los cúales serán necesarios para la generación de números aleatorios.\n");
	printf("Estos datos serán la semilla, el multiplicador, el incremento y el módulo.\n");
	printf("Para obtener valores diferentes, es necesario que el módulo sea mayor que los otros valores.\n");
	
	printf("Ingresa el valor de la semilla xo: ");
	scanf("%d",&xs);
	printf("\n");
	
	printf("Ingresa el valor del multiplicador a: ");
	scanf("%d",&a);
	printf("\n");
	
	printf("Ingresa el valor del incremento c: ");
	scanf("%d",&b);
	printf("\n");	
	 
	printf("Ingrese el valor del módulo m: ");
	scanf("%d",&m);
	printf("\n");
	
	printf("Ingrese una cantidad mínima de números a generar: ");
	scanf("%d",&n);
	printf("\n");	
	
    xo=xs; /*definimos xo=xs para que el primer número con 
    el que se genera los siguientes sea el de la semilla*/
    
	for(i=0;i<n;i++) /* loop para generar los números */
	{
		x1=(a*xo+b) %m; /*Forma recursiva para obtener los números aleatorios*/
		
	    if (x1 != xs){   
		array[i]=x1;
		xo=x1;
		Periodo=Periodo + 1;    /*De esta manera llevamos un conteo del Periodo*/
	    } else{                 /*Si el valor obtenido es igual al de la semilla, deja de generar números*/
	        array[i]=x1;
	        break;
	    }
	}
	
	
	printf("Los números generados son: ");
	for(i=0;i<Periodo+1;i++)
	{
		printf("%d\n",array[i]);        /*Se muestran los números generados*/
		/*printf("%d", Periodo);*/
		printf("\t");
	}
	if (Periodo==n){    /*Si el pedidoeriodo es mayor que el número pedido de datos a generar, se pide 
	ingresar un valor mayor, para de esta manera poder hallar el periodo*/
	    printf("Aún no se cúal es el periodo, ingresa un valor mayor a la cantidad de números a generar.");
	} else {
	    printf("Tu periodo es de: %d\n", Periodo); /*de lo contrario, se muestra el periodo obtenido*/
	}
	
	getch();
	return(0);
	
}
