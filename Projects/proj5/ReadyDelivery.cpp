/***********************************************************************
 * AUTHOR: Uzoma Uwanamodo
 *   FILE: .//ReadyDelivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "ReadyDelivery.h"
#include <iostream>
#include <fstream>

using namespace std;

ReadyDelivery::ReadyDelivery() {
    cerr << "ReadyDelivery::ReadyDelivery()" << endl;
}

ReadyDelivery::ReadyDelivery(string truckFile, string deliveryFile, string itemFile) : m_truckFile(truckFile), m_deliveryFile(deliveryFile), m_itemFile(itemFile) {
    LoadItem();
    LoadDelivery();
    LoadTruck();
}

// LoadTruck
// Load the Truck

void
ReadyDelivery::LoadTruck() {


    // Open the truck file
    ifstream file(m_truckFile.c_str());

    // Load the truck file
    stringstream ss; // Stream variable
    ss << file.rdbuf(); // Read the file buffer

    // Add the trucks

    // Temp variables
    string name;
    int capacity;

    while (ss >> name >> capacity)
        m_truck.push_back(Truck<Item, MAX_CAPACITY>(name, capacity));


}

// LoadDelivery
// Load the delivery vector

void
ReadyDelivery::LoadDelivery() {
    // Open the item file
    ifstream file(m_deliveryFile.c_str());

    // Load the item file
    stringstream ss; // Stream variable
    ss << file.rdbuf(); // Read the file buffer

    // Add the deliveries

    // Temp variables
    string name;
    int numItems;
    int RTMinute;

    while (ss >> name >> numItems >> RTMinute)
        m_delivery.push_back(Delivery(name, numItems, RTMinute));


}


// LoadItem
// Load the items

void
ReadyDelivery::LoadItem() {
    // Open the item file
    ifstream file(m_itemFile.c_str());

    // Load the item file
    stringstream ss; // Stream variable
    ss << file.rdbuf(); // Read the file buffer

    // Add the items

    // Temp variables
    string name;
    float weight;
    
    while (ss >> name >> weight)
        m_item.push_back(Item(name, weight));
    
//    file.close();
}

// GetItem
// Getter for the Items vector

vector<Item> ReadyDelivery::GetItem() {
    return m_item;
}

// GetDelivery
// Getter for the Deliveries vector

vector<Delivery> ReadyDelivery::GetDelivery() {
    return m_delivery;
}

// GetTruck
// Getter for the Trucks vector

vector<Truck<Item, MAX_CAPACITY> > ReadyDelivery::GetTruck() {
    return m_truck;
}




