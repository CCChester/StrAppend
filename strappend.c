/*********************************************** 
 * Name: Chen Chen 
 * Student ID: 20518383
 * File: strappend.c 
 * CS 136 Fall 2014 - Assignment 8, Problem 1
 * Description: 
***********************************************/
#include <stdio.h>
#include "strappend.h"
#include <stdlib.h> 
#include <assert.h>
char *new = NULL;
char *strappend(const char *s1, const char *s2){
    assert (s1 != NULL);
    assert (s2 != NULL);
    int one=0;
    while (s1[one]){
        ++one;
    }
    int two=0;
    while (s2[two]){
        ++two;
    }
    new = malloc(one*sizeof(1));
    int count=0;
    while(count<one){
        new[count]=s1[count];
        ++count;
    }
    new=realloc(new, (two+1)*sizeof(1));
    int first=0;
    while(first<=two){
        new[one]=s2[first];
        ++first;
        ++one;
    }
    return new;
    free(new);
}
