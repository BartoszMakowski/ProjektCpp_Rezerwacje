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
    BiletMorski(const BiletMorski& orig);
    virtual ~BiletMorski();
    unsigned int GetLiczbaSzalup_() const;
private:
    unsigned int liczbaSzalup_;

};

#endif /* BILETMORSKI_H */

