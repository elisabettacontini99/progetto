#include "DatiGioco.h"

//funzione per spostare una carattere date le coordinate
void gotoxy(short x, short y) {
   COORD pos ={x,y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// NOTA : il costruttore non stampa i dati direttamente
DatiGioco::DatiGioco(){
    set_Punteggio() ;
    set_PuntiVita() ;
}

void DatiGioco::set_Punteggio(){
    punteggio = 0 ;
}

int DatiGioco::get_Punteggio(){
    return punteggio ;
}

void DatiGioco::set_PuntiVita(){
    puntiVita = 100 ;
}

int DatiGioco::get_PuntiVita(){
    return puntiVita ;
}

void DatiGioco::stampaDati(char nome[], int length, int livelloAttuale){
    gotoxy( 45, 4 ) ;
    cout << "Punti Vita : " << puntiVita ;
    gotoxy( 45, 5 ) ;
    cout << "Punteggio  : " << punteggio ;
    gotoxy( 45, 6 ) ;
    cout << "Livello : " << livelloAttuale ;
    gotoxy( 45, 7 ) ;
    cout<< "Nome Giocatore: ";
    for(int i=0; nome[i]!='\0'; i++) {
        cout << nome[i];
    }
}

void DatiGioco::aumentaPunteggio( bool nemicoUcciso ){
    if( nemicoUcciso ){
        punteggio += 10 ; // NOTA : punteggio costante ( eventualmente da MODIFICARE )
    }
}

void DatiGioco::aumentaPuntiVita( bool bonusVita ){
    if( bonusVita ){
        puntiVita += 10 ; // NOTA : punteggio costante ( eventualmente da MODIFICARE )
    }
}

void DatiGioco::diminuisciPuntiVita( int danni ){
        puntiVita -= danni ;
}
