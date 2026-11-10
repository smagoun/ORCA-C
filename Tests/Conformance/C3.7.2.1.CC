/*
 * Test C89 3.7.2 (external object definitions) and 3.1.2.2 (linkage).
 */

#include <stdio.h>

short tentative;
short initialised = 7;

extern short tentative;
extern short initialised;

int main(void) {
        tentative = 5;
        if (tentative != 5 || initialised != 7)
                goto Fail;

        printf("Passed Conformance Test C3.7.2.1\n");
        return 0;

Fail:
        printf("Failed Conformance Test C3.7.2.1\n");
        return 1;
}