#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu {
    int velocidad; // entre 1 y 3 GHz
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
};

void listar_pc(struct compu pcs[]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("PC %d:\n", i+1);
        printf("Velocidad de procesamiento: %d GHz\n", pcs[i].velocidad);
        printf("Año de fabricación: %d\n", pcs[i].anio);
        printf("Cantidad de núcleos: %d\n", pcs[i].cantidad);
        printf("Tipo de procesador: %s\n", pcs[i].tipo_cpu);
        printf("\n");
    }
}
void pc_mas_vieja(struct compu pcs[]) {
    int i, pc_mas_vieja = 0;
    for (i = 1; i < 5; i++) {
        if (pcs[i].anio < pcs[pc_mas_vieja].anio) {
            pc_mas_vieja = i;
        }
    }
    printf("La PC más vieja es la número %d\n", pc_mas_vieja+1);
    printf("Velocidad de procesamiento: %d GHz\n", pcs[pc_mas_vieja].velocidad);
    printf("Año de fabricación: %d\n", pcs[pc_mas_vieja].anio);
    printf("Cantidad de núcleos: %d\n", pcs[pc_mas_vieja].cantidad);
    printf("Tipo de procesador: %s\n", pcs[pc_mas_vieja].tipo_cpu);
}
void pc_mayor_velocidad(struct compu pcs[]) {
    int i, pc_mayor_velocidad = 0;
    for (i = 1; i < 5; i++) {
        if (pcs[i].velocidad > pcs[pc_mayor_velocidad].velocidad) {
            pc_mayor_velocidad = i;
        }
    }
    printf("La PC con mayor velocidad es la número %d\n", pc_mayor_velocidad+1);
    printf("Velocidad de procesamiento: %d GHz\n", pcs[pc_mayor_velocidad].velocidad);
    printf("Año de fabricación: %d\n", pcs[pc_mayor_velocidad].anio);
    printf("Cantidad de núcleos: %d\n", pcs[pc_mayor_velocidad].cantidad);
    printf("Tipo de procesador: %s\n", pcs[pc_mayor_velocidad].tipo_cpu);
}

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};


int main() {
    // Inicializamos el generador de números aleatorios
    srand(time(NULL));

    // Declaramos el arreglo de estructuras
    struct compu pcs[5];

    // Cargamos las características de las 5 PCs
    for (int i = 0; i < 5; i++) {
        // Generamos valores aleatorios para la velocidad, el año y la cantidad de núcleos
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 9;
        pcs[i].cantidad = 1 + rand() % 8;

        // Pedimos al usuario que ingrese el tipo de procesador
        int tipo;
        printf("Ingrese el tipo de procesador para la PC %d (1: Intel, 2: AMD, 3: Celeron, 4: Athlon, 5: Core, 6: Pentium): ", i + 1);
        scanf("%d", &tipo);

        // Verificamos que el tipo ingresado sea válido
        if (tipo < 1 || tipo > 6) {
            printf("Tipo de procesador inválido. Se utilizará Intel por defecto.\n");
            tipo = 1;
        }

        // Asignamos el tipo de procesador correspondiente
        pcs[i].tipo_cpu = tipos[tipo - 1];
    }

    // Imprimimos la lista de las PCs
    printf("Lista de PCs:\n");
    for (int i = 0; i < 5; i++) {
        printf("PC %d:\n", i + 1);
        printf("- Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("- Año de fabricación: %d\n", pcs[i].anio);
        printf("- Cantidad de núcleos: %d\n", pcs[i].cantidad);
        printf("- Tipo de procesador: %s\n", pcs[i].tipo_cpu);
        printf("\n");
    }

    return 0;
}

