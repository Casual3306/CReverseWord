//
// Created by Gleb Bair on 11/29/21.
//

#ifndef LVL_3_META_H
#define LVL_3_META_H

#include "colors.h"
#include <string.h>
#include <stdlib.h>

int lens(char *ptr)
{
    int a = 0;

    while( *(ptr + a) != '\0' )
        a++;

    return a;
}

void rev(char *s)
{
    int len, c;
    char *b, *e, t;

    len = lens(s);
    b = s;
    e = s;

    for (c = 0; c < (len - 1); c++)
        e++;

    for (c = 0; c < (len / 2); c++)
    {
        t   = *e;
        *e   = *b;
        *b = t;

        b++;
        e--;
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
    rev((char *) data);
    printf("%s%s%s\n", WS, (char *) data, EC);
}

#endif //LVL_3_META_H
