#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    player_t p1;
    player_t p2;

    init.player(&p1, "Jon", 1, 100);
    init.player(&p2, "Adam", 1, 100);

    p1.attack(&p1, &p2);
    levelup(&p1);
    p1.attack(&p1, &p2);
}
