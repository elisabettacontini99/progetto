#include "ClassePersonaggio.h"

ClassePersonaggio::ClassePersonaggio( int y, int pv ){ 
    set_xPersonaggio() ;
    set_yPersonaggio( y ) ;
    set_PVPersonaggio( pv ) ;   
}

void ClassePersonaggio::set_xPersonaggio(){
    xPersonaggio = 18 ;
}

int ClassePersonaggio::get_xPersonaggio(){
    return xPersonaggio ;
}

void ClassePersonaggio::set_yPersonaggio( int y ){
    if( y > 0 && y < 40 )
        yPersonaggio = y ;
    else yPersonaggio = 1 ; // Valore di default
}

int ClassePersonaggio::get_yPersonaggio(){
    return yPersonaggio ;
}

void ClassePersonaggio::set_skinPersonaggio( char ch )
{
    skinPersonaggio = ch ;
}

char ClassePersonaggio::get_skinPersonaggio(){
    return skinPersonaggio ;
}

void ClassePersonaggio::set_PVPersonaggio( int pv ){
    if( pv > 0 )
       pvPersonaggio = pv ;
    else pvPersonaggio = 100 ; // Valore di default
}

int ClassePersonaggio::get_PVPersonaggio(){
    return pvPersonaggio ;
}

