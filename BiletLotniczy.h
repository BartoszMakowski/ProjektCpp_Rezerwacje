/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletLotniczy.h
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 23:34
 */

#ifndef BILETLOTNICZY_H
#define BILETLOTNICZY_H

#include "Bilet.h"


class BiletLotniczy : public Bilet {
public:
    BiletLotniczy();
    BiletLotniczy(int, Polaczenie*, string, float, unsigned int,float, unsigned int, unsigned int);
    BiletLotniczy(string, string, int);
    BiletLotniczy(const BiletLotniczy& orig);
    virtual ~BiletLotniczy();
    int GetLiczbaSpadochronow_() const;
    virtual string GetTyp();
    virtual void zapisz(ofstream&);
    virtual void wyswietl();

private:
    int liczbaSpadochronow_;

};

#endif /* BILETLOTNICZY_H */

