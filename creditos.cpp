
#include <iostream>
#include <math.h>
#include<cmath>
#include<stdlib.h>


int main()
{
   // VARIBLES
   int opcion,deuda,mes,interes,x,pago,p
  
  printf("1.-ingreasa total de deuda \n\n ");
  scanf("%i", &deuda);
  printf("2.- Tiempo en MES a pagar: ");
  scanf("%i", &mes);
  
  
  printf("3.- Interes\n\n ");
  printf("4.- Cuantos pago\n\n ");
  printf("5.- Salir\n\n ");
  
printf( "\n\n   Introduzca opcion  (1-): " );

    scanf("%i",&opcion);
	
   switch ( opcion )
   {
      case 1 : printf( "\n ingresa tu deuda:  \n   " );
               scanf("%i", &deuda);      		
      	      printf("total: %d",deuda);
      
	         
      case 2 : printf( "\n meses:  ");
               scanf("%i",&mes);
               printf("meses: %d",(mes/deuda));
      
	           
      case 3 : printf( "\n   intereses. " );
               scanf("%d", &interes);
               
               x=(interes/mes)*100;               
               printf("el interes que se te va a cobrar\n : %d", x);
               
               
               
      case 4 : printf( "\n  cuantos pagos: " );
               scanf("%i", &pago);      
               p=(deuda/mes);
       
               printf("pagos de:%d", p);
      
      
               
      case 5 : printf( "\n  temino el programa" );
               break;
   default : printf( "\n   ERROR: ." );
   }

   return 0;
}
