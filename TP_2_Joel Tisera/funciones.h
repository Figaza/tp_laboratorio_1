#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;

/** \brief inicializa todos los estados en 0.
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array .
 *
 */

void inicializarEstados(ePersona[], int);
/**
 * Obtiene el primer indice libre del array.
 * \param el array de personas se pasa como parametro.
 * \param tamaño maximo del array.
 * \return el primer indice disponible.
 */
int obtenerEspacioLibre(ePersona lista[], int);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * \param el array de personas se pasa como parametro.
 * \param dni el dni a ser buscado en el array.
 * \param el tamaño maximo del array.
 * \return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], int, int);

/** \brief agrega una persona.
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void agregarPersona(ePersona[], int);

/** \brief Muestra una persona.
 *
 * \param la persona se pasa como parametro.
 *
 */
void mostrarUnaPersona(ePersona);
/** \brief Muestra la lista de personas.
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void mostrarListaDePersonas(ePersona[], int);
/** \brief Elimina una persona.
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void borrarPersona(ePersona[], int);
/** \brief Ordena alfabeticamente la lista de personas.
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void ordenarAlfabeticamente(ePersona[], int);
/** \brief Hace un grafico de barras con asteriscos segun las edades de las personas
 *
 * \param el array de personas se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void graficoDeBarras(ePersona[], int);

#endif // FUNCIONES_H_INCLUDED
