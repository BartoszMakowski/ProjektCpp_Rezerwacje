/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bilet.cpp
 * Author: bartosz
 * 
 * Created on 24 styczeń 2016, 22:05
 */

#include "Bilet.h"

Bilet::Bilet() {
}

Bilet::Bilet(const Bilet& orig) {
}

Bilet::~Bilet() {
}

unsigned int Bilet::GetKlasa() const {
    return klasa_;
}

float Bilet::GetUlga() const {
    return ulga_;
}

int Bilet::GetLiczba_miejsc() const {
    return liczbaMiejsc_;
}

string Bilet::GetData_zakupu() const {
    return dataZakupu_;
}

float Bilet::GetCena() const {
    return cena_;
}

string Bilet::GetData() const {
    return data_;
}

Polaczenie* Bilet::GetP() const {
    return p;
}

unsigned int Bilet::GetId() const {
    return id_;
}

