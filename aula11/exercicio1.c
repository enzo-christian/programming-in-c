#include <stdio.h>

int main() {
    int x[5] = {2, 3, 5, 7, 11};

    for(int i = 0; i < 5; i++) {
        printf("x[%d] = %d;\n", i, x[i]);
    }
    return 0;
}
