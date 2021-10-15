#include <conio.h>
#include <iostream>
using namespace std ;

class ClassePersonaggio{
    protected:
       int pvPersonaggio ; // punti vita personaggio
       char skinPersonaggio = '@' ; // Immagine personaggio
       int xPersonaggio ;
       int yPersonaggio ;
    public:
       ClassePersonaggio( int y, int pv ) ;
      
      void set_xPersonaggio() ;
      int get_xPersonaggio() ;


      void set_yPersonaggio( int y ) ;
      int get_yPersonaggio() ;

       void set_skinPersonaggio( char ch ) ; // imposta l'immagine personaggio
       char get_skinPersonaggio() ; // ritorna skinPersonaggio

       void set_PVPersonaggio( int pv ) ;
       int get_PVPersonaggio() ;
};