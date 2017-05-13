/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//ReadyDelivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "ReadyDelivery.h"
#include <iostream>

ReadyDelivery::ReadyDelivery()
{
    cerr << "ReadyDelivery::ReadyDelivery()" << endl;
}


ReadyDelivery::ReadyDelivery(string truckFile, string deliveryFile, string itemFile)
{
    cerr << "ReadyDelivery::ReadyDelivery()" << endl;
}


void
ReadyDelivery::LoadTruck()
{
    cerr << "ReadyDelivery::LoadTruck()" << endl;
}


void
ReadyDelivery::LoadDelivery()
{
    cerr << "ReadyDelivery::LoadDelivery()" << endl;
}


void
ReadyDelivery::LoadItem()
{
    cerr << "ReadyDelivery::LoadItem()" << endl;
}


vector<Truck<Item, MAX_CAPACITY>> &
ReadyDelivery::GetTruck()
{
    cerr << "ReadyDelivery::GetTruck()" << endl;
}


vector<Delivery>
ReadyDelivery::GetDelivery()
{
    cerr << "ReadyDelivery::GetDelivery()" << endl;
}


vector<Item>
ReadyDelivery::GetItem()
{
    cerr << "ReadyDelivery::GetItem()" << endl;
}


