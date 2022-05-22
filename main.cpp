#include <stdio.h>   // importo <stdio.h>
#include <iostream>  // importo <iostream> per utilizzare "system("CLS")"
#include <math.h>    // importo <math.h> per usare le funzioni matematiche
#include <time.h>    // libreria time.h

using namespace std; // per non dover fare std::cout/std::endl/std::cin ogni volta

#define RESET "\e[0m"   // costante di nome reset che ha valore in codice escape ansi di colore grigio/reset


/* Funzione con ritorno stringa che al n valore di una variabile int prende un certo colore che ho chiamato in ogni cout */

std::string colore(int coloreSelezionato) {
    switch (coloreSelezionato) {
        case 1: // rosso
            return "\e[0;31m";
            break;
        case 2: // giallo
            return "\e[0;33m";
            break;
        case 3: // verde
            return "\e[0;32m";
            break;
        case 4: // azzurro
            return "\e[0;36m";
            break;
        case 5: // blu
            return "\e[0;34m";
            break;
        case 6: // rosa
            return "\e[0;35m";
            break;
        default: // default: rosso
            return "\e[0;31m";
            break;
    }
}

int main() {
    system("title Calcolatrice di Valentino Franco Catozzi");
    int colorazione=1,selezionemenu=0,menu_uno=0,menu_due=0,menu_tre,menu_impostazioni=0;
    float x,y,z,risultato;
    int a,b;
    std::string nomecolore = "casuale"; // variabile di tipo string che prende il nome del colore selezionato quando viene cambiato, se no è casuale di default
    std::string convertito = "";

    srand (time(NULL)); // cambia il seed della generazione in base al tempo
    colorazione = rand() % 6 + 1; // numero casuale da 1 a 6

    for (;;) { // loop for infinito
        x = 0;
        y = 0;
        z = 0;
        risultato = 0;
        convertito = "";

        system("CLS"); // pulisco la console

        /* Siccome una buon parte di classe ha fatto questo tipo di titolo ho deciso di colorarlo con colori a caso allo start o selezionabili per distinguerlo un po' dagli altri */
        cout << colore(colorazione) << "   ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n";
        cout << "  / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n";
        cout << " | (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n";                
        cout << "  \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n\n" << RESET << endl;

        cout << " Lista delle operazioni disponibili:\n" << endl;
        cout << "  [" << colore(colorazione) << "0" << RESET << "] - Istruzioni\n";
        cout << "  [" << colore(colorazione) << "1" << RESET << "] - Operazioni di base\n";
        cout << "  [" << colore(colorazione) << "2" << RESET << "] - Calcolatrice scientifica\n";
        cout << "  [" << colore(colorazione) << "3" << RESET << "] - Extra\n";
        cout << "  [" << colore(colorazione) << "4" << RESET << "] - Impostazioni\n" << endl;

        cout << "  [" << colore(colorazione) << ">" << RESET << "] ";
        cin >> selezionemenu;

        switch(selezionemenu) {
            case 0: 
                system("CLS"); 
                cout << "PAGINA [" << colore(colorazione) << "1" << RESET << "/" << colore(colorazione) << "2" << RESET << "]\n";
                cout << "\nBenvenuto nelle istruzioni della 'Calcolatrice di Valentino Franco Catozzi' v1\n" << endl;
                cout << "Opzioni del PRIMO menu:" << endl;
                cout << "\n[" << colore(colorazione) << "1" << RESET << "] - Operazioni di base (addizione,sottrazione,divisione e moltiplicazione)" << endl;
                cout << "[" << colore(colorazione) << "2" << RESET << "] - Calcolatrice scientifica (cos,sin,tan,potenze,radici,log...)" << endl;
                cout << "[" << colore(colorazione) << "3" << RESET << "] - Extra (conversione da base 10 a 2)" << endl;
                cout << "[" << colore(colorazione) << "4" << RESET << "] - Impostazioni (Cambia il colore del tema della calcolatrice)\n" << endl;
                cout << "Premi '" << colore(colorazione) << "Invio" << RESET << "' per continuare\n\n";
                system("pause");



                system("CLS");
                cout << "PAGINA [" << colore(colorazione) << "2" << RESET << "/" << colore(colorazione) << "2" << RESET << "]\n";
                cout << "\nEsempio di operazione (Addizione)" << endl;
                cout << "\nQuando si esegue un operazione (in base al tipo di operazione selezionata) il programma chiede 2 numeri (interi o non)" << endl;
                cout << "della quale dovra' fare la somma (in questo caso)." << endl;
                cout << "\nAd esempio:\n" << endl;
                cout << "[" << colore(colorazione) << "ADDIZIONE" << RESET "]\n\n";
                cout << "[" << colore(colorazione) << "INSERISCI IL PRIMO NUMERO" << RESET "] " << endl;
                cout << "[" << colore(colorazione) << ">" << RESET "] " << "12";
                cout << "\n[" << colore(colorazione) << "INSERISCI IL SECONDO NUMERO" << RESET "] " << endl;
                cout << "[" << colore(colorazione) << ">" << RESET "] " << "12" << endl;
                printf("\nLa somma di 12 e 12 e': 24\n");
                cout << "\nPremi '" << colore(colorazione) << "Invio" << RESET << "' per continuare\n" << endl;
                system("pause");

                break;
            case 1: 
                system("CLS");

                cout << colore(colorazione) << "   ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n";
                cout << "  / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n";
                cout << " | (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n";                
                cout << "  \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n\n" << RESET << endl;

                /* 
                All'inizio nelle operazioni per fare l'output delle variabili usavo %2.f per limitare a 2 cifre decimali ma con cout se entrambe sono di 1/2 le tiene cosi quindi uso cout su quasi tutto
                */

                cout << " Lista delle (Operazioni di base) disponibili:\n" << endl;
                cout << "  [" << colore(colorazione) << "0" << RESET << "] - Torna indietro.\n";
                cout << "  [" << colore(colorazione) << "1" << RESET << "] - Addizione\n";
                cout << "  [" << colore(colorazione) << "2" << RESET << "] - Sottrazione\n";
                cout << "  [" << colore(colorazione) << "3" << RESET << "] - Moltiplicazione\n";
                cout << "  [" << colore(colorazione) << "4" << RESET << "] - Divisione\n" << endl;

                cout << "  [" << colore(colorazione) << ">" << RESET << "] ";
                cin >> menu_uno;
                
                switch (menu_uno) {
                    case 0:
                        break;
                    case 1: // ADDIZIONE
                        system("CLS");
                        cout << "[" << colore(colorazione) << "ADDIZIONE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL PRIMO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI IL SECONDO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = x + y;
                        cout << "\nLa somma di " << colore(colorazione) << x << RESET << " e " << colore(colorazione) << y << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 2: // SOTTRAZIONE
                        system("CLS");
                        cout << "[" << colore(colorazione) << "SOTTRAZIONE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL PRIMO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI IL SECONDO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = x - y;
                        cout << "\nLa sottrazione di " << colore(colorazione) << x << RESET << " e " << colore(colorazione) << y << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 3: // MOLTIPLICAZIONE
                        system("CLS");
                        cout << "[" << colore(colorazione) << "MOLTIPLICAZIONE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL PRIMO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI IL SECONDO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = x * y;
                        cout << "\nLa moltiplicazione di " << colore(colorazione) << x << RESET << " e " << colore(colorazione) << y << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 4: // DIVISIONE
                        system("CLS");
                        cout << "[" << colore(colorazione) << "DIVISIONE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL PRIMO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI IL SECONDO NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = x / y;
                        cout << "\nLa divisione di " << colore(colorazione) << x << RESET << " e " << colore(colorazione) << y << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    default: // DEFAULT
                        cout << colore(colorazione) << "\nOperazione selezionata non esistente!\n" << RESET; 
                        break;
                }

                if (menu_uno==0) {
                    continue;
                } else {
                    printf("\n");
                    system("pause");
                }

                break;
            case 2: 
                system("CLS");

                cout << colore(colorazione) << "   ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n";
                cout << "  / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n";
                cout << " | (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n";                
                cout << "  \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n\n" << RESET << endl;

                cout << " Lista delle (Calcolatrice scientifica) disponibili:\n" << endl;
                cout << "  [" << colore(colorazione) << "0" << RESET << "] - Torna indietro.\n";
                cout << "  [" << colore(colorazione) << "1" << RESET << "] - Radice\n";
                cout << "  [" << colore(colorazione) << "2" << RESET << "] - Potenza\n";
                cout << "  [" << colore(colorazione) << "3" << RESET << "] - Logaritmo\n";
                cout << "  [" << colore(colorazione) << "4" << RESET << "] - Sin\n";
                cout << "  [" << colore(colorazione) << "5" << RESET << "] - Cos\n";
                cout << "  [" << colore(colorazione) << "6" << RESET << "] - Tan\n";
                cout << "  [" << colore(colorazione) << "7" << RESET << "] - Percento (%)\n";
                cout << "  [" << colore(colorazione) << "8" << RESET << "] - Numero Casuale\n" << endl;

                cout << "  [" << colore(colorazione) << ">" << RESET << "] ";
                cin >> menu_due;
                
                switch (menu_due) {
                    case 0:
                        break;
                    case 1:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "RADICE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI L'INDICE" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = pow(x, 1.0/y);
                        cout << "\nLa radice di (" << colore(colorazione) << x << RESET << ") con indice (" << colore(colorazione) << y << RESET << ") e': " << colore(colorazione) << risultato << RESET << endl; 
                        break;
                    case 2:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "POTENZA" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI L'ESPONENTE" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = pow(x,y);
                        cout << "\nLa potenza di (" << colore(colorazione) << x << RESET << ") con esponente (" << colore(colorazione) << y << RESET << ") e': " << colore(colorazione) << risultato << RESET << endl; 
                        break;
                    case 3:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "LOGARITMO" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI LA BASE" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = log(x)/log(y);
                        cout << "\nIl logaritmo di (" << colore(colorazione) << x << RESET << ") con base (" << colore(colorazione) << y << RESET << ") e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 4:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "SIN" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET << " (in gradi)] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        risultato = sin(x*3.1415926535/180);
                        cout << "\nIl (sin) di " << colore(colorazione) << x << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 5:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "COS" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET << " (in gradi)] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        risultato = cos(x*3.1415926535/180);
                        cout << "\nIl (cos) di " << colore(colorazione) << x << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 6:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "TAN" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET << " (in gradi)] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        risultato = tan(x*3.1415926535/180);
                        cout << "\nLa (tan) di " << colore(colorazione) << x << RESET << " e': " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 7:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "PERCENTUALE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> x;
                        cout << "\n[" << colore(colorazione) << "INSERISCI LA PERCENTUALE" << RESET "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> y;
                        risultato = (x*y)/100;
                        cout << "\nIl " << colore(colorazione) << y << "%" << RESET << " di " << colore(colorazione) << x << RESET << " equivale a: " << colore(colorazione) << risultato << RESET << endl;
                        break;
                    case 8:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "NUMERO CASUALE" << RESET "]\n"; 
                        a = rand();
                        cout << "\nIl numero generato casualmente e': " << colore(colorazione) << a << RESET << endl;
                        break;
                    default:
                        cout << colore(colorazione) << "\nOperazione selezionata non esistente!\n" << RESET; 
                        break;
                }

                if (menu_due==0) {
                    continue;
                } else {
                    printf("\n");
                    system("pause");
                }

                break;
            case 3: 
                system("CLS");

                cout << colore(colorazione) << "   ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n";
                cout << "  / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n";
                cout << " | (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n";                
                cout << "  \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n\n" << RESET << endl;

                cout << " Lista delle operazioni (Extra) disponibili:\n" << endl;
                cout << "  [" << colore(colorazione) << "0" << RESET << "] - Torna indietro.\n";
                cout << "  [" << colore(colorazione) << "1" << RESET << "] - Conversione base 10-2\n" << endl;

                cout << "  [" << colore(colorazione) << ">" << RESET << "] ";
                cin >> menu_tre;
                
                switch (menu_tre) {
                    case 0:
                        break;
                    case 1:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "CONVERSIONE DA BASE 10 A BASE 2" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL NUMERO" << RESET << "] " << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> a;
                        b=a;
	                    while (a>0) {
		                    if (a%2==0) {
                                convertito='0'+convertito;
                            } else {
			                    convertito='1'+convertito;
                            }
		                    a=a/2;
	                    }
                        cout << "\nIl numero " << colore(colorazione) << b << RESET << " in base 2 equivale a: " << colore(colorazione) << convertito << RESET << endl;
                        break;
                    default:
                        cout << colore(colorazione) << "\nOperazione selezionata non esistente!\n" << RESET; 
                        break;
                }

                if (menu_tre==0) {
                    continue;
                } else {
                    printf("\n");
                    system("pause");
                }

                break;
            case 4: 
                system("CLS");

                cout << colore(colorazione) << "   ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n";
                cout << "  / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n";
                cout << " | (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n";                
                cout << "  \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n\n" << RESET << endl;

                cout << " Lista delle (Impostazioni) disponibili:\n" << endl;
                cout << "  [" << colore(colorazione) << "0" << RESET << "] - Torna indietro.\n";
                cout << "  [" << colore(colorazione) << "1" << RESET << "] - Cambia il colore\n" << endl;

                cout << "  [" << colore(colorazione) << ">" << RESET << "] ";
                cin >> menu_impostazioni;
                
                switch (menu_impostazioni) {
                    case 0:
                        break;
                    case 1:
                        system("CLS");
                        cout << "[" << colore(colorazione) << "COLORI" << RESET << "]\n" << endl;
                        cout << "[" << colore(colorazione) << "1" << RESET << "] - Rosso (\e[0;31mRosso" << RESET << ")\n";
                        cout << "[" << colore(colorazione) << "2" << RESET << "] - Giallo (\e[0;33mGiallo" << RESET << ")\n";
                        cout << "[" << colore(colorazione) << "3" << RESET << "] - Verde (\e[0;32mVerde" << RESET << ")\n";
                        cout << "[" << colore(colorazione) << "4" << RESET << "] - Azzurro (\e[0;36mAzzurro" << RESET << ")\n";
                        cout << "[" << colore(colorazione) << "5" << RESET << "] - Blu (\e[0;34mBlu" << RESET << ")\n";
                        cout << "[" << colore(colorazione) << "6" << RESET << "] - Magenta (\e[0;35mMagenta" << RESET ")\n" << endl;

                        cout << "[" << colore(colorazione) << "CAMBIA IL COLORE" << RESET "]\n\n"; 
                        cout << "[" << colore(colorazione) << "INSERISCI IL COLORE" << colore(colorazione) << RESET << "]" << endl;
                        cout << "[" << colore(colorazione) << ">" << RESET "] ";
                        cin >> colorazione;

                        if (colorazione == 1) {
                            nomecolore = "Rosso";
                        } else if (colorazione == 2) {
                            nomecolore = "Giallo";
                        } else if (colorazione == 3) {
                            nomecolore = "Verde";
                        } else if (colorazione == 4) {
                            nomecolore = "Azzurro";
                        } else if (colorazione == 5) {
                            nomecolore = "Blu";
                        } else if (colorazione == 6) {
                            nomecolore = "Magenta";
                        } else {
                            cout << colore(colorazione) << "\nColorazione selezionata non esistente! (Ho selezionato per te il rosso!)" << RESET << endl; 
                            nomecolore = "Rosso";
                        }
                        
                        cout << endl << "Colore cambiato con successo! colore selezionato: " << colore(colorazione) << nomecolore << endl;
                        break;
                    case 2:
                        system("CLS");
                        break;
                    default:
                        cout << colore(colorazione) << "\nOperazione selezionata non esistente!\n" << RESET; 
                        break;
                }

                if (menu_impostazioni==0) {
                    continue;
                } else {
                    printf("\n");
                    system("pause");
                }

                break;
            default:
                cout << colore(colorazione) << "\nOperazione selezionata non esistente!\n\n" << RESET; 
                system("pause");
                break;
        }
    }
}