#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100

#define MAX 100 // Número máximo de nodos en el grafo

char* obtenerNodo(int x) {
    // Reserva memoria para la cadena
    
    char* cadena = (char*)malloc(50 * sizeof(char)); // Reserva espacio para 50 caracteres
    if (cadena == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }

    switch (x)
    {
    case 0:
        strcpy(cadena, "ADMISIONES");
        break;
    case 1:
        strcpy(cadena, "SERVICIOS ESCOLARES");
        break;
    case 2:
        strcpy(cadena, "AGORA");
        break;
    case 3:
        strcpy(cadena, "HUMANIDADES");
        break;
    case 4:
        strcpy(cadena, "AUDITORIO");
        break;
    case 5:
        strcpy(cadena, "LABORATORIO A");
        break;
    case 6:
        strcpy(cadena, "BIBLIOTECA");
        break;
    case 7:
        strcpy(cadena, "CENTRO ESTUDIANTIL");
        break;
    case 8:
        strcpy(cadena, "POSGRADOS");
        break;
    case 9:
        strcpy(cadena, "EGRESADOS");
        break;
    case 10:
        strcpy(cadena, "EDIFICIO CN");
        break;
    case 11:
        strcpy(cadena, "EDIFICIO CI");
        break;
    case 12:
        strcpy(cadena, "LABORATORIOS B");
        break;
    case 13:
        strcpy(cadena, "EDIFICIO SL");
        break;
    case 14:
        strcpy(cadena, "EDIFICIO CS");
        break;
    case 15:
        strcpy(cadena, "COMUNICACION");
        break;
    case 16:
        strcpy(cadena, "RECURSOS HUMANOS");
        break;
    case 17:
        strcpy(cadena, "EDIFICIO 1");
        break;
    case 18:
        strcpy(cadena, "EDIFICIO IA");
        break;
    case 19:
        strcpy(cadena, "iOS");
        break;
    case 20:
        strcpy(cadena, "EDIFICIO NE");
        break;
    case 21:
        strcpy(cadena, "PLANTA FISICA");
        break;
    case 22:
        strcpy(cadena, "RECTORIA");
        break;
    case 23:
        strcpy(cadena, "TI");
        break;
    case 24:
        strcpy(cadena, "ALBERCA");
        break;
    case 25:
        strcpy(cadena, "CAMPO DE LANZAMIENTO");
        break;
    case 26:
        strcpy(cadena, "CAMPO 1");
        break;
    case 27:
        strcpy(cadena, "CAMPO 2");
        break;
    case 28:
        strcpy(cadena, "CAMPO 3");
        break;
    case 29:
        strcpy(cadena, "CAMPO 4");
        break;
    case 30:
        strcpy(cadena, "CAMPO 5");
        break;
    case 31:
        strcpy(cadena, "CAMPO 6");
        break;
    case 32:
        strcpy(cadena, "CAMPO 7");
        break;
    case 33:
        strcpy(cadena, "CANCHA FUTBOL RAPIDO");
        break;
    case 34:
        strcpy(cadena, "CANCHA BASQUETBOL");
        break;
    case 35:
        strcpy(cadena, "CANCHAS TENIS");
        break;
    case 36:
        strcpy(cadena, "GIMNASIO MORRIS MOE WILLIAMS");
        break;
    case 37:
        strcpy(cadena, "GIMNASIO DE PESAS");
        break;
    case 38:
        strcpy(cadena, "GIMNASIO LUIS LUISON");
        break;
    case 39:
        strcpy(cadena, "PISTA ATLETISMO");
        break;
    case 40:
        strcpy(cadena, "TEMPLO DEL DOLOR");
        break;
    case 41:
        strcpy(cadena, "COLEGIO CAIN-MURRAY");
        break;
    case 42:
        strcpy(cadena, "COLEGIO RAY LINDLEY");
        break;
    case 43:
        strcpy(cadena, "COLEGIO BERNAL");
        break;
    case 44:
        strcpy(cadena, "COLEGIO GAOS");
        break;
    case 45:
        strcpy(cadena, "JARDIN 1");
        break;
    case 46:
        strcpy(cadena, "JARDIN 2");
        break;
    case 47:
        strcpy(cadena, "JARDIN 3");
        break;
    case 48:
        strcpy(cadena, "Jardin 4");
        break;
    case 49:
        strcpy(cadena, "Jardin 5");
        break;
    case 50:
        strcpy(cadena, "Jardin 6");
        break;
    case 51:
        strcpy(cadena, "Centro integral de rehabilitación");
        break;
    case 52:
        strcpy(cadena, "Acceso 1");
        break;
    case 53:
        strcpy(cadena, "Acceso 2");
        break;
    case 54:
        strcpy(cadena, "Acceso 3");
        break;
    case 55:
        strcpy(cadena, "Acceso 4");
        break;
    case 56:
        strcpy(cadena, "Alimentos 1");
        break;
    case 57:
        strcpy(cadena, "Alimentos 2");
        break;
    case 58:
        strcpy(cadena, "Alimentos 3");
        break;
    case 59:
        strcpy(cadena, "Alimentos 4");
        break;
    case 60:
        strcpy(cadena, "Alimentos 5");
        break;
    case 61:
        strcpy(cadena, "Alimentos 6");
        break;
    case 62:
        strcpy(cadena, "Alimentos 7");
        break;
    case 63:
        strcpy(cadena, "Alimentos 8");
        break;
    case 64:
        strcpy(cadena, "Análisis Clínicos");
        break;
    case 65:
        strcpy(cadena, "Cajeros 1");
        break;
    case 66:
        strcpy(cadena, "Cajeros 2");
        break;
    case 67:
        strcpy(cadena, "Casetas de cobro 1");
        break;
    case 68:
        strcpy(cadena, "Casetas de cobro 2");
        break;
    case 69:
        strcpy(cadena, "Estacionamiento 1");
        break;
    case 70:
        strcpy(cadena, "Estacionamiento 2");
        break;
    case 71:
        strcpy(cadena, "Estacionamiento 3");
        break;
    case 72:
        strcpy(cadena, "Estacionamiento 4");
        break;
    case 73:
        strcpy(cadena, "Estacionamiento 5");
        break;
    case 74:
        strcpy(cadena, "Estacionamiento 6");
        break;
    case 75:
        strcpy(cadena, "Estacionamiento 7");
        break;
    case 76:
        strcpy(cadena, "Estacionamiento 8");
        break;
    case 77:
        strcpy(cadena, "Estacionamiento 9");
        break;
    case 78:
        strcpy(cadena, "Estacionamiento 10");
        break;
    case 79:
        strcpy(cadena, "Estacionamiento 11");
        break;
    case 80:
        strcpy(cadena, "Estacionamiento 12");
        break;
    case 81:
        strcpy(cadena, "Estacionamiento 13");
        break;
    case 82:
        strcpy(cadena, "Estacionamiento 14");
        break;
    case 83:
        strcpy(cadena, "Estacionamiento 15");
        break;
    case 84:
        strcpy(cadena, "Estacionamiento 16");
        break;
    case 85:
        strcpy(cadena, "Estacionamiento 17");
        break;
    case 86:
        strcpy(cadena, "Estacionamiento 18");
        break;
    case 87:
        strcpy(cadena, "Estacionamiento 19");
        break;
    case 88:
        strcpy(cadena, "Hostal");
        break;
    case 89:
        strcpy(cadena, "Seguridad 1");
        break;
    case 90:
        strcpy(cadena, "Seguridad 2/Acceso Recta");
        break;
    case 91:
        strcpy(cadena, "Servicios medicos");
        break;
    case 92:
        strcpy(cadena, "Sorteo");
        break;
    case 93:
        strcpy(cadena, "Banco");
        break;
    case 94:
        strcpy(cadena, "Circle k 1");
        break;
    case 95:
        strcpy(cadena, "Circle k 2");
        break;
    default:
        break;
    }

    return cadena; // Devuelve el puntero a la cadena
}

