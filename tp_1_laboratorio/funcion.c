#include "funcion.h"
/** \brief realiza una suma
 *
 * \param recibe dos numeros flotantes para sumarlos
 * \param
 * \return la suma de dos numeros
 *
 */

float suma(float numero1,float numero2)
{
  return (numero1 + numero2);
}
/** \brief realiza una resta
 *
 * \param recibe dos numeros flotantes para restarlos
 * \param
 * \return la resta de dos numeros
 *
 */


float resta(float numero1,float numero2)
{
    return(numero1-numero2);
}
/** \brief realiza una multiplicacion
 *
 * \param recibe dos numeros flotante para ser multiplicados
 * \param
 * \return la multiplicacion de dos numeros
 *
 */


float multiplicacion(float numero1,float numero2)
{
      return(numero1*numero2);
}

/** \brief realiza una division
 *
 * \param recibe dos numeros flotantes para ser divididos
 * \param
 * \return la division de dos numeros
 *
 */

float division (float numero1, float numero2){
    float resultado;
    if(numero2 == 0)
    {
        printf("\n El numero divisor  no puede ser 0.Por favor vuelva a ingresar los numeros\n\n");
        system("pause");
        system("cls");
    }
    else
    {
        resultado = numero1 / numero2;
    }
    return resultado;
}

/** \brief factoriza un numero
 *
 * \param recibe un numero entero para factorizar
 * \param
 * \return la factorizacion del numero
 *
 */

int factorial(int numero)
{
    int i,aux_fact=1;

    for(i=1 ; i<= numero ; i++)
    {
        aux_fact *=i;
    }
    return aux_fact;

}

