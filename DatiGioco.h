// Classe Dati Gioco implementa e gestisce i dati relativi 
//al punteggio, ai punti vita e ai punti mappa del personaggio
#include <conio.h>
#include <windows.h>
#include <iostream>
using namespace std;

class DatiGioco{
    protected:
        int punteggio ;
        int puntiVita ;
    public:
        DatiGioco() ; // costruttore classe Dati Gioco

        // Metodi set e get per il punteggio
        void set_Punteggio() ;
        int get_Punteggio() ;

        // Metodi set e get per i punti vita
        void set_PuntiVita() ;
        int get_PuntiVita() ;

        // Stampa i dati di gioco a schermo ( NOTA : posizione dei dati, eventualmente, da modificare )
        void stampaDati(char nome[], int length, int livello) ;

        // Aumenta il punteggio se viene ucciso un nemico ( aumento non costante _Guarda NOTA_ ) o se vengono percorsi 1000 punti mappa ( aumento costante )
        void aumentaPunteggio( bool nemicoUcciso ) ;

        // Aumenta i punti vita prendendo un bonus 
        void aumentaPuntiVita( bool bonusVita ) ;
        
        // Diminuisce punti vita se il personaggio viene colpito ( diminuzione non costante )
        void diminuisciPuntiVita( int danni ) ;
};