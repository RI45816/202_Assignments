/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    driver.cpp
 ** Project: CMSC 202 proj4, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    00/28/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the main driver program for proj4.
 ** 
 ** 
 ** 
 ** 
 *********************************************/

#include <cstdlib>
#include <iostream>
#include <string>

#include "Plant.h"
#include "Vegetable.h"
#include "Flower.h"
#include "Tree.h"

using namespace std;

/*
 * 
 */

//template <class T>

ostream& operator<<(ostream &out, Plant& t) {
    return t << out;
}

int main(int argc, char** argv) {

    Vegetable v;
    Flower f;
    Tree t;

    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
        v.tick();
        cout << v.GetSize() << " " << v;
        f.tick();
        cout << f.GetSize() << " " << f;
        t.tick();
        cout << t.GetSize() << " " << t;
    }
    return 0;
}

