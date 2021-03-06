#ifndef COORD_H
#define COORD_H

#include<stdbool.h>

typedef struct{
    int x;
    int y;
} Coord;

Coord new_coord(int x, int y);
void print_coord(Coord coord);
bool coord_equals(Coord a, Coord b);

#endif

