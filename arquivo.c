#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROUND_TO_DOUBLE(x) ((double)round(x))

typedef struct {
    int x, y;
} Coordenada;


double** criarMatrizAdjacencia(Coordenada *coordenadas, int N) {
    double **matrizAdjacencia = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        matrizAdjacencia[i] = (double *)malloc(N * sizeof(double));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matrizAdjacencia[i][j] = 0.0;
            } else {
                matrizAdjacencia[i][j] = calcularDistancia(coordenadas[i].x, coordenadas[i].y, coordenadas[j].x, coordenadas[j].y);
            }
        }
    }

    return matrizAdjacencia;
}

void liberarMatrizAdjacencia(double **matrizAdjacencia, int N) {
    for (int i = 0; i < N; i++) {
        free(matrizAdjacencia[i]);
    }
    free(matrizAdjacencia);
}