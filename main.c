#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarMenuPrincipal() {
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");
    puts("     Buscador de roomie PUCV    ");
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");

    puts("Bienvenid@ al buscador de roomie PUCV");
    puts("¿Qué deseas hacer? 🍀");

    puts("1. Tengo un arriendo disponible");
    puts("2. Busco arriendo");
    puts("3. Salir");

    puts("Desarrollado por Fuerza G  ദ്ദി ˉ꒳ˉ )✧");
}

void mostrarMenuArrendador() {
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");
    puts("     Buscador de roomie PUCV    ");
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");

    puts("¿Qué deseas hacer? 🍀");

    puts("1. Ingresar información personal y arriendo");
    puts("2. Buscar roomie según facultad");
    puts("3. Buscar roomie según presupuesto");
    puts("4. Buscar roomie según sector");
    puts("5. Buscar roomie según genero");
    puts("6. Buscar roomie según gustos y hobbies");
    puts("7. Volver al menú principal");

    puts("Desarrollado por Fuerza G  ദ്ദി ˉ꒳ˉ )✧");
}

void mostrarMenuArrendatario() {
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");
    puts("     Buscador de roomie PUCV    ");
    puts("︵‿︵‿︵‿︵‿︵︵‿︵‿︵‿︵‿︵");

    puts("¿Qué deseas hacer? 🍀");

    puts("1. Ingresar información personal");
    puts("2. Buscar arriendo según sector");
    puts("3. Buscar arriendo según precio");
    puts("4. Buscar arriendo según facultad");
    puts("5. Buscar arrendador según genero");
    puts("6. Buscar arrendador según gustos y hobbies");
    puts("7. Volver al menú principal");

    puts("Desarrollado por Fuerza G  ദ്ദി ˉ꒳ˉ )✧");
}

int main() {
    int opcion;
    do {
        mostrarMenuPrincipal();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                mostrarMenuArrendador();
                break;
            case 2:
                mostrarMenuArrendatario();
                break;
            case 3:
                puts("Adiós (,,>ヮ<,,)!");
                break;
            default:
                puts("Opción no disponible, intente nuevamente ๐·°(⋟﹏⋞)°·๐");
                break;
        }
    } while (opcion != 3);

    return 0;
}