/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Polaczenie.h
 * Author: bartosz
 *
 * Created on 24 styczeń 2016, 21:00
 */

#ifndef POLACZENIE_H
#define POLACZENIE_H
#include <iostream>
#include <string>

using namespace std;


class Polaczenie {
public:
    Polaczenie(string, string);
    Polaczenie(const Polaczenie& orig);
    virtual ~Polaczenie();
    string GetDokad() const;
    string GetSkad() const;
private:
    string skad;
    string dokad;
    string typ;
    

};

#endif /* POLACZENIE_H */

