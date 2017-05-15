/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//ManageDelivery.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "ManageDelivery.h"
#include <iostream>

using namespace std;

ManageDelivery::ManageDelivery(vector<Truck<Item, MAX_CAPACITY> > truck, vector<Delivery> delivery, vector<Item> item) : m_truck(truck), m_delivery(delivery), m_item(item) {
    cout << "Trucks Loaded: " << m_truck.size() << endl;
    //    cout << m_truck[0].isFull() <<    m_truck[0].isEmpty();
    cout << "Deliveries Loaded: " << m_delivery.size() << endl;
    cout << "Items Loaded: " << m_item.size() << endl;
    cout << "Start Time: 0" << endl;
    StartDelivery();
}

void
ManageDelivery::StartDelivery() {

    // Add deliveries to truck
    //            truckCapacity = m_truck[0].GetCapacity(); // Store truck capacity
    int numDeliveries = m_delivery.size();
    for (int capacity = 0, truck = 0, i = 0, truckCapacity = m_truck[truck].GetCapacity(); i < numDeliveries;) {
        if (capacity + m_delivery[i].GetNumItem() <= truckCapacity) {
            m_truck[truck].AddDelivery(m_delivery[i]);
            capacity += m_delivery[i++].GetNumItem();
        } else {
            truckCapacity = m_truck[truck++].GetCapacity();
            capacity = 0;
        }
    }

    // Load items onto the truck
    
    int itemIndex = 0;
    
    cout << "\n*****Loading Truck (" << m_truck[0].GetName() << ")*****" << endl;
    for (int delivery=0; delivery < numDeliveries; delivery++)
        for (int i=0; i<m_delivery[i].GetNumItem();i++,itemIndex++){
        m_truck[0].AddItem(m_item[itemIndex]);
        cout << m_item[itemIndex].GetName() << " loaded into " << m_truck[0].GetName() << endl;
    }

    cout << "\n**Truck Name: " << m_truck[0].GetName() << "**" << endl;

    // Add deliveries to the truck

    //            cout << "***********Delivery " << i + 1 << "*************" << endl;
}

void
ManageDelivery::DeliverItem(int j) {

}

void
ManageDelivery::DisplayItemLeft() {
    cerr << "ManageDelivery::DisplayItemLeft()" << endl;
}


