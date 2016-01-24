/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bilet.h
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 22:05
 */

#ifndef BILET_H
#define BILET_H

#include "Polaczenie.h"


class Bilet {
public:
    Bilet();
    Bilet(const Bilet& orig);
    virtual ~Bilet();
    unsigned int GetKlasa() const;
    float GetUlga() const;
    int GetLiczba_miejsc() const;
    string GetData_zakupu() const;
    float GetCena() const;
    string GetData() const;
    Polaczenie* GetP() const;
    unsigned int GetId() const;
private:
    unsigned int id_;
    Polaczenie *p;
    string data_;
    float cena_;
    string dataZakupu_;
    int liczbaMiejsc_;
    float ulga_;
    unsigned int klasa_;    
};

#endif /* BILET_H */

