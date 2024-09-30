#include <stdio.h>

typedef struct {
    float x;
    float y;
} Vetor;

Vetor subtrai_vetores(Vetor a, Vetor b) {
    Vetor resultado;
    resultado.x = a.x - b.x;
    resultado.y = a.y - b.y;
    return resultado;
}

Vetor soma_vetores(Vetor a, Vetor b) {
    Vetor resultado;
    resultado.x = a.x + b.x;
    resultado.y = a.y + b.y;
    return resultado;
}

Vetor multiplica_escalar(Vetor v, float escalar) {
    Vetor resultado;
    resultado.x = v.x * escalar;
    resultado.y = v.y * escalar;
    return resultado;
}

int main() {
    Vetor A = {3, -4};
    Vetor B = {-1, 1};
    Vetor v = {-2, 3};

    Vetor resultado_a = soma_vetores(subtrai_vetores(B, A), multiplica_escalar(v, 2));
    Vetor resultado_b = subtrai_vetores(subtrai_vetores(A, B), v);
    Vetor resultado_c = soma_vetores(B, multiplica_escalar(subtrai_vetores(B, A), 2));
    Vetor resultado_d = subtrai_vetores(multiplica_escalar(v, 3), multiplica_escalar(subtrai_vetores(A, B), 2));

    printf("a) (%.2f, %.2f)\n", resultado_a.x, resultado_a.y);
    printf("b) (%.2f, %.2f)\n", resultado_b.x, resultado_b.y);
    printf("c) (%.2f, %.2f)\n", resultado_c.x, resultado_c.y);
    printf("d) (%.2f, %.2f)\n", resultado_d.x, resultado_d.y);

    return 0;
}