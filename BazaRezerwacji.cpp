/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BazaRezerwacji.cpp
 * Author: bartosz
 * 
 * Created on 25 styczeń 2016, 00:19
 */

#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <string.h>

#include "Bilet.h"

using namespace std;

template <class T> class BazaRezerwacji {
public:
    BazaRezerwacji(vector<string>,vector<int>);
    BazaRezerwacji(const BazaRezerwacji& orig);
    virtual ~BazaRezerwacji();
    
    void wyswietlWszystkie();
    multimap<string, T> getM() const;
    void dodaj(string, T);
    void wypiszNaglowki();
private:
    multimap<string, T> mm_;
    vector<string> naglowki_;
    vector<int> format_;

};

template <class T>
BazaRezerwacji<T>::BazaRezerwacji(vector <string> naglowki, vector <int> format) {
    naglowki_ = naglowki;
    format_ = format;
}


template <class T>
void BazaRezerwacji<T>::wyswietlWszystkie(){
    wypiszNaglowki();
    typename multimap<string, T>::iterator it;
    for (it = mm_.begin(); it!=mm_.end(); it++){
        cout << it->second.GetId()<< endl;
        
    }
}

template <class T>
multimap<string, T> BazaRezerwacji<T>::getM() const {
    return mm_;
}

template <class T>
BazaRezerwacji<T>::BazaRezerwacji(const BazaRezerwacji& orig) {
}

template <class T>
BazaRezerwacji<T>::~BazaRezerwacji() {
}

template<class T>
void BazaRezerwacji<T>::dodaj(string s, T t) {
    mm_.insert(std::pair<string,T>(s,t));    
}

template<class T>
void BazaRezerwacji<T>::wypiszNaglowki() {
    typename vector<string>::iterator it;
    typename vector<int>::iterator it2;
    it2= format_.begin();
    for(it = naglowki_.begin(); it!=naglowki_.end(); it++){
        cout<< setw(*it2++) << *it;
    }
    cout<<endl;
}

//----------SPECJALIZACJA DLA BILETU----------------------------


template <> class BazaRezerwacji <Bilet> {
public:
    BazaRezerwacji() {

    }
    
    BazaRezerwacji(const BazaRezerwacji& orig){
        
    }
    virtual ~BazaRezerwacji(){
        
    }
    
    void wyswietlWszystkie(){
        cout<<endl<<setw(40)<<"ZAWARTOŚĆ BAZY\n";
        map<int, Bilet*>::iterator it;
//        cout<< "REDDDESegdtrdthskd";
        for (it = mm_.begin(); it!=mm_.end(); it++){
            it->second->wyswietl();
        
        }
}
    multimap<string, Bilet> getM() const;
    
    void dodaj(Bilet *b){
        b->wyswietl();
        mm_.insert(std::pair<int, Bilet*>(b->GetId(),b));
    }
    
    void usun(int id){        
        if (mm_.find(id) != mm_.end()){
            cout<<"\nANULOWANO REZERWACJE: ";
            mm_.at(id)->wyswietl();
            mm_.erase(id);
        }
        else{
            cout<<"\nNIE WIESZ, KOGO CHCESZ OSZUKAC.\nBRAK REZERWACJI O PODANYM NUMERZE.";
        }
    }

private:
    map<int, Bilet*> mm_;
};
