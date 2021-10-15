#include <iomanip>
#include "ClasseLista.h"

#define LENGTH 20

class Menu{
    private:
        ClasseLista L ;
    public:
        char nomeGiocatore[LENGTH];

        Menu();
        void setMenu();
        void logicaMenu();

        void esciDalGioco();

        void setNomeGiocatore();

        void avvioGioco();

        void sceltaCaratterePersonaggio();
        void setCaratterePersonaggio(char ch );

        void stampaRegole();
        
        void stampaAutori();

        void tornaAlMenu();
};