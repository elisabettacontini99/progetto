#include "Menu.h"

// Funzione per nascondere il cursore
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

Menu::Menu() {
    setMenu();
}

void Menu::setMenu() {
    hidecursor();
    system("cls");
    cout<<"MENU PRINCIPALE"<<endl;
    cout<<"Inserisci il numero della voce che vuoi selezionare:"<<endl<<endl;
    cout<<"1.   Inizia la partita"<<endl;
    cout<<"2.   Leggi le regole del gioco"<<endl;
    cout<<"3.   Cambia il carattere del tuo personaggio"<<endl ;
    cout<<"4.   Autori" << endl << endl ;
    cout<<"Premi 'x' per chiudere il gioco" << endl ;
    logicaMenu();
}

void Menu::logicaMenu() {
    int key;
    bool esciDalCiclo = false;
    while( !esciDalCiclo )
    {
        key = getch();
        switch(key)
        {
            case '1':
                setNomeGiocatore();
                esciDalCiclo = true;
            break;
            case '2':
                stampaRegole();
                esciDalCiclo = true;
            break;
            case '3':
                sceltaCaratterePersonaggio();
                esciDalCiclo = true;
            break;
            case '4':
                stampaAutori();
                esciDalCiclo = true;
            case 'x':
            case 'X':
                esciDalGioco();
            break;
            default:
            break;
        }
    }
}

void Menu::esciDalGioco() {
    exit(1);
}

void Menu::setNomeGiocatore() {
    system("cls");
    cout<<"Inserisci il tuo nome prima di cominciare a giocare (max 20 caratteri):"<<endl;
    cin.getline (this->nomeGiocatore,20);
    avvioGioco() ;
}

void Menu::avvioGioco() {
    system( "cls" );
    L.movimentoADPersonaggio(nomeGiocatore, LENGTH) ;
}

void Menu::sceltaCaratterePersonaggio() {
    system("cls");
    cout<<"Scegli il personaggio con cui giocare la tua partita:"<<endl;
    cout<<"1.   @"<<endl;
    cout<<"2.   #"<<endl<<endl<<endl;
    cout<<"Premi 'x' per tornare al menu principale" << endl << endl ;
    int key;
    bool esciDalCiclo = false;
    while( !esciDalCiclo )
    {
        switch(key = getch())
        {
            case '1':
                setCaratterePersonaggio( '@' ) ;
                esciDalCiclo = true ;
            break;
            case '2':
                setCaratterePersonaggio( '#' );
                esciDalCiclo = true ;
            break;
            case 'X':
            case 'x':
                tornaAlMenu();
                esciDalCiclo = true;
            break;
            default:
            break;
        }
    }
    cout << "Carattere impostato con successo!" << endl ;
    cout << "Ritorno al menu principale..." ;
    Sleep( 1000 ) ;
    tornaAlMenu() ;
}

void Menu::setCaratterePersonaggio( char carattere) {
    L.set_skinPersonaggio1( carattere );
}

void Menu::stampaRegole() {
    int i ;
    bool esciDalCiclo = false;
    system( "cls" ) ;
    cout << "...Scrivere Regole..." << endl << endl ;
    cout << "Premere 'x' per tornare al Menu Principale" << endl ;
    while( !esciDalCiclo )
    {
        switch(i = getch())
        {
            case 'X':
            case 'x':
                tornaAlMenu() ;
                esciDalCiclo = true;
            break;
            default:
            break;
        }
    }
}

void Menu::stampaAutori(){
    int i ;
    bool esciDalCiclo = false;
    system( "cls" ) ;
    cout << "ELISABETTA CONTINI" << setw(20) << "FEDERICO PIOZZI" << setw(22) << "SIMONE VITALONI" << endl << endl << endl ;
    cout << "Premere 'x' per tornare al Menu Principale" << endl ;
    while( !esciDalCiclo )
    {
        switch(i = getch())
        {
            case 'X':
            case 'x':
                tornaAlMenu() ;
                esciDalCiclo = true;
            break;
            default:
            break;
        }
    }
}

void Menu::tornaAlMenu() {
    setMenu();
}