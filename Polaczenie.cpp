/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Polaczenie.cpp
 * Author: bartosz
 * 
 * Created on 24 styczeń 2016, 21:00
 */

#include <stdlib.h>

#include "Polaczenie.h"

Polaczenie::Polaczenie(){
    
}

Polaczenie::Polaczenie(int i){
    skad = generujNazwe();
    dokad = generujNazwe();
}

Polaczenie::Polaczenie(string s, string d) {
    skad = s;
    dokad = d;       
}

Polaczenie::Polaczenie(const Polaczenie& orig) {
}

Polaczenie::~Polaczenie() {
}

string Polaczenie::GetDokad() const {
    return dokad;
}

string Polaczenie::GetSkad() const {
    return skad;
}

string Polaczenie::generujNazwe() {
    static const char litery[] = "abcdefghijklmnopqrstuvwxyz";
    int n = 3;
    char nazwa[n+1];
    for (int i=0; i<n; i++) {
        nazwa[i] = litery[rand() % (sizeof(litery) - 1)] - 32;
    }
    nazwa[n] = '\0';
    return nazwa;   
}
