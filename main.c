#include <stdio.h>

int main() {
    int array[] = {3, 6, 8, 5, 9, 4, 2};
    int size = sizeof array / 4;
    printf("size=%i\n", size);
    for (int i = 0; i < size; i++) {
        printf("%i\n", array[i]);
    }
    return 0;
}
