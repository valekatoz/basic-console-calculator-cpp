#include <stdio.h>  // importo stdio.h
#include <iostream> // importo <iostream> per utilizzare "system("CLS")"
#include <math.h>   // importo <math.h> per utilizzare la funzione "sqrt()"

// provo a usare le funzioni per fare le operazioni
// https://www.w3schools.com/cpp/cpp_function_return.asp

int somma(int a,int b) {        // creo una funzione di nome "somma" con parametri a di tipo int e b di tipo int il ritorno di tipo int
    return a + b;               // ritorno il valore di "a + b"
}

int sottr(int a, int b) {       // creo una funzione di nome "sottr" con parametri a di tipo int e b di tipo int il ritorno di tipo int
    return a - b;               // ritorno il valore di "a - b"
}

int molt(int a, int b) {        // creo una funzione di nome "molt" con parametri a di tipo int e b di tipo int il ritorno di tipo int
    return a * b;               // ritorno il valore di "a * b"
}

int divisione(int a, int b) {   // creo una funzione di nome "divisione" con parametri a di tipo int e b di tipo int il ritorno di tipo int
    return a / b;               // ritorno il valore di "a / b"
}

int radice(int a) {             // creo una funzione di nome "radice" con parametro a di tipo int e il ritorno di tipo int
    return sqrt(a);             // ritorno il valore di "sqrt(a)"
}

int potenza(int a, int b) {     // creo una funzione di nome "potenza" con parametro a di tipo int e b di tipo int il ritorno di tipo int
    int i,x=a;                  // inizializzo le variabili
    for (i=1;i<b;i++) {         // ciclo for
        a = a * x;              // per ogni giro di ciclo moltiplico a per se stesso e per x, es. 9 = 9*3, 3^3
    }
    return a;                   // ritorno il valore di a
}

int media(int a, int b) {       // creo una funzione di nome "media" con parametro a di tipo int e b di tipo int il ritorno di tipo int
    int i,totale=0;             // inizializzo le variabili
    for (i=1;i<=a;i++) {        // ciclo for                                 
        printf("Inserisci il numero %d -> ",i);   // output richiesta di b           
        scanf("%d",&b);                           // input richiesta di b
        totale += b;                              // totale = totale + b
    }
    return totale;                                // ritorno il valore di total                    
}

