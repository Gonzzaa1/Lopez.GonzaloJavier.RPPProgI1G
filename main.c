#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

}ePais;


int main()
{
    char cadena[] = "UTN - FRA";
	printf("%s\n", cadena);
	invertirCadena(cadena);
	printf("%s\n", cadena);
	ordenarCaracteres(cadena);
    printf("%s\n", cadena);

    return 0;
}

void actualizarRecuperados(ePais* pais, int recuperados)
{
    if(pais != NULL && recuperados > 0)
    {
        strcpy(pais->nombre, pais);
        pais->recuperados += recuperados;
    }

}

void invertirCadena(char cadena[])
{
    int tam = strlen(cadena);
    char aux;

    for (int i = 0; i < strlen(cadena) / 2; i++)
    {
        aux = cadena[i];
        cadena[i] = cadena[tam - i - 1];
        cadena[tam - i - 1] = aux;
    }
}

void ordenarCaracteres(char cadena[])
{
    int tam = strlen(cadena);
    char aux;

    for(int i = 0; i < tam;i++)
    {
        for(int j = i+1; i < tam;i++)
        {
            if(cadena[i] >= cadena[j])
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }

        }
    }
}
