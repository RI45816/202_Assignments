/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Flower.cpp
 *   DATE: Sat Apr 29 17:29:47 2017
 *  DESCR: 
 ***********************************************************************/
#include "Flower.h"
#include <time.h>
#include <string>
#include <iostream>

Flower::Flower() {
}

// Flower constructor
// Create flower object with petals and color defined

Flower::Flower(int numPetals, string color) : m_numPetals(numPetals), m_color(color) {
}

void
Flower::die() {
    SetIsAlive(false);
    cout << "The flower drops its petals" << endl;
}

void
Flower::tick() {
    SetIsDiseased(false);

    int wellOrSick = rand() % 5;
    if (wellOrSick)
        SetSize(GetSize() + 1);
    else
        SetIsDiseased(true);

    if (GetSize() == 5 && GetIsAlive())
        die();
}

ostream &
Flower::operator<<(ostream &os) {
    if (GetIsAlive())
        return os << "Flower (" << (GetSize() < 2 ? "Seedling" : GetSize() == 2 ? "Medium Sized" : "Fully Mature") << ": " << (GetIsAlive() ? "Alive" : "Dead") << " : " << (GetSize() > 3 ? "Flowering" : "Not Harvestable") << " : " << (GetIsDiseased() ? "Diseased" : "Not Diseased") << ")" << endl;
    else
        return os << "Flower(Dead)" << endl;
}


