// Copyright (C) 2015 Daniil Anichin <anichindaniil@gmail.com>
// All rights reserved.
//
// Name:        main.c
// Date:        2015.11.12
// Author:      Daniil Anichin
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "insertion_sort.h"

int main(void)
{
	const int str_count = 15;
	int i_pos = 0;
	int str_len = 0;
	
	// Temporary format string to fulfill array
	const char* test_str = "Hello, my darling number %02d";

	// main array of strings
	char** strings = NULL;

	// Allocate memory for main array
	strings = (char**)calloc(str_count, sizeof(char*));

	for(i_pos = 0; i_pos < str_count; ++i_pos)
	{
		str_len = strlen(test_str);
		// Allocate memory for each string according to string size
		strings[i_pos] = (char*)calloc(str_len, sizeof(char));
		
		sprintf_s(strings[i_pos], str_len, test_str, str_count - i_pos);
	}

	// Debug output
	printf("Initial strings:\n");
	for(i_pos = 0; i_pos < str_count; ++i_pos)
		printf("%s\n", strings[i_pos]);

	insertion_sorting(strings, str_count);

	printf("Sorted strings:\n");
	for(i_pos = 0; i_pos < str_count; ++i_pos)
		printf("%s\n", strings[i_pos]);

	// clear memory
	for(i_pos = 0; i_pos < str_count; ++i_pos)
		free(strings[i_pos]);

	free(strings);

	return 0;
}