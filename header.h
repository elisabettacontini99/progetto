// header.h
// Autore : Elisabetta Contini
// Data : 10 / 09

#include <conio.h>
#include <windows.h>
using namespace std;

//funzione per spostare una carattere date le coordinate
void gotoxy(short x, short y) {
   COORD pos ={x,y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//funzione per nascondere il cursore
void hidecursor() {
   CONSOLE_CURSOR_INFO info;
   /*  typedef struct _CONSOLE_CURSOR_INFO {
   DWORD dwSize;
   BOOL  bVisible;
   } */
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo( GetStdHandle(STD_OUTPUT_HANDLE) , &info);
   /* BOOL WINAPI SetConsoleCursorInfo(
  _In_       HANDLE              hConsoleOutput,
  _In_ const CONSOLE_CURSOR_INFO *lpConsoleCursorInfo
   ); */
}