#include<string.h>
#include<conio.h>
#include<stdio.h>
typedef struct agenda
{
char nombre[30];
char apellido[30];
char telefono[12];
char edad[3];
}amigos;

void main ()
{
amigos libro[3];
int i,p=0,j=0;
char opc;
do{

 gotoxy(10,10);
 printf("A-ingresa contacto");
 gotoxy(10,11);
 printf("B-Ver contactos");
 opc=getch();
 clrscr();
 switch(opc)
 {
  case 'A':
  for(j=p;j<2;j++)
{
printf("\ningrese nombre\n");
fflush(stdin);
gets(libro[i].nombre);
printf("\ningrese apellido\n");
fflush(stdin);
gets(libro[i].apellido);
printf("\ningrese telefono\n");
fflush(stdin);
gets(libro[i].telefono);
printf("\ningrese edad\n");
fflush(stdin);
gets(libro[i].edad);
clrscr();
}
p++;
break;
  case 'B':
  clrscr();
  printf("nombre\tapellido\ttelefono\t\t\tedad\n");
 printf("\n%s",libro[i].nombre);
 printf("\t%s",libro[i].apellido);
  printf("\t\t%s",libro[i].telefono);
  printf("\t\t\t%s",libro[i].edad);
  break;

 }
}while(opc!='C');
}
