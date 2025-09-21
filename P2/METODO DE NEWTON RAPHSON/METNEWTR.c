#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>



void main(){

    float fx[100];

    float xnr[100];
    int i=0;

    char resp;


    printf("\t\t\tMETODO NEWTON RAPHSON\n\n\n");
    printf("La funcion por defecto es x^3-10x-5\n\n");
    printf("La derivada de esta funcion es 3x^2-10\n\n");
    system("pause");
    printf("\n\n");
    printf("X \t\t F(X)\n\n");
    for(i=-10;i<=10;i++){
            fx[i]=pow(i,3) - 10*i -5;
            printf("%d \t\t %.2f\n",i,fx[i]);







    }

    Sleep(700);

        xnr[0]=3;




    printf("\n\n");
    printf("El valor encontrado de X[1] = 3 \n\n");
    printf("Desea cambiarlo S/N?\n\n");
    scanf("%c",&resp);
    if(resp=='s' || resp=='S'){
        printf("Ingrese el nuevo valor de X[1] =\n\n");
        scanf("%f",&xnr[0]);
    }

    printf("\n\nX[1] = %.2f\n\n",xnr[0]);

    for(i=1; i<100; i++){

         printf("Calculando");
         Sleep(900);
         printf(".");
         Sleep(900);
         printf(".");
         Sleep(900);
         printf(".\n\n");


        printf("\n\n-------------------------------------------\n\n");
        printf("Ejecucion # %d\n\n",i);

        xnr[i]=xnr[i-1]-((pow(xnr[i-1],3)-10*xnr[i-1]-5)/(3*pow(xnr[i-1],2)-10));
        printf("X%d = %.6f\n\n",i+1,xnr[i]);
        if(xnr[i]-xnr[i-1]<-0.0001 || xnr[i]-xnr[i-1]<0.0001){
            printf("Raiz encontrada \n\n");
            system("pause");
            system("G2.exe");
            i=100;



                }










        }





    }


























