#include "ClassePersonaggio.h"

/* #define R 20 // 20 righe
#define C 40 // 40 colonne */
const int R = 20;
const int C = 40;

class ClasseMatrice{
    private :
        char matrice[R][C] ;
        ClassePersonaggio P = ClassePersonaggio( 1, 100 ) ;
    public :
        int y ;

        ClasseMatrice() ; // Stampa il livello iniziale

        void aggiornayPersonaggio() ;

        void caricaSpaziVuoti() ;
        
        void set_MuroSx() ; // Carica nell'array il muro a sinistra

        void set_LivelloN() ; // Carica i muri in alto e in basso

        void stampaMatrice() ;

        void caricaPersonaggio() ; // Carica Personaggio nella matrice

        void cancellaPersonaggio() ; // Carica spazio vuoto nella posizione dell'array

        void set_skinPersonaggio2( char ch ) ;
};