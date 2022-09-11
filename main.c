#include <stdio.h>

double average(double data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + data[i];
    }
    return sum / size;
}

int main() {
    double array[] = {3, 6, 8, 5, 9, 4, 2};
    int size = sizeof array / 8;
    double avg = average(array, size);
    printf("average = %f", avg);
    return 0;
}