void liberarRuta(char* ruta[], int n) {
    for (int i = 0; i < n; i++) {
        if (ruta[i] != NULL) {
            free(ruta[i]);
        }
    }
}

void dijkstra(int graph[MAX][MAX], int n, int start, int end) {
    int distance[MAX];
    int visited[MAX], previous[MAX];
    int i, j, min_distance, next_node;

    for (i = 0; i < n; i++) {
        distance[i] = INT_MAX;
        visited[i] = 0;
        previous[i] = -1;
    }
    distance[start] = 0;

    for (i = 0; i < n - 1; i++) {
        min_distance = INT_MAX;
        for (j = 0; j < n; j++) {
            if (!visited[j] && distance[j] < min_distance) {
                min_distance = distance[j];
                next_node = j;
            }
        }

        visited[next_node] = 1;

        for (j = 0; j < n; j++) {
            if (!visited[j] && graph[next_node][j] &&
                distance[next_node] != INT_MAX &&
                distance[next_node] + graph[next_node][j] < distance[j]) {
                distance[j] = distance[next_node] + graph[next_node][j];
                previous[j] = next_node;
            }
        }
    }

    printf("Distancia mínima desde el nodo %d al nodo %d: %d\n", start, end, distance[end]);
    printf("Camino: ");
    int path[MAX], count = 0, current = end;
    while (current != -1) {
        path[count++] = current;
        current = previous[current];
    }

    char* ruta[count];
    for (i = count - 1; i >= 0; i--) {
        ruta[count - i - 1] = obtenerNodo(path[i]);
        printf("%s", ruta[count - i - 1]);
        if (i > 0) printf(" -> ");
    }
    printf("\n");

    liberarRuta(ruta, count);
}

int main() {
    int n = 96, start, end;
    int graph[MAX][MAX] = {0};
    char filename[100];

    printf("Introduce el nombre del archivo (incluyendo .txt): ");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    int rows = 0, cols = 0;
    while (rows < MAX && fscanf(file, "%d", &graph[rows][cols]) == 1) {
        cols++;
        if (cols == n) {
            cols = 0;
            rows++;
        }
    }
    fclose(file);

    printf("Ingrese el nodo inicial: ");
    scanf("%d", &start);
    printf("Ingrese el nodo final: ");
    scanf("%d", &end);

    if (start < 0 || start >= n || end < 0 || end >= n) {
        printf("Nodos fuera de rango.\n");
        return 1;
    }

    dijkstra(graph, n, start, end);

    return 0;
}