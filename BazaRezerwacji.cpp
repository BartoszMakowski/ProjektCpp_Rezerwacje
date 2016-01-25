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
    multimap<string, T> getM() const;
    void dodaj(string, T);
private:
    multimap<string, T> m;

};

template <class T>
BazaRezerwacji<T>::BazaRezerwacji() {
}

template <class T>
void BazaRezerwacji<T>::wyswietlWszystkie(){
    typename multimap<string, T>::iterator it;
    for (it = m.begin(); it!=m.end(); ++it){
        cout << it->first << endl;           
    }
}

template <class T>
multimap<string, T> BazaRezerwacji<T>::getM() const {
    return m;
}

template <class T>
BazaRezerwacji<T>::BazaRezerwacji(const BazaRezerwacji& orig) {
}

template <class T>
BazaRezerwacji<T>::~BazaRezerwacji() {
}

template<class T>
void BazaRezerwacji<T>::dodaj(string s, T t) {
    m.insert(std::pair<string,T>(s,t));
}


