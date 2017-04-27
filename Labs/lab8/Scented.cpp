/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Scented.cpp
 ** Project: CMSC 202 lab8, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    04/05/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the definition for the Scented class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/
#include <iostream>
#include "Scented.h"

using namespace std;

Scented::Scented(string name, double burnRate, string flavor) : Candle(name, burnRate), m_flavor(flavor){
}

string Scented::GetFlavor() const {
    return m_flavor;
}

void Scented::SetFlavor(string flavor) {
    m_flavor = flavor;
}

void Scented::SetLit(bool lit) {
    cout << "The delicious smell of "<< m_flavor <<" wafts from the scented candle." << endl;
    m_isLit = lit;
}
