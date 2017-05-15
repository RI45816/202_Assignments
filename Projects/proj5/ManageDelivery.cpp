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
    cout << "Deliveries Loaded: " << m_delivery.size() << endl;
    cout << "Items Loaded: " << m_item.size() << endl;
    cout << "Start Time: 0" << endl;
    StartDelivery();
    DisplayItemLeft();
}

void
ManageDelivery::StartDelivery() {


    int numTrucks = m_truck.size();
    Truck<Item, MAX_CAPACITY> * t;
    
    // Continous loop through all the trucks
    
    
    // Add deliveries to struck until maximum capacity reached
    for (int truck = 0, truckCapacity = m_truck[truck].GetCapacity(); !m_delivery.empty(); truck++, truck %= numTrucks) {
        t = &m_truck[truck];
        for (int capacity = 0, i = 0, numDeliveries = m_delivery.size(); capacity + m_delivery[i].GetNumItem() <= truckCapacity && i < numDeliveries; capacity += m_delivery[i++].GetNumItem())
            t->AddDelivery(m_delivery[i]);

        // Load items to the deliveries
        int numDeliveriesinTruck = t->GetDelivery().size();
        cout << "\n*****Loading Truck (" << t->GetName() << ")*****" << endl;
        for (int delivery = 0; delivery < numDeliveriesinTruck; delivery++)
            for (int i = 0; i < t->GetDeliveryAt(delivery).GetNumItem(); i++) {
                t->AddItem(m_item[0]);
                cout << m_item[0].GetName() << " loaded into " << t->GetName() << endl;
                m_item.erase(m_item.begin());
            }
        
        // Deliver the deliveries
        t->SetTime(10);
        cout << "\n**Truck Name: " << t->GetName() << "**" << endl;
        DeliverItem(truck);
    }
}

void
ManageDelivery::DeliverItem(int j) {
    Truck<Item, MAX_CAPACITY> * deliveryTruck = &m_truck[j];
    int numDeliveriesinTruck = deliveryTruck->GetDelivery().size();
    for (int i = 0; i < numDeliveriesinTruck; i++) {
        cout << "***********Delivery " << i + 1 << "*************" << endl;
        deliveryTruck->DeliverItemFromTruck();
        deliveryTruck->CompleteDelivery();
        m_delivery.erase(m_delivery.begin());
    }

}

void
ManageDelivery::DisplayItemLeft() {
    cout << "\n*****Items Left After Deliveries*****" << endl;
    for (int i = 0, size = m_item.size(); i < size; i++)
        cout << "Item " << i + 1 << " - Name: " << m_item[i].GetName() << "- Weight: " << m_item[i].GetWeight() << "" << endl;
}


