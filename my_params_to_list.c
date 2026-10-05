/*
** EPITECH PROJECT, 2026
** my_params_to_list
** File description:
** Creates a new list from command line arguments
*/

#include <stdlib.h>
#include "my_list.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    linked_list_t *element;

    for (int i = 0; i < ac; i = i + 1) {
        element = malloc(sizeof(linked_list_t));
        if (element == NULL)
            return (NULL);
        element->data = (void *)av[i];
        element->next = list;
        list = element;
    }
    return (list);
}



