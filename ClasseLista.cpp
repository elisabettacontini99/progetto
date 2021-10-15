#include "ClasseLista.h"

void set_cursor(bool visible){
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = visible;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

ClasseLista::ClasseLista(){
    counterNodi = 0 ;
    livello = 1 ;
}

void ClasseLista::creaNodo(){
    counterNodi++ ;
    if( counterNodi == 1 ){
	    tmp = new bilista ; 
        tmp -> M.caricaSpaziVuoti() ;
        tmp -> M.set_MuroSx() ;
        tmp -> M.set_LivelloN() ;
	    tmp ->prec = p ;
	    q = tmp ;
	    p = tmp ;	
	    p->next = NULL ;
	    G.tail = p ;
        G.ptr = G.tail ;
	    G.head = q ;
    }
    else{
        livello++;
        tmp = new bilista ;
        tmp -> M.caricaSpaziVuoti() ;
        tmp -> M.set_LivelloN() ;
		tmp -> prec = p ;
		p->next = tmp ;
		p = tmp ;
        p->next = NULL ;
	    G.tail = p ;
        G.ptr = G.tail ;
	    G.head = q ;
    }
}

void ClasseLista::stampaNodo(char nome[], int length){
    G.ptr -> M.stampaMatrice() ;
    D.stampaDati(nome, length, livello) ;
}

void ClasseLista::movimentoADPersonaggio(char nome[], int length){
    system( "cls " ) ;
    int key ;
    if (!nodoCreato) {
        creaNodo() ;
    }
    stampaNodo(nome, length) ;
    while( ( key = getch() ) != 'x' )
    {
        system( "cls" ) ;
        set_cursor(false);
        G.ptr -> M.cancellaPersonaggio() ;
        switch(key)
        {
            case 'A':
            case 'a':
                if( ( G.ptr -> M.y ) != 1 ){
                    G.ptr -> M.y-- ; 
                }
                else if( counterNodi != 1 ){
                    G.ptr = G.ptr -> prec ; 
                    G.ptr -> M.y = 39 ;  
                    livello--;
                }
            break; 
            case 'D':
            case 'd':
                if( ( G.ptr -> M.y ) != 39 ) {
                    G.ptr -> M.y++ ;
                }
                else{
                    if( G.ptr == G.tail )
                        creaNodo() ;
                    else {
                        G.ptr = G.ptr -> next ;
                        livello++;
                    }
                }
            break; 
            default: 
            break;
        }
        stampaNodo(nome, length) ;
    }
}

void ClasseLista::set_skinPersonaggio1( char ch ){
    creaNodo();
    nodoCreato = true;
    G.ptr -> M.set_skinPersonaggio2( ch ) ;
}