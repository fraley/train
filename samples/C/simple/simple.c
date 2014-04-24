#include <stdio.h>
#include <stdlib.h>

int
main(int argc, const char *argv[])
{
    int foo = 11;
    int boo = 12;
    printf("boolean expression: %d\n", foo == boo);
    if (foo == boo) {
        printf("hello world\n");
    }
    /*
     * for (<initialization>; <condition>; <something-that-gets-after-each-interation>) { }
     */
    for (foo=0; foo<3; foo++) {
        printf("hello joe!: %d\n", foo);
        /* here is where the something-that-gets-after-each-interation happens */
    }
    for (foo=0; foo<3;) {
        printf("hello joe!: %d\n", foo);
        foo = foo + 1;
    }
    exit(0);
}

