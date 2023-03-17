#include <stdio.h>

void print_squares(int N, int M) {
    int min_dim = N < M ? N : M; // find the smaller dimension
    while (min_dim > 0) {
        printf("%dx%d, ", min_dim, min_dim);
        N -= min_dim;
        M -= min_dim;
        min_dim = N < M ? N : M;
    }
    printf("\n");
}

int main() {
    int N, M;
    printf("Enter the dimensions of the paper: ");
    scanf("%d %d", &N, &M);
    printf("The squares that can be made out of the paper are: ");
    print_squares(N, M);
    return 0;
}
