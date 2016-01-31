/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletMorski.cpp
 * Author: bartosz
 * 
 * Created on 24 styczeń 2016, 22:43
 */

#include <stdlib.h>

#include "BiletMorski.h"


BiletMorski::~BiletMorski() {

}

BiletMorski::BiletMorski(int id, Polaczenie *polacznie, string data, float cena,
        unsigned int liczbaOsob,
        float ulga, unsigned int klasa, unsigned int szalupy)
            :Bilet(id, polacznie, data, cena, liczbaOsob, ulga, klasa) {
       
    liczbaSzalup_ = szalupy;
}

BiletMorski::BiletMorski(const BiletMorski& orig) {
}

BiletMorski::BiletMorski() : Bilet() {
    liczbaSzalup_ = random() % 5;
}

BiletMorski::BiletMorski(string skad, string dokad, int id) : Bilet(skad, dokad, id){
    
}

unsigned int BiletMorski::GetLiczbaSzalup_() const {
    return liczbaSzalup_;
}

string BiletMorski::GetTyp() {
    return "MORSKI";
}

void BiletMorski::wyswietl() {
    cout<<endl<<"MOR>> ";
    Bilet::wyswietl();
    cout<<setw(14)<<"SZALUPY RAT.: "<<setw(3)<<liczbaSzalup_<<" | ";
}

void BiletMorski::zapisz(ofstream& wy) {
    wy<<endl<<GetTyp()<<endl;
    Bilet::zapisz(wy);
    wy<< liczbaSzalup_;
}




