/*
** EPITECH PROJECT, 2026
** my_list.h
** File description:
** Header for linked lists
*/

#ifndef MY_LIST_H_
    #define MY_LIST_H_

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
