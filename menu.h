#include <iostream>
#include <windows.h>

#define ARRIBA '8'
#define ABAJO '2'
#define ENTER 13

using namespace std;

char getch2 (){
   char c=0;
   DWORD modo, contador;
   HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);
 
   // Desactivamos escritura en terminal
   SetConsoleMode (ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));
 
   ReadConsoleA (ih, &c, 1, &contador, NULL);
 
   if (c == 0) {
      ReadConsoleA (ih, &c, 1, &contador, NULL);
   }
 
   SetConsoleMode (ih, modo); // Devolvemos control normal
 
   return c;
}
void gotoxy(int x,int y){  
  HANDLE hcon;  
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
  COORD dwPos;  
  dwPos.X = x;  
  dwPos.Y= y;  
  SetConsoleCursorPosition(hcon,dwPos);  
}
int menu(const char titulo[], const char *opciones[], int n){
   int opcionSeleccionada = 1;  // Indica la opcionSeleccionada
 
   int tecla;
 
   bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER
 
   do {
      system("cls");
      system("color 0a");
      gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;
 
      // Imprime el título del menú
      gotoxy(15, 2); cout << titulo;
 
      // Imprime las opciones del menú
      for (int i = 0; i < n; ++i) {
         gotoxy(10, 4 + i); cout << i + 1 << ") " << opciones[i];
      }
 
      // Solo permite que se ingrese ARRIBA, ABAJO o ENTER
 
      do {
         tecla = getch2();
         // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
      } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);
 
      switch (tecla) {
 
         case ARRIBA:   // En caso que se presione ARRIBA
 
            opcionSeleccionada--;
 
            if (opcionSeleccionada < 1) {
               opcionSeleccionada = n;
            }
 
            break;
 
         case ABAJO:
            opcionSeleccionada++;
 
            if (opcionSeleccionada > n) {
               opcionSeleccionada = 1;
            }
 
            break;
 
         case ENTER:
            repite = false;
            break;
      }
 
   } while (repite);
 
   return opcionSeleccionada;
}
