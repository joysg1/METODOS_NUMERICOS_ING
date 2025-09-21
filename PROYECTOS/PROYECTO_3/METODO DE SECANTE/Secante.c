#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>



void main () {

    float fx[5];
    int i=0;
    float e=2.718281828;
    float xr[40];
    float por[40];

    printf("\t\t\t METODO DE LA SECANTE \n\n\n");
    printf("La funcion por defecto es: e^-x -x\n\n\n");
    printf("--------------------------------------------\n\n\n");
    system("pause");
    printf("\n\n");
    printf("\t\t\tTabla de valores\n\n");
    printf("X \t\t  F(X)\n\n");
    for(i=0; i<5; i++){
        fx[i]= pow(e,-i) - i;
        Sleep(900);
        printf("%d \t\t %.5f\n\n",i,fx[i]);
    }

    xr[0]=0;
    xr[1]=1;

    printf("X[0] = 0\n\n");
    printf("X[1] = 1\n\n");

    system("pause");

    for(i=2; i<40; i++){
            printf("Calculando");
            Sleep(700);
            printf(".");
            Sleep(700);
            printf(".");
            Sleep(700);
            printf(".\n\n");
            printf("----------------------\n\n");

            xr[i]= xr[i-1] - (((pow(e,-xr[i-1]) -xr[i-1])*((xr[i-2]) -(xr[i-1])) ) / ( (pow(e,-xr[i-2]) -xr[i-2]) - (pow(e,-xr[i-1]) -xr[i-1])));
            if (i>=3){
            por[i]=(xr[i]/xr[i-1]) *100;
            }
            printf("X[%d] = \t %.5f\n\n",i,xr[i]);
            printf("Porcentaje de exactitud = %.0f\n\n",por[i]);
            if(por[i]>=99){
                printf("Raiz encontrada \n\n");
                i=40;

            }

           }







    }














