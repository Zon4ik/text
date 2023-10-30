
// Task 3 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 4

int main() {
	srand(time(NULL));
	setlocale(0, "");
	int** A = (int**)malloc(N * sizeof(int*));
	printf("Massive: ");
	for (int i = 0; i < N; i++) {
		printf("\n");
		A[i] = (int*)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++) {
			A[i][j] = rand() % 20 - 10;
			printf("%3d ", A[i][j]);
		}
	}


	int count_elements = 0;
	printf("\n\nЭлементы нижней треугольной матрицы: ");
	int ranz = 0;
	for (int i = N - 1; i > 0; i-- ) {
		for (int j = N - 1; j > 0 + ranz; j--) {
			if (A[i][j] < 0) {
				count_elements++;
				printf("%d ", A[i][j]);
			}
		}
		ranz++;
	}

	printf("\nКол-во отрицательных элементов: %d", count_elements);
	

	
	for (int i = 0; i < N; i++) {
		free(A[i]);
	}
	free(A);

	return 0;
}


