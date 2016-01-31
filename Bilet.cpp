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

#include <vector>
#include <stdlib.h>

#include "Bilet.h"
#include "BiletMorski.h"
#include "BiletLotniczy.h"
#include "BiletLaczony.h"

unsigned int Bilet::ostatnieId_ = 1;

string Bilet::naglowki_[] ={"ID", "SKĄÐ", "DOKĄÐ", "DATA", "CENA", "LICZBA MIEJSC",
    "ULGA", "KLASA"};

int Bilet::format_[] ={3, 5, 5, 10, 6, 3, 4, 2};


Bilet::Bilet(){
    id_ = 10 * ostatnieId_++;
    data_ = generujDate();
    polaczenie_ = new Polaczenie(1);
    liczbaMiejsc_ = 1 + rand() % 5;
    cena_ = rand() % 5001;
    ulga_ = rand() % 101;
    ulga_ /= 100;
//    ulga_= ulga_%2?ulga_:0;
    klasa_ = 1 + rand() % 5;    
}

Bilet::Bilet(Polaczenie *polaczenie, string data, float cena,
        string dataZakupu, unsigned int liczbaOsob,
        float ulga, unsigned int klasa){
    id_ = ostatnieId_++;
    polaczenie_ = polaczenie;
    data_ = data;
    cena_ = cena;
    dataZakupu_ = dataZakupu;
    liczbaMiejsc_ = liczbaOsob;
    ulga_ = ulga;
    klasa_ = klasa;
}

Bilet::Bilet(string skad, string dokad, int id) : Bilet(){
    ostatnieId_--;
    polaczenie_ = new Polaczenie(skad, dokad);
    id_ = id;
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

unsigned int Bilet::GetLiczba_miejsc() const {
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
    return polaczenie_;
}

unsigned int Bilet::GetId() const {
    return id_;
}

//void Bilet::wyswietlNaglowek() {    
//}
//
//string *Bilet::zwrocNaglowki() {
//    
//    return naglowki_;
//}
//
//int *Bilet::zwrocFormat() {
//
//    return format_;
//}

void Bilet::wyswietl() {
    int i;
    for(i=0; i< (sizeof(naglowki_)/sizeof(naglowki_[0])); i++){
        cout<< naglowki_[i]<<": ";
        switch(i){
            case 0:
                cout<<setw(format_[i])<<id_;
                break;
            case 1:
                cout<<setw(format_[i])<<polaczenie_->GetSkad();
                break;
            case 2:
                cout<<setw(format_[i])<<polaczenie_->GetDokad();
                break;
            case 3:
                cout<<setw(format_[i])<<data_;
                break;
            case 4:
                cout<<setw(format_[i])<<cena_;
                break;
            case 5:
                cout<<setw(format_[i])<<liczbaMiejsc_;
                break;
            case 6:
                cout<<setw(format_[i])<<ulga_;
                break;
            case 7:
                cout<<setw(format_[i])<<klasa_;
                break;
        }
        cout<<" | ";
    }
}

void Bilet::wyswietlInfo() {
    cout<<endl<<"   >"<<GetTyp()<<": ";
    for(int i=0; i<3; i++){
        cout<< naglowki_[i]<<": ";
        switch(i){
            case 0:
                cout<<setw(format_[i])<<id_;
                break;
            case 1:
                cout<<setw(format_[i])<<polaczenie_->GetSkad();
                break;
            case 2:
                cout<<setw(format_[i])<<polaczenie_->GetDokad();
                break;
            case 3:
                cout<<setw(format_[7])<<klasa_;
                break;
        }
        cout<<" | ";
    }
    cout<<"KLASA:   "<<klasa_<<" | ";
}


string Bilet::generujDate() {
    char data[11];
    data[0] = 48 + rand()%3;
    data[1] = 48 + rand()%10;
    data[2] = '-';
    data[3] = 48 + rand()%2;
    if(data[3]) data[4] = 48 + rand() %3;
    else data[4] = 48 + rand() %10;
    data[5] = '-';
    data[6] = '2';
    data[7] = '0';
    data[8] =  48 + 1 + rand()%3;
    if(data[9] == '1') data[9] =48 + 6 + rand() % 4;
    else data[9] = 48 + rand() % 10;
    data[10]='\0';
    
    return data;
}

void Bilet::losujBilety(int n, Bilet *b[], int w){
    for(int i=0; i<n; i++ ){
        int k = rand() %3;
        switch(k){
            case 0:{
                b[i] = new BiletMorski;
                break;
            }
            case 1:{
                b[i] = new BiletLotniczy;
                break;
            }
            case 2:{
                b[i] = new BiletLaczony(2 + (rand() % 4));
                break;
            }
        }
        if(w) b[i]->wyswietl();
    }    
}

