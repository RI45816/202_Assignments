/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Truck.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Truck.h"
#include <iostream>

template <class T, int N>
Truck::Truck(string inName, int capacity)
{
    cerr << "Truck::Truck()" << endl;
}


template <class T, int N>
Truck::~Truck()
{
    cerr << "Truck::~Truck()" << endl;
}


template <class T, int N>
Tqueue<T, N>
Truck::GetItem() const
{
    cerr << "Truck::GetItem()" << endl;
}


template <class T, int N>
const T &
Truck::GetItemAt(int index) const
{
    cerr << "Truck::GetItemAt()" << endl;
}


template <class T, int N>
void
Truck::AddItem(T &inputObject)
{
    cerr << "Truck::AddItem()" << endl;
}


template <class T, int N>
void
Truck::DeliverItemFromTruck()
{
    cerr << "Truck::DeliverItemFromTruck()" << endl;
}


template <class T, int N>
void
Truck::AddDelivery(Delivery &)
{
    cerr << "Truck::AddDelivery()" << endl;
}


template <class T, int N>
void
Truck::CompleteDelivery()
{
    cerr << "Truck::CompleteDelivery()" << endl;
}


template <class T, int N>
Delivery &
Truck::GetDeliveryAt(int index)
{
    cerr << "Truck::GetDeliveryAt()" << endl;
}


template <class T, int N>
vector<Delivery>
Truck::GetDelivery() const
{
    cerr << "Truck::GetDelivery()" << endl;
}


template <class T, int N>
int
Truck::GetTime()
{
    cerr << "Truck::GetTime()" << endl;
}


template <class T, int N>
void
Truck::SetTime(int time)
{
    cerr << "Truck::SetTime()" << endl;
}


template <class T, int N>
double
Truck::GetCapacity() const
{
    cerr << "Truck::GetCapacity()" << endl;
}


template <class T, int N>
string
Truck::GetName() const
{
    cerr << "Truck::GetName()" << endl;
}


