/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//ManageDelivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "ManageDelivery.h"
#include <iostream>

ManageDelivery::ManageDelivery(vector<Truck<Item, MAX_CAPACITY> > truck, vector<Delivery> delivery, vector<Item> item) : m_truck(truck), m_delivery(delivery), m_item(item)
{
    cout << 8;
    
}


void
ManageDelivery::StartDelivery()
{
    
}


void
ManageDelivery::DeliverItem(int j)
{
    cerr << "ManageDelivery::DeliverItem()" << endl;
}


void
ManageDelivery::DisplayItemLeft()
{
    cerr << "ManageDelivery::DisplayItemLeft()" << endl;
}


