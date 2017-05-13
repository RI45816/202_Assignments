/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Truck.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Truck.h"
#include <iostream>

template <class T, int N>
Truck<T,N>::Truck(string inName, int capacity) : m_name(inName), m_capacity(capacity)
{
}


template <class T, int N>
Truck<T,N>::~Truck()
{
    cerr << "Truck<T,N>::~Truck()" << endl;
}


template <class T, int N>
Tqueue<T, N>
Truck<T,N>::GetItem() const
{
    cerr << "Truck<T,N>::GetItem()" << endl;
}


template <class T, int N>
const T &
Truck<T,N>::GetItemAt(int index) const
{
    cerr << "Truck<T,N>::GetItemAt()" << endl;
}


template <class T, int N>
void
Truck<T,N>::AddItem(T &inputObject)
{
    cerr << "Truck<T,N>::AddItem()" << endl;
}


template <class T, int N>
void
Truck<T,N>::DeliverItemFromTruck()
{
    cerr << "Truck<T,N>::DeliverItemFromTruck()" << endl;
}


template <class T, int N>
void
Truck<T,N>::AddDelivery(Delivery &)
{
    cerr << "Truck<T,N>::AddDelivery()" << endl;
}


template <class T, int N>
void
Truck<T,N>::CompleteDelivery()
{
    cerr << "Truck<T,N>::CompleteDelivery()" << endl;
}


template <class T, int N>
Delivery &
Truck<T,N>::GetDeliveryAt(int index)
{
    cerr << "Truck<T,N>::GetDeliveryAt()" << endl;
}


template <class T, int N>
vector<Delivery>
Truck<T,N>::GetDelivery() const
{
    cerr << "Truck<T,N>::GetDelivery()" << endl;
}


template <class T, int N>
int
Truck<T,N>::GetTime()
{
    cerr << "Truck<T,N>::GetTime()" << endl;
}


template <class T, int N>
void
Truck<T,N>::SetTime(int time)
{
    cerr << "Truck<T,N>::SetTime()" << endl;
}


template <class T, int N>
double
Truck<T,N>::GetCapacity() const
{
    cerr << "Truck<T,N>::GetCapacity()" << endl;
}


template <class T, int N>
string
Truck<T,N>::GetName() const
{
    cerr << "Truck<T,N>::GetName()" << endl;
}


