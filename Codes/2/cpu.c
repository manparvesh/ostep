#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    const char *string = argv[1];
    while (1) {
        Spin(1);
        printf("%s\n", string);
    }
    return 0;
}
