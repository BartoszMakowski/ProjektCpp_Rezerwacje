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

#include "Polaczenie.h"

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

