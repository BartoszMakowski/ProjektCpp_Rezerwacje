/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletLotniczy.cpp
 * Author: bartosz
 * 
 * Created on 24 styczeń 2016, 23:34
 */

#include <stdlib.h>

#include "BiletLotniczy.h"


BiletLotniczy::BiletLotniczy() : Bilet(){
    liczbaSpadochronow_ = rand() % 4;
}

BiletLotniczy::BiletLotniczy(int id, Polaczenie *polacznie, string data, float cena,
        unsigned int liczbaOsob,
        float ulga, unsigned int klasa, unsigned int spadochrony)
            :Bilet(id, polacznie, data, cena, liczbaOsob, ulga, klasa){
    liczbaSpadochronow_ = spadochrony;
}


BiletLotniczy::BiletLotniczy(string skad, string dokad, int id) : Bilet(skad, dokad, id){
    
}

BiletLotniczy::BiletLotniczy(const BiletLotniczy& orig) {
}

BiletLotniczy::~BiletLotniczy() {
}

int BiletLotniczy::GetLiczbaSpadochronow_() const {
    return liczbaSpadochronow_;
}

string BiletLotniczy::GetTyp() {
    return "LOTNICZY";
}

void BiletLotniczy::wyswietl() {
    cout<<endl<<"LOT>> ";
    Bilet::wyswietl();
    cout<<setw(14)<<"SPADOCHRONY: "<<setw(3)<<liczbaSpadochronow_<<" | ";
}

void BiletLotniczy::zapisz(ofstream& wy) {
    wy<<endl<<GetTyp()<<endl;
    Bilet::zapisz(wy);
    wy<<liczbaSpadochronow_;
}



