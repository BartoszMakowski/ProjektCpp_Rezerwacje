/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BiletLaczony.h
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 23:36
 */

#ifndef BILETLACZONY_H
#define BILETLACZONY_H

#include "Bilet.h"
#include <vector>


class BiletLaczony : public Bilet {
public:
    BiletLaczony();
    BiletLaczony(int);
    BiletLaczony(const BiletLaczony& orig);
    virtual ~BiletLaczony();
    int GetCzasPrzesiadki_() const;
    virtual string GetTyp();
    virtual void wyswietl();

private:
    int czasPrzesiadki_;
    vector <Bilet*> trasa_;
    int n_;
};

#endif /* BILETLACZONY_H */

