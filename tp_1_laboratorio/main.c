#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{
    //declaracion de variables
    char seguir='s';
    int opcion=0;
    float num1=0,num2=0,resultado;
    int numeroFact=0,resultadoFact=0;

    while(seguir=='s')
    {
        printf("         ********** Menu **********\n\n");

        printf("1- Pulsar numero 1 para ingresar 1er operando: %.2f\n\n",num1);
        printf("2- Pulsar numero 2 para ingresar 2do operando: %.2f\n\n",num2);
        printf("3- Pulsar numero 3 para calcular la suma\n\n");
        printf("4- Pulsar numero 4 para calcular la resta\n\n");
        printf("5- Pulsar numero 5 para calcular la division\n\n");
        printf("6- Pulsar numero 6 para calcular la multiplicacion\n\n");
        printf("7- Pulsar numero 7 para ingresar numero para calcular el factorial:\n\n");
        printf("8- Pulsar numero 8 para calcular todas las operacione\n\n");
        printf("9- Pulsar numero 9 para Salir\n\n");

        scanf("%d",&opcion);
        if(opcion < 1 || opcion > 9)
        {
            printf("opcion invalida\n\n");
            system("pause");
            system("cls");
        }

        switch(opcion)
        {

        case 1:
            printf("ingrese 1er operando:\n");
            scanf("%f",&num1);
            system("pause");
            system("cls");

            break;
        case 2:
            printf("ingrese 2do operando:\n");
            scanf("%f",&num2);
            system("pause");
            system("cls");


            break;
        case 3:
            resultado=suma(num1,num2);
            printf("La suma de %.2f + %.2f= %.2f\n\n", num1, num2,resultado);
            system("pause");
            system("cls");

            break;
        case 4:
            resultado=resta(num1,num2);
            printf("la resta de %.2f - %.2f = %.2f\n ",num1,num2,resultado);
            system("pause");
            system("cls");


            break;
        case 5:
            resultado=division(num1,num2);

            if(num2!= 0)
            {
                printf("la division de %.2f / %.2f = %.2f\n ",num1,num2,resultado);
                system("pause");
                system("cls");
            }
            break;

        case 6:
            resultado=multiplicacion(num1,num2);
            printf("la multiplicacion de %.2f * %.2f = %.2f\n ",num1,num2,resultado);
            system("pause");
            system("cls");


            break;
        case 7:
            printf("ingrese el numero para calcular el factorial\n");
            scanf("%d",&numeroFact);
            resultadoFact=factorial(numeroFact);
            printf("El factorial de %d = %d\n ",numeroFact,resultadoFact);
            system("pause");
            system("cls");
            break;
        case 8:
            resultado=suma(num1,num2);
            printf("la suma de %.2f + %.2f = %.2f\n\n",num1,num2,resultado);
            resultado=resta(num1,num2);
            printf("la resta de %.2f - %.2f = %.2f\n\n",num1,num2,resultado);
            resultado=division(num1,num2);
            printf("la division de %.2f / %.2f = %.2f\n\n",num1,num2,resultado);
            resultado=multiplicacion(num1,num2);
            printf("la multiplicacion de %.2f * %.2f = %.2f\n\n",num1,num2,resultado);
            resultadoFact=factorial(numeroFact);
            printf("El factorial de %d = %d\n\n",numeroFact,resultadoFact);
            system("pause");
            system("cls");

            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;
}


