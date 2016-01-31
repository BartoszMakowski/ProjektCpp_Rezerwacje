/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletLaczony.cpp
 * Author: bartosz
 * 
 * Created on 24 styczeń 2016, 23:36
 */

#include <stdlib.h>

#include "BiletLaczony.h"
#include "BiletMorski.h"
#include "BiletLotniczy.h"

BiletLaczony::BiletLaczony() {

}



BiletLaczony::BiletLaczony(int n) : Bilet() {
//    Bilet *trasa_[n];
    trasa_.push_back(new BiletMorski(GetP()->GetSkad(), GetP()->generujNazwe(), GetId() +1));
    int i;
    for(i=1; i<n-1; i++){
        if(rand() % 2){
            trasa_.push_back(new BiletMorski(trasa_[i-1]->GetP()->GetDokad(), GetP()->generujNazwe(), this->GetId() + i+1));
        }
        else{
            trasa_.push_back(new BiletLotniczy(trasa_[i-1]->GetP()->GetDokad(), GetP()->generujNazwe(), this->GetId() + i+1));
        }
    }
    
    if(rand() % 2){
            trasa_.push_back(new BiletMorski(trasa_[i-1]->GetP()->GetDokad(), GetP()->GetDokad(), this->GetId() + i+1));
        }
        else{
            trasa_.push_back(new BiletLotniczy(trasa_[i-1]->GetP()->GetDokad(), GetP()->GetDokad(), this->GetId() + i+1));
        }
    n_ = n;
}

BiletLaczony::BiletLaczony(const BiletLaczony& orig) {
}

BiletLaczony::~BiletLaczony() {
}

int BiletLaczony::GetCzasPrzesiadki_() const {
    return czasPrzesiadki_;
}

string BiletLaczony::GetTyp() {
    return "LACZONY";
}

void BiletLaczony::wyswietl() {
    cout<<endl;
    for(int i=0; i<20; i++){        
        cout<<"¨";
    }
    cout<<" BILET LACZONY: ";
    for(int i=0; i<20; i++){        
        cout<<"¨";
    }
    
    
    cout<< "\nLAC>> ID: "<<GetId()<<" | Z: "<<GetP()->GetSkad() << " | DO: "<<GetP()->GetDokad() << " | DATA: "<<GetData()<<" | CENA: "<<GetCena()*0.8*n_<<" | ";
     for(int i=0; i<20; i++){        
        cout<<"@";
    }
    
    for(int i=0; i<n_; i++){
        trasa_[i]->wyswietlInfo();
    }
    
    
    cout<<endl;
    for(int i=0; i<50; i++){        
        cout<<"¨";
    }
}

