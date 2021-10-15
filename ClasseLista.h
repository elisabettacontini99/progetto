#include "ClasseMatrice.h"
#include "DatiGioco.h"

struct bilista{
	ClasseMatrice M ;
	bilista *prec ;
	bilista *next ;
} ;

typedef bilista* ptrBilista ;

struct tapeGame{
	ptrBilista head ;
	ptrBilista tail ;
    ptrBilista ptr ;
};

class ClasseLista{
    private:
        ptrBilista p = NULL ;
        ptrBilista q = NULL ;
        ptrBilista tmp ;
        tapeGame G ;
        int counterNodi ; // conta i nodi che corrispondo al livello
        int livello; // indica il livello attuale
        DatiGioco D ;
        bool nodoCreato = false;
    public:
        ClasseLista() ;

        void creaNodo() ;

        void stampaNodo(char[], int) ;

        void movimentoADPersonaggio(char[], int) ;

        void set_skinPersonaggio1( char ch ) ;
};