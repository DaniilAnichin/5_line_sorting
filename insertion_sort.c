#include <stdio.h>
#include <string.h>


void insertion_sorting(const int array_len, char* array[array_len])
{
    int current_line = 0, j = 0;
    char* temp = NULL;
    for(current_line = 1; current_line < array_len; current_line++)
    {
        while(current_line > j && strcmp(array[current_line], array[j++]) >= 0);
        temp = array[current_line];
        array[current_line] = array[j];
        array[j] = temp;
    }
//    char list[n_str][str_size];
//    char *addr[n_str];
//    int i,n;
//    for (i=0; i<n; i++) addr[i]=list[i];
//    int move_id = 0;
//    char** array_c = array;
//    while(cmp_id > move_id && strcmp(*(array + cmp_id), *(array + move_id++)) >= 0);
//    move_id--;
//    array ^= (array + move_id) ^= array ^= (array + move_id);

}

//int bisection_search(char** array, int cmp_id)
//{
//    int min_index = 0;
//    char** array_c = array;
//    while(array + cmp_id > array_c && strcmp(*(array + cmp_id), *(array_c++)) >= 0);
//    array_c--;
//    array ^= array_c ^= array ^= array_c;



//    ;
//}
