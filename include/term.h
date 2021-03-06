#ifndef TERM_T
#define TERM_T

#include"Coord.h"

void move_to(int x, int y);
void set_raw(); // unbuffered input
void set_cooked(); // buffered input
// screen coord -> game coord
//       x, y   ->  2 * x, y + 1
void put_block(Coord pos, const char* block); // print a block in game coordinates

#endif // ifndef TERM_T
