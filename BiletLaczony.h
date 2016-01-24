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

class BiletLaczony {
public:
    BiletLaczony();
    BiletLaczony(const BiletLaczony& orig);
    virtual ~BiletLaczony();
    int GetCzasPrzesiadki_() const;
private:
    int czasPrzesiadki_;
};

#endif /* BILETLACZONY_H */

