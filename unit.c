#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

typedef struct agenda {
    char nombre[30];
    char apellido[30];
    char telefono[12];
    char edad[3];
} amigos;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clrscr() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD count;
    DWORD cellCount;
    COORD homeCoords = { 0, 0 };

    if (hConsole == INVALID_HANDLE_VALUE) return;

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    cellCount = csbi.dwSize.X * csbi.dwSize.Y;

    FillConsoleOutputCharacter(hConsole, ' ', cellCount, homeCoords, &count);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, cellCount, homeCoords, &count);
    SetConsoleCursorPosition(hConsole, homeCoords);
}

int main(void) {
    amigos libro[3];
    int i = 0, p = 0;
    char opc;

    do {
        gotoxy(10, 10);
        printf("A-ingresa contacto");
        gotoxy(10, 11);
        printf("B-Ver contactos");
        opc = _getch();
        clrscr();

        switch (opc) {
        case 'A':
            if (p < 3) {
                printf("Ingrese nombre:\n");
                fgets(libro[p].nombre, sizeof(libro[p].nombre), stdin);

                printf("Ingrese apellido:\n");
                fgets(libro[p].apellido, sizeof(libro[p].apellido), stdin);

                printf("Ingrese telefono:\n");
                fgets(libro[p].telefono, sizeof(libro[p].telefono), stdin);

                printf("Ingrese edad:\n");
                fgets(libro[p].edad, sizeof(libro[p].edad), stdin);

                p++;
            }
            break;

        case 'B':
            printf("nombre\tapellido\ttelefono\t\tedad\n");
            for (i = 0; i < p; i++) {
                printf("%s\t%s\t%s\t\t%s",
                    libro[i].nombre,
                    libro[i].apellido,
                    libro[i].telefono,
                    libro[i].edad);
            }
            _getch();
            break;
        }
        clrscr();

    } while (opc != 'C');

    return 0;
}
