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
#include <iomanip>
#include <vector>


class Bilet {
public:
    Bilet();
    Bilet(string, string, int);
    Bilet(Polaczenie*, string, float, string, unsigned int,float, unsigned int);
    Bilet(const Bilet& orig);
    virtual ~Bilet();
    unsigned int GetKlasa() const;
    float GetUlga() const;
    unsigned int GetLiczba_miejsc() const;
    string GetData_zakupu() const;
    float GetCena() const;
    string GetData() const;
    Polaczenie* GetP() const;
    unsigned int GetId() const;
    virtual string GetTyp() = 0;
    static string generujDate();
//    virtual void wyswietlNaglowek();
//    string *zwrocNaglowki();
//    int* zwrocFormat();

    virtual void wyswietl();
    virtual void wyswietlInfo();
    static void losujBilety(int, Bilet *b[], int);
private:
    static unsigned int ostatnieId_;
    unsigned int id_;
    Polaczenie* polaczenie_;
    string data_;
    float cena_;
    string dataZakupu_;
    unsigned int liczbaMiejsc_;
    float ulga_;
    unsigned int klasa_;   
    static int format_[];
    static string naglowki_[];
};

#endif /* BILET_H */

