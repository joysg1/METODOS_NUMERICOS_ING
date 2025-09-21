#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>



void main (){

    float xi[200];
    int i=0;
    float xu =0.0;

    float porus=0.0;
    float por[200];


    printf("\t\t\tMETODO DE APROXIMACIONES SUCESIVAS \n\n\n");
    printf("La funcion por defecto es 2[sen(Xi)^1/2] \n\n\n");
    printf("Ingrese el valor inicial de xi: \n\n");
    scanf("%f",&xu);
    printf("\n\n");

    do{
    printf("Ingrese el porcentaje de error tope: \n\n");
    scanf("%f",&porus);
    }while(porus<0);
    printf("\n\n");


    printf("\n\n");
    system("pause");
    printf("\n\n");
    printf("Calculando");
    Sleep(600);
    printf(".");
    Sleep(600);
    printf(".");
    Sleep(600);
    printf(".\n\n");




    xi[0]=xu;
    printf("Valor de x0 = \t %.9f\n\n",xi[0]);
    printf("\n\n");
    for(i=1; i<200; i++){
            printf("Calculando");
            Sleep(900);
            printf(".");
            Sleep(900);
            printf(".");
            Sleep(900);
            printf(".\n\n");

            xi[i]=2*sin(sqrt(xi[i-1]));
            printf("Valor de x%d = \t %.9f \n\n",i,xi[i]);
            por[i]=((xi[i]-xi[i-1])/xi[i])*100;
            printf("Porcentaje de error: %.9f \n\n",por[i]);
            printf("---------------------------------------------\n\n");


            if(por[i]<=porus){
                printf("Ha alcanzado un porcentaje de error menor o igual al indicado \n\n");
                printf("Aproximacion culminada con exito. \n\n");


                i=200;
            }

    }

            printf("\n\n");
            printf("COMPROBACION POR SECANTE \n\n");

            for(i=1;i<200; i++){

            printf("Calculando");
            Sleep(900);
            printf(".");
            Sleep(900);
            printf(".");
            Sleep(900);
            printf(".\n\n");
            xi[i]=xi[i-1]-((2*sin(sqrt(xi[i-1]))*(0.5-2.50))/(2*sin(sqrt(0.50))-sin(2*sqrt(2.50))));
            printf("Valor de x%d = \t %.9f \n\n",i,xi[i]);
            if(abs(xi[i-1]-xi[i])<=0.00001){
               printf("Diferencia entre xi-1 y xi minima\n\n");
                i=200;
            }









            }











    }















