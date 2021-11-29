//
// Created by Gleb Bair on 11/29/21.
//

#ifndef LVL_3_META_H
#define LVL_3_META_H

#include "colors.h"
#include <string.h>
#include <stdlib.h>

int string_length(char *pointer)
{
    int c = 0;

    while( *(pointer + c) != '\0' )
        c++;

    return c;
}

void reverse(char *s)
{
    int length, c;
    char *begin, *end, temp;

    length = string_length(s);
    begin  = s;
    end    = s;

    for (c = 0; c < length - 1; c++)
        end++;

    for (c = 0; c < length/2; c++)
    {
        temp   = *end;
        *end   = *begin;
        *begin = temp;

        begin++;
        end--;
    }
}

void perr(const char *error) {
    if (strlen(error) == 0) {
        return;
    } else {
        printf("\n%s[Error]: %s%s%s\n", RS, WS, error, EC);
    }
}
void ppat(char _c, int times) {
    for (int i = 0; i < times; i++) {
        printf("%c", _c);
    }
}

void revs(const char *_string) {
    char *data[100];

    strncpy((char *) data, _string, 100);

    printf("\n%sString reversed:%s ", GS, EC);
    reverse((char *) data);
    printf("%s%s%s\n", WS, (char *) data, EC);
}

#endif //LVL_3_META_H