int main() {
    int selezione;         // inizializzo la variabile INT "selezione"
    int a,b,risultato=0;   // inizializzo alcune variabili
    int menuzero = 1;

    menu:

    menuzero = 1;   // inizializzo il flag per tornare al menu

    system("CLS");      // pulisco la console

    /* <rosso>
       ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ 
      / __| /_\ | |  / __/ _ \| |    /_\_   _| _ \_ _/ __| __|
     | (__ / _ \| |_| (_| (_) | |__ / _ \| | |   /| | (__| _| 
      \___/_/ \_\____\___\___/|____/_/ \_\_| |_|_\___\___|___|

       <reset>                                                   
    */

    printf("\033[0;31m  ___   _   _    ___ ___  _      _ _____ ___ ___ ___ ___ \n");   // BANNER
    printf(" / __| /_\\ | |  / __/ _ \\| |    /_\\_   _| _ \\_ _/ __| __|\n");         // BANNER
    printf("| (__ / _ \\| |_| (_| (_) | |__ / _ \\| | |   /| | (__| _| \n");           // BANNER
    printf(" \\___/_/ \\_\\____\\___\\___/|____/_/ \\_\\_| |_|_\\___\\___|___|\n");    // BANNER
    printf("                                                         \033[0m\n");      // BANNER

    printf("[1] - Addizione\n");            // opzione 1
    printf("[2] - Sottrazione\n");          // opzione 2
    printf("[3] - Moltiplicazione\n");      // opzione 3
    printf("[4] - Divisione\n");            // opzione 4
    printf("[5] - Radice quadrata\n");      // opzione 5
    printf("[6] - Potenza\n");              // opzione 6
    printf("[7] - Media\n");                // opzione 7

    printf("\n\033[33mATTENZIONE:\033[0m tutti i valori sono numeri interi\n\n");
              // ↑ codice di colore in escape ansi (giallo) - (reset)
              //https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c

    printf("Seleziona che operazione vuoi fare -> "); // output richiesta selezione
    scanf("%d",&selezione);                           // input della selezione

    if (selezione == 1) {

        system("CLS");                                // pulisco la console

        printf("[+] ADDIZIONE\n");                    // operazione selezionata

        printf("\nInserisci il primo numero -> ");    // richiesta di a
        scanf("%d",&a);                               // input richiesta di a
        printf("Inserisci il secondo numero -> ");    // richiesta di b
        scanf("%d",&b);                               // input richiesta di b

        risultato = somma(a,b);

        printf("\nIl risultato della (Addizione) tra %d e %d e': %d\n",a,b,risultato); // stampo il risultato e i valori

    } else if (selezione == 2) {

        system("CLS");                                // pulisco la console

        printf("[+] SOTTRAZIONE\n");                  // operazione selezionata

        printf("\nInserisci il primo numero -> ");    // richiesta di a
        scanf("%d",&a);                               // input richiesta di a
        printf("Inserisci il secondo numero -> ");    // richiesta di b
        scanf("%d",&b);                               // input richiesta di b

        risultato = sottr(a,b);

        printf("\nIl risultato della (Sottrazione) tra %d e %d e': %d\n",a,b,risultato); // stampo il risultato e i valori

    } else if (selezione == 3) {

        system("CLS");                                // pulisco la console

        printf("[+] MOLTIPLICAZIONE\n");              // operazione selezionata

        printf("\nInserisci il primo numero -> ");    // richiesta di a
        scanf("%d",&a);                               // input richiesta di a
        printf("Inserisci il secondo numero -> ");    // richiesta di b
        scanf("%d",&b);                               // input richiesta di b

        risultato = molt(a,b);

        printf("\nIl risultato della (Moltiplicazione) tra %d e %d e': %d\n",a,b,risultato); // stampo il risultato e i valori

    } else if (selezione == 4) {

        system("CLS");                                // pulisco la console

        printf("[+] DIVISIONE\n");                    // operazione selezionata

        printf("\nInserisci il primo numero -> ");    // richiesta di a
        scanf("%d",&a);                               // input richiesta di a
        printf("Inserisci il secondo numero -> ");    // richiesta di b
        scanf("%d",&b);                               // input richiesta di b

        risultato = divisione(a,b);

        printf("\nIl risultato della (Divisione) tra %d e %d e': %d\n",a,b,risultato); // stampo il risultato e i valori

    } else if (selezione == 5) {

        system("CLS");                                // pulisco la console

        printf("[+] RADICE QUADRATA\n");              // operazione selezionata

        printf("\nInserisci il numero -> ");          // richiesta di a
        scanf("%d",&a);                               // input richiesta di a

        risultato = radice(a);                        // utilizzo la funzione radice() per dare valore alla variabile "risultato", torna un valore di sqrt(a)

        printf("\nIl risultato della (Radice quadrata) di %d e': %d\n",a,risultato); // stampo il risultato e i valori
        
    } else if (selezione == 6) {

        system("CLS");                                // pulisco la console

        printf("[+] POTENZA\n");                      // operazione selezionata

        printf("\nInserisci il numero -> ");          // richiesta di a
        scanf("%d",&a);                               // input richiesta di a
        printf("Inserisci l'esponente -> ");          // richiesta di b
        scanf("%d",&b);                               // input richiesta di b

        risultato = potenza(a,b);                     // utilizzo la funzione potenza() per dare valore alla variabile "risultato"

        printf("\nIl risultato della (Potenza) di %d elevato a %d e': %d\n",a,b,risultato); // stampo il risultato e i valori

    } else if (selezione == 7) {

        system("CLS");                                                 // pulisco la console

        printf("[+] MEDIA\n");                                         // operazione selezionata

        printf("\nDi quanti numeri vuoi fare la media? -> ");          // richiesta di a
        scanf("%d",&a);                                                // input di a

        risultato = media(a,b);                                        // utilizzando la funzione media calcolo la somma
        risultato /= a;                                                // divido la somma dei numeri per quanti numeri ci sono e trovo la media

        printf("\nla media e': %d\n",risultato);                       // stampo il risultato

    } else {

        goto menu; // se selezione è diversa dai tipi di selezione disponibili torno al menu

    }

    printf("\nScrivi '0' per tornare al menu -> ");         // ritorno al menu
    scanf("%d",&menuzero);                                  // input del ritorno al menu

    if (menuzero == 0) {                                    // se menuzero è = 0 torno indietro
        goto menu;                                          // torno al menu
    } else {                                                // altrimenti
        while (menuzero != 0) {                             // finche menu è diverso da 0
            printf("Scrivi '0' per tornare al menu -> ");   // ridico di scrivere 0
            scanf("%d",&menuzero);                          // chiedo l'input di menuzero
        }
        goto menu;                                          // esce dal loop quindi menuzero = 0 e posso tornare al menu
    }
    
}