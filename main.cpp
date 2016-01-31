/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 20:47
 */

#define N 10

#include <stdlib.h>

#include "Polaczenie.h"
#include "Bilet.h"
#include "BazaRezerwacji.cpp"
#include "BiletMorski.h"
#include "BiletLotniczy.h"
#include "BiletLaczony.h"

using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {
    Polaczenie *p1 = new Polaczenie("aaa","bbb");

    BazaRezerwacji<Bilet> mojaBaza;
    Bilet *bilety[N];

//    mojaBaza.wyswietlWszystkie();
    int odp;
    int czy=1;
    
    while(czy){
        cout<<endl<<"\n***BEZPIECZNY I PRRZYJAZNY SYSTEM OBSLUGI REZERWACJI***\n"
                "*****Przepraszamy, wsystkie miejsca w czolgu zostaly juz wykupione. Sprobuj za 25 lat.*****\n"
                "CO CHCESZ ZROBIC?\n"
                "1. DOKONAC REZERWACJI.\n"
                "2. ANULOWAC REZERWACJE.\n"
                "3. WYSWIETLIC ZAWARTOSC BAZY REZERWACJI.\n"
                "COKOLWIEK INNEGO. ZAKONCZYC ZABAWE.\n";
        cin>>odp;
        
        switch(odp) {
            case 1:{
                cout<<"DOSTEPNE BILETY:\n";
                Bilet::losujBilety(N,bilety,1);
                cout<<"\nPODAJ ID WYBRANEGO BILETU.\nID: ";
                cin>>odp;
                odp -= bilety[0]->GetId();
                mojaBaza.dodaj(bilety[odp/10]);
                
                break;
            }
            case 2:{
                cout<<"PODAJ ID REZERWACJI, NUMER LEWEGO BUTA I NAZWISKO PANIENSKIE MATKI.\n"
                        "ZACZNIJ OD ID.\n";
                cin>>odp;
                mojaBaza.usun(odp);
                break;
            }
            
            case 3:{
                mojaBaza.wyswietlWszystkie();
                break;
            }
            default:{
                czy = 0;
                break;
            }
            
        }
    }
    
    cout<<"\nBEZPIECZNEJ PODROZY!";

    return 0;
}

