#include <iostream>
#include <string>
#include "interazione.cpp"

using namespace std;

int main(){
bool running = true;                            //variabile che serve a far andare avanti il programma
    string output;                              //stringa in cui vado ad immagazzinare il tastierino per poi chedere in input il tasto
    output += "inserisci 3 per terminare il programma o il numero relativo al tasto dell'ascensore:\n";
    output += "0)\tpiano terra\n";
    output += "1)\t1 piano\n";
    output += "2)\t2 piano\n";                      //assegnazione della stringa
    int ascensore = 0;                              //dichiarazione e inizializzazione di una variabile con cui indico lo stato dell'ascensore
    int scelta = 0;                                 //dichiarazione e inizializzazione di una variabile con cui indico il tasto che viene premuto
    while (running){                                //ciclo per far andare avanti il programma fino alla chiusura da parte dell'utente
        if(scelta == ascensore){                    //if che controlla se l'ascensore è al piano desiderato
            scelta = input(output);                 //se l'ascensore è arrivato al piano desiderato chiedo in che piano vuole andare adesso
        }                                           //se l'ascensore non è arrivato al piano desiderato mantengo il vecchio stato per il piano scelto
        switch(scelta){                             //uno switch per fare un'operazione differente in base al piano in cui si vuole andare
            case 0:     //voglio andare al piano terra
                if(ascensore == 0){
                    //se sono al piano terra resto fermo perchè sono già arrivato
                    cout<<"resto fermo" << endl;
                }else if(ascensore == 1){
                    //se sono al primo piano vado al piano terra
                    cout<<"vado al piano terra"<<endl;
                    ascensore = 0;
                }else if(ascensore == 2){
                    //se sono al secondo piano vado al primo piano
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else{
                    //se non è vero niente delle precedenti opzioni vuol dire che è presente un errore (non devo mai arrivare a questo punto)
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
            break;
            case 1:     //voglio andare al primo piano
                if(ascensore == 0){
                    //se sono al piano terra vado al primo piano
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else if(ascensore == 1){
                    //se sono al primo piano resto fermo perchè sono già arrivato
                    cout<<"resto fermo"<<endl;
                }else if(ascensore == 2){
                    //se sono al secondo piano vado al primo piano
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else{
                    //se non è vero niente delle precedenti opzioni vuol dire che è presente un errore (non devo mai arrivare a questo punto)
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
            break;
            case 2:     //voglio andare al secondo piano
                if(ascensore == 0){
                    //se sono al piano terra vado al primo piano
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else if(ascensore == 1){
                    //se sono al primo piano vado al secondo piano
                    cout<<"vado al secondo piano"<<endl;
                    ascensore = 2;
                }else if(ascensore == 2){
                    //se sono al secondo piano resto fermo perchè sono già arrivato
                    cout<<"resto fermo"<<endl;
                }else{
                    //se non è vero niente delle precedenti opzioni vuol dire che è presente un errore (non devo mai arrivare a questo punto)
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
            break;
            case 3:     //voglio terminare il programma
                running = false;
            break;
        }
        if(scelta != 3)                         //comunico all'utente il piano a cui si trova e a che piano vuole andare (equivalente di led a segmenti e pulsante luminoso)
            cout<<"sono al piano "<<ascensore<<" e devo andare al piano "<<scelta<<endl;
    }
    cout<<"ho terminato il programma"<<endl;                //dico all'utente che è uscito dal programma
}