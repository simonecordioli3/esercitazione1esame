#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    double value;       // Data
    struct Node* next;  // Link
};

// Trova il minimo valore nella lista concatenata
bool min_data_list(struct Node *head, double* min);
// Trova il massimo valore nella lista concatenata
bool max_data_list(struct Node *head, double* max);
// Normalizza gli elementi della lista
void normalize_list(struct Node *head, double min, double max);