/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Scented.h
 ** Project: CMSC 202 lab8, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    04/05/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the header for the Scented class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/

#ifndef SCENTED_H
#define SCENTED_H

#include <string>
#include <iostream>
#include "Candle.h"
using namespace std;

class Scented : public Candle {
public:
    Scented(string name, double burnRate, string flavor);


    void SetFlavor(string flavor);

    string GetFlavor() const;

    void SetLit(bool lit);

private:
    string m_flavor;
};

#endif /* SCENTED_H */

