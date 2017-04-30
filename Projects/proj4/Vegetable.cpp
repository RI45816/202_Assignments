/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Vegetable.cpp
 *   DATE: Fri Apr 28 20:54:31 2017
 *  DESCR: 
 ***********************************************************************/
#include "Vegetable.h"
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

// Vegetable
// Default constructor for Vegetable class

Vegetable::Vegetable() {
}

// Vegetable
// Constructor that also defines color of fruit

Vegetable::Vegetable(string color) : m_color(color) {

}


// die
// The vegetable dies

void
Vegetable::die() {
    SetIsAlive(false);
}

// harvest
// 

void
Vegetable::harvest() {
    cout << "The vegetable has been harvested." << endl;
    SetSize(6);
}

void
Vegetable::tick() {
    SetIsDiseased(false);

    int wellOrSick = rand() % 5;
    if (GetSize() != 5)
        if (wellOrSick)
            SetSize(GetSize() + 1);
        else
            SetIsDiseased(true);
    else
        harvest();


}

// Output Stream for Vegetable

ostream& Vegetable::operator<<(ostream& os) {
    if (GetSize() > 5)
        return os << "Vegetable: Harvested" << endl;
    else
        return os << "Vegetable (" << (GetSize() < 4 ? "Seedling" : GetSize() == 4 ? "Medium Sized" : "Mature") << " : " << (GetIsAlive() ? "Alive" : "Dead") << " : " << (GetSize() == 5 ? "Harvestable" : "Not Harvestable") << " : " << (GetIsDiseased() ? "Diseased" : "Not Diseased") << ")" << endl;
}
