//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <locale.h>
//
//#define N 10
//int prost(int num) {
//	if (num > 1) {
//		for (int i = 2; i < num; i++) {
//			if (num % i == 0) {
//				return 0;
//			}
//			else {
//				return 1;
//			}
//		}
//	}
//	else return 0;
//}
//main() {
//	setlocale(0, "");
//	srand(time(NULL));
//	int* arr_in = (int*)malloc(N * sizeof(int));
//	int* arr_out = (int*)malloc(N * sizeof(int));
//
//	printf("Массив: ");
//	for (int i = 0; i < N; i++) {
//		arr_in[i] = rand() % 10;
//		printf("%d ", arr_in[i]);
//	} 
//
//	for (int i = 0; i < N; i++) {
//		if (prost(arr_in[i]) == 1) {
//			arr_out[i] = arr_in[i];
//		}
//	}
//
//	printf("\nМассив: ");
//	for (int i = 0; i < N; i++) {
//		arr_out[i] = rand() % 10;
//		printf("%d ", arr_out[i]);
//	}
//	free(arr_out);
//	free(arr_in);
//	return 0;
//}
//
//


//// 12
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#define N 10
//void printSurfaceType(float coefficient) {
//    if (coefficient > 0) {
//        printf("Эллиптическая поверхность\n");
//    }
//    else if (coefficient < 0) {
//        printf("Гиперболическая поверхность\n");
//    }
//    else if (coefficient == 0) {
//        printf("\nКонусная поверхность\n");
//    }
//    else {
//        printf("Параболическая поверхность\n");
//    }
//}
//
//int main() {
//    setlocale(0, "");
//    srand(time(NULL));
//    float* inputArray = (float*)malloc(N * sizeof(float));
//    for (int i = 0; i < N; i++) {
//        inputArray[i] = (float) (rand() % 2000 - 1000) / 1000;
//    }
//
//    printf("Тип поверхности для каждого коэффициента:\n");
//    for (int i = 0; i < 10; i++) {
//        printf("Коэффициент %.1f: ", inputArray[i]);
//        printSurfaceType(inputArray[i]);
//    }
//    free(inputArray);
//    return 0;
//}



//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <locale.h>
//
//#define N 10
//
//int count_el(int f, int s, int* arr) {
//	int count = 0;
//	count = abs(f - s) - 1;
//	return count;
//}
//
//main() {
//	setlocale(0, "");
//	srand(time(NULL));
//
//	int* arr = (int*)malloc(N * sizeof(int));
//		printf("Массив: ");
//		for (int i = 0; i < N; i++) {
//			arr[i] = rand() % 10;
//			printf("%d ", arr[i]);
//		} 
//
//
//		int Max = 0; int Min = 0;
//		int indexfirst = 0; int indexlast;
//
//		for (int i = 0; i < N; i++) {
//			if (arr[i] > Max) {
//				indexfirst = i;
//				Max = arr[i];
//				
//			}
//			if (i == 0) {
//				Min = arr[i];
//			}
//			else if (arr[i] <= Min) {
//				Min = arr[i];
//				indexlast = i;
//			}
//		}
//
//		
//
//		int count = count_el(indexfirst, indexlast, arr);
//		
//		if (count == 0) {
//			printf("Ошибка: -1");
//		}
//		else {
//			printf("Кол-во элементов %d", count);
//		}
//
//		
//		free(arr);
//		return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include<windows.h>
//
//
//#define SIZE 4
//
//void printArray(int array[SIZE][SIZE]) {
//    printf("Массив:\n");
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            printf("%d\t", array[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//
//
//int main() {
//    int array[SIZE][SIZE] = { 0 };
//    int occupied[SIZE][SIZE] = { 0 };  // Массив для отслеживания занятости ячеек
//    int count = 0;
//
//    srand(time(NULL));
//
//    while (count < 4) {
//        int row = rand() % SIZE;
//        int column = rand() % SIZE;
//
//        if (occupied[row][column] == 0) {
//            array[row][column] = -1;
//            occupied[row][column] = 1;
//            count++;
//        }
//    }
//
//    printArray(array);
//
//    return 0;
//}

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


