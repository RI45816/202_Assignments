/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Delivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Delivery.h"
#include <iostream>

Delivery::Delivery() {
}

Delivery::Delivery(string name, int numItem, int rtMinute) : m_name(name), m_numItem(numItem), m_rtMinute(rtMinute) {
}

// Return the round trip time
int Delivery::GetRTMinute() const {
    return m_rtMinute;
}

// Return the number of items
int Delivery::GetNumItem() const {
    return m_numItem;
}

// Return the name of the customer
string Delivery::GetName() const {
    return m_name;
}

