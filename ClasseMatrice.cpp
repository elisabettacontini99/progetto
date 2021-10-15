#include "ClasseMatrice.h"

ClasseMatrice::ClasseMatrice(){
    caricaSpaziVuoti() ;
    set_MuroSx() ;
    set_LivelloN() ;
    caricaPersonaggio() ;
}

void ClasseMatrice::aggiornayPersonaggio(){
    P.set_yPersonaggio( y ) ;
    y = P.get_yPersonaggio() ;
}

void ClasseMatrice::caricaSpaziVuoti(){
    for( int i = 0; i < 20; i++ ){
        for( int j = 0; j < 40; j++ ){
            matrice[i][j] = ' ' ;
        }
    }
}

void ClasseMatrice::set_MuroSx(){
    for( int i = 0; i < 19; i++ )
        matrice[i][0] ='|' ;
}

void ClasseMatrice::set_LivelloN(){
    for( int i = 0; i < 40; i++){
        matrice[0][i] = '=' ;
        matrice[19][i] = '=' ;
    }
}

void ClasseMatrice::stampaMatrice(){
    caricaPersonaggio() ;
    for( int i = 0; i < 20; i++ ){
        for( int j = 0; j < 40; j++ ){
            cout << matrice[i][j] ;
        }
        cout << endl ;
    }
}

void ClasseMatrice::caricaPersonaggio(){
    char s ;
    int x ;

    s = P.get_skinPersonaggio() ;
    x = P.get_xPersonaggio() ;
    
    aggiornayPersonaggio() ;

    matrice[x][y] = s ;
}

void ClasseMatrice::cancellaPersonaggio(){
    int x ;

    x = P.get_xPersonaggio() ;
    
    aggiornayPersonaggio() ;

    matrice[x][y] = ' ' ;
}

void ClasseMatrice::set_skinPersonaggio2( char ch ){
    P.set_skinPersonaggio( ch ) ;
}
