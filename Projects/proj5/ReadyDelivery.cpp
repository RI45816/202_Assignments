/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//ReadyDelivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "ReadyDelivery.h"
#include <iostream>
#include <fstream>

using namespace std;

ReadyDelivery::ReadyDelivery()
{
    cerr << "ReadyDelivery::ReadyDelivery()" << endl;
}


ReadyDelivery::ReadyDelivery(string truckFile, string deliveryFile, string itemFile) : m_truckFile(truckFile), m_deliveryFile(deliveryFile), m_itemFile(itemFile)
{
    LoadItem();
}


void
ReadyDelivery::LoadTruck()
{
    // Open the truck file
    ifstream file(m_truckFile.c_str());
    string line;
    
//    while (getline(file,line))
//        m_truck()
}


void
ReadyDelivery::LoadDelivery()
{
    cerr << "ReadyDelivery::LoadDelivery()" << endl;
}


// LoadItem
// Load the items
void
ReadyDelivery::LoadItem()
{
    // Open the truck file
    ifstream file(m_itemFile.c_str());
    string line;
    
    while (getline(file,line))
        Split(line);
    
    
}

// Split
// Split the string into an array

string* ReadyDelivery::Split(string s) {
    static string arr[3];
    
    int pos = 0;
    int index = 0;
   
    while (~(pos=s.find("    ",pos))) {
    cout << pos;
    arr[index++] = s.substr(0,pos);
    cout << arr[index-1];
    s=s.substr(pos);
    cout << s;
    }
    arr[index++] = s;
    return arr;
//do
//   {
//    pos = s.find("    ",pos);
//        
//    }
//    while (pos != string::npos)
}

vector<Item> ReadyDelivery::GetItem() {
    return m_item;
}

vector<Delivery> ReadyDelivery::GetDelivery() {
    return m_delivery;
}

vector<Truck<Item, MAX_CAPACITY> > ReadyDelivery::GetTruck() {
    return m_truck;
}




