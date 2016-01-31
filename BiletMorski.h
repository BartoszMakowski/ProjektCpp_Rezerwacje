/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletMorski.h
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 22:43
 */

#ifndef BILETMORSKI_H
#define BILETMORSKI_H

#include "Bilet.h"


class BiletMorski : public Bilet {
public:
    BiletMorski();
    BiletMorski(string, string, int);
    BiletMorski(int, Polaczenie*, string, float, unsigned int,float, unsigned int, unsigned int);    
    BiletMorski(const BiletMorski& orig);
    virtual ~BiletMorski();
    unsigned int GetLiczbaSzalup_() const;
    virtual string GetTyp();
    virtual void wyswietl();
    virtual void zapisz(ofstream&);

private:
    unsigned int liczbaSzalup_;

};

#endif /* BILETMORSKI_H */

