#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "insertion_sort.h"

void program_run();

int main(void)
{
//    char list[n_str][str_size];
//    char *addr[n_str];
//    int i,n;
//    for (i=0; i<n; i++) addr[i]=list[i];
    char **ppstring, **ppstring_c;

    ppstring = (char**)calloc(4, sizeof(char*));
    ppstring_c = ppstring;

    *ppstring++ = "Hallo, baby";
    *ppstring++ = "Hallo, baby2";
    *ppstring++ = "Hallo, baby3";
    *ppstring = "Hallo, baby4";

    printf("%s\n", *ppstring);
    printf("%s\n", *ppstring_c);
    printf("%s\n", "п");


    program_run();
    return 0;
}



void program_run()
{
    //char* errors;
    int str_num = 20;
    char strings[str_num][200];
    char* addr_str[str_num];
    int i = 0;
    char *start;
    char index[] = "\0";
    //strings[0] = "Hello";
    for(i = str_num; i > 0; i--)
    {
        start = "Hello, ";
        snprintf(index, 3,"%d", i);
//        errors = itoa(i, index, 10);
        start = (char*)calloc((sizeof(*index) + sizeof(*start))/ sizeof(char), sizeof(char));
        strcpy(start, "Hello, ");
        strcat(start, index);
        strcpy(strings[str_num - i], start);
        addr_str[str_num - i] = strings[20 - i];
    }
    for(i = 0; i < str_num; i++)
    {
        printf("%s\n", addr_str[i]);
    }
    insertion_sorting(str_num, addr_str);
    printf("\n");
    for(i = 0; i < str_num; i++)
    {
        printf("%s\n", addr_str[i]);
    }
}
/*
Програма повинна зчитати кількість елементів масиву рядків і сам масив та
вивести на екран впорядкований масив рядків.
Для реалізації програми потрібно написати функцію впорядкування масиву рядків,
параметрами якої є масив покажчиків на char та кількість елементів масиву. Звертатись до
рядків через їх адреси, записані в масив покажчиків.
В програмі потрібно створити двомірний символьний масив, в який записати
введені рядки, і масив покажчиків на char , в який записати адреси рядків, і потім
використовувати як фактичний параметр при виклику процедури впорядкування.
char list[n_str][str_size];
char *addr[n_str];
int i,n;
...
for (i=0; i<n; i++) addr[i]=list[i];
...
Тут n – кількість елементів масиву рядків list . В даному випадку list[i] має значення
адреси і -ого рядка (адреси першого елемента рядка).
*/
