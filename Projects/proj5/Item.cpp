/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Item.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Item.h"
#include <iostream>

Item::Item() {

}

// Item
// Initialize item with the name and weight values

Item::Item(string iName, float iWeight) : m_name(iName), m_weight(iWeight) {
}

// GetWeight
// Return the weight of the item

float Item::GetWeight() const {
    return m_weight;
}

// GetName
// Return the name of the item

string Item::GetName() const {
    return m_name;
}