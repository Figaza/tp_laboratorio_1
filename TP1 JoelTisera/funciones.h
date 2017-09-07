#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief suma el numero 1 con el numero 2
 *
 * \param primer valor de tipo flotante
 * \param segundo valor de tipo flotante
 * \return el valor que da la suma con tipo flotante
 *
 */
float suma(float x, float y);
/** \brief resta el numero 1 y el numero 2
 *
 * \param primer valor de tipo flotante
 * \param segundo valor de tipo flotante
 * \return el resultado de la resta de ambos numeros
 *
 */
float resta(float x, float y);
/** \brief divide el primer numero con el segundo y verifica que el divisor no sea 0. Luego muestra el resultado
 *
 * \param valor del dividendo de tipo flotante
 * \param valor del divisor de tipo flotante
 * \return el resultado de la division con tipo flotante
 *
 */
float division(float x, float y);
/** \brief multiplica el primer numero con el segundo
 *
 * \param primer valor de tipo flotante
 * \param segundo valor de tipo flotante
 * \return el resultado de la multiplicacion con tipo flotante
 *
 */
float multiplicacion(float x, float y);
/** \brief Calcula el factorial del primer numero (siempre y cuando sea entero positivo) y lo muestra.
 *
 * \param valor de tipo flotante
 * \return el factorial del numero ingresado.
 *
 */
long long int factorizacion(float x);

#endif // FUNCIONES_H_INCLUDED
