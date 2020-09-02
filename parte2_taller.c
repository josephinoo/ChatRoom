#include <stdio.h>
#include <stdlib.h>

#define TAMANO_MAXIMO 20

int main(int argc, char **argv)
{
    int row, col, y, i, j, col_max, row_max,col_init,row_init;
    printf("Ingrese filas:\n");
    scanf("%d", &row_max);
    printf("Inicio filas\n");
    scanf("%d", &row_init);
    printf("Ingrese  columnas\n");
    scanf("%d", &col_max);
    printf("Inicio Columnas");
    scanf("%d", &col_init);

    if (row_max < 1 | col_max < 1)
    {
        printf("Ingreso valores negativos");
        exit(-1);
    }
    if (row_max > TAMANO_MAXIMO | col_max > TAMANO_MAXIMO)
    {

        printf("Ingrese una valor mas pequeño");
        exit(-1);
    }
    printf("TABLA DE MULTIPLICAR\n");

    row = row_init;

    for (i = 1; i <= col_max; i++)
        printf("");
    printf("\n-----------------------------------------------------\n");
    do
    {
        col = col_init;
        printf("%4d |", row);
        do
        {

            y = row * col;
            printf("%4d", y);     //formating string
            col++;                //for the table of each row
        } while (col <= col_max); //inner loop ends

        printf("\n");
        row++; //next row
    } while (row <= row_max);

    printf("----------------------------------------------------------");

    return 0;
}