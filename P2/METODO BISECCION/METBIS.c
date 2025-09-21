#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>



void main (){

float xr[100];
float xa[100];
float xb[100];
float fx[20];
float fxr[100];
float fxa[100];
float fxart[100];
float ep[100];
float ers;
int i;
int j=-1;

printf("\t\t\tMETODO DE BISECCION O INTERVALO MEDIO \n\n");

printf("La funcion por defecto es x^4 +3x^3 -2\n\n");
do{
printf("Ingrese el procentaje de error deseado: \n\n");

scanf("%f",&ers);
}while(ers<0);
printf("X \t\t  F(X)\n\n");
for(i=-5; i<=5; i++){
    j=j+1;
    fx[j]=pow(i,4)+3*pow(i,3)-2;
    printf("%d \t\t %.2f\n\n",i,fx[j]);
    if(fx[j]>0 && fx[j+1]<0 || fx[j]<0 && fx[j+1]>0){
            xa[0]=i;
            xb[0]=i+1;


    }





}
    printf("Xa[0] = %.2f\n\n",xa[0]);
    printf("Xb[0] = %.2f\n\n",xb[0]);



    for(i=0;i<100;i++){
        xr[i]= ((xa[0]+xb[0])/2);


        fxr[i]= pow(xr[i],4) +3*pow(xr[i],3) -2;
        fxa[i] = pow(xa[i],4) +3*pow(xr[i],3) -2;

        printf("Calculando");
        Sleep(900);
        printf(".");
        Sleep(900);
        printf(".");
        Sleep(900);
        printf(".\n\n");
        printf("\n\n-----------------------------------------\n\n");

        printf("Ejecucion # %d\n\n",i+1);

        Sleep(850);

        printf("Xr  =  %.6f\n\n",xr[i]);
        printf("Xa  =  %.6f\n\n",xa[0]);
        printf("Xb  =  %.6f\n\n",xb[0]);
        printf("F(Xr) = %.6f\n\n",fxr[i]);
        printf("F(Xa) = %.6f\n\n",fxa[i]);
        fxart[i]=fxr[i]*fxa[i];
        printf("F(Xa) * F(Xr) =  %.6f\n\n",fxart[i]);
        if(fxart[i]>0){

            xa[0]=xr[i];
        }
        else
        {

            xb[0]=xr[i];
        }

        if(i>0){

            ep[i]=(xr[i]-xr[i-1])/xr[i]*100;
            printf("Porcentaje de error = %.2f\n\n",ep[i]);
            if(ep[i]<=ers){

                printf("Ha llegado a un porcentaje menor o igual al indicado. \n\n");

                i=100;
            }


        }





    }
    system("pause\n\n");
    system("G1.exe");
























}
