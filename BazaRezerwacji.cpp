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

using namespace std;

template <class T> class BazaRezerwacji {
public:
    BazaRezerwacji();
    BazaRezerwacji(const BazaRezerwacji& orig);
    virtual ~BazaRezerwacji();
    
    void wyswietlWszystkie();
private:
    multimap<string, T> m;

};

template <class T>
BazaRezerwacji<T>::BazaRezerwacji() {
}

template <class T>
void BazaRezerwacji<T>::wyswietlWszystkie(){
    for (T* i=m.begin(); i<m.end(); i++){
        cout >> *i;
    }
}

template <class T>
BazaRezerwacji<T>::BazaRezerwacji(const BazaRezerwacji& orig) {
}

template <class T>
BazaRezerwacji<T>::~BazaRezerwacji() {
}

