#include <stdio.h>
#include <windows.h>




int main ()




{

int contador; //Declaramos la variable contador

printf("*-Bienvenido a sistema de cuenta hacia atras-*\n");
printf("Escribe el numero desde el que quieres contar:\n");
scanf("%i",&contador);


    while (contador > 0) //Creamos el bucle.

    {
        printf("Vamos por el numero %i\n",contador);
        Beep(750, 300);  // frecuencia en Hz, duraci�n en milisegundos
        Sleep(1000);
        contador--;


     while (contador == 0)



        {
            MessageBox(NULL,"Ha llegado al final de su cuenta atras","Alert",MB_OK | MB_ICONINFORMATION);

        }





    }
 return 0;
}
