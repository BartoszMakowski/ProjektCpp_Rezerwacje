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

class BiletLotniczy {
public:
    BiletLotniczy();
    BiletLotniczy(const BiletLotniczy& orig);
    virtual ~BiletLotniczy();
    int GetLiczbaSpadochronow_() const;
private:
    int liczbaSpadochronow_;

};

#endif /* BILETLOTNICZY_H */

