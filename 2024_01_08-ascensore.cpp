#include <iostream>
#include <string>
#include "interazione.cpp"

using namespace std;

int main(){
    bool running = true;
    string output;
    output += "inserisci 3 per terminare il programma o il numero relativo al tasto dell'ascensore:\n";
    output += "0)\tpiano terra\n";
    output += "1)\t1 piano\n";
    output += "2)\t2 piano\n";
    int ascensore = 0;
    int scelta = 0;
    while (running){
        if(scelta == ascensore){
            scelta = input(output);
        }
        switch(scelta){
            case 0:
                if(ascensore == 0){
                    cout<<"resto fermo" << endl;
                }else if(ascensore == 1){
                    cout<<"vado al piano terra"<<endl;
                    ascensore = 0;
                }else if(ascensore == 2){
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else{
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
                break;
            case 1:
                if(ascensore == 0){
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else if(ascensore == 1){
                    cout<<"resto fermo"<<endl;
                }else if(ascensore == 2){
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else{
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
                break;
            case 2:
                if(ascensore == 0){
                    cout<<"vado al primo piano"<<endl;
                    ascensore = 1;
                }else if(ascensore == 1){
                    cout<<"vado al secondo piano"<<endl;
                    ascensore = 2;
                }else if(ascensore == 2){
                    cout<<"resto fermo"<<endl;
                }else{
                    cout<<"ERRORE: sono al piano "<<ascensore<<"e devo andare al piano "<<scelta<<"il che non è previsto"<<endl;
                }
                break;
            case 3:
                running = false;
                break;
        }
        if(scelta != 3)
            cout<<"sono al piano "<<ascensore<<" e devo andare al piano "<<scelta<<endl;
    }
    cout<<"ho terminato il programma"<<endl;
}