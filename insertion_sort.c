// Copyright (C) 2015 Daniil Anichin <anichindaniil@gmail.com>
// All rights reserved.
//
// Name:        insertion_sort.c
// Date:        2015.11.12
// Author:      Daniil Anichin

#include <stdio.h>
#include <string.h>

void insertion_sorting(char** strings, const int array_len)
{
	int c_line = 0;
	int j = 0;
	char* temp_str = NULL;

	for(c_line = 1; c_line < array_len; c_line++)
	{		
		for (j = c_line; j > 0 && strcmp(strings[j], strings[j - 1]) < 0; --j)
		{
			// swap strings(addresses)
			temp_str = strings[j];
			strings[j] = strings[j - 1];
			strings[j - 1] = temp_str;
		}
	}
}