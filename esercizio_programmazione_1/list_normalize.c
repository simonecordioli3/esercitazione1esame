#include "list_normalize.h"

/**
 * Trova il minimo valore nella lista concatenata
 * @param [in] head puntatore alla testa della lista (la lista non deve essere modificata)
 * @param [out] min valore minimo calcolato dalla funzione
 * @return true se il minimo è stato trovato, false se non è possibile trovare il minimo (la lista è vuota)
**/
bool min_data_list(struct Node *head, double* min)
{
    return false;
}

/**
 * Trova il massimo valore nella lista concatenata
 * @param [in] head puntatore alla testa della lista (la lista non deve essere modificata)
 * @param [out] max valore massimo calcolato dalla funzione
 * @return true se il massimo è stato trovato, false se non è possibile trovare il massimo (la lista è vuota)
**/
bool max_data_list(struct Node *head, double* max)
{
    return false;
}

/**
 * Normalizza gli elementi della lista in modo che 
 * - il minimo degli elementi della lista assuma il valore 0
 * - il massimo degli elementi della lista assuma il valore 1
 * - gli altri elementi mantengano la distribuzione tra minimo e massimo
 * @param [inout] head puntatore alla testa della lista (modificare la lista inplace per normalizzarla)
 * @param [in] min valore minimo valore nella lista concatenata
 * @param [in] max valore massimo valore nella lista concatenata
**/
void normalize_list(struct Node *head, double min, double max)
{
}