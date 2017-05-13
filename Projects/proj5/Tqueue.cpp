/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Tqueue.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Tqueue.h"
#include <iostream>

template <class T, int N>
Tqueue::Tqueue()
{
    cerr << "Tqueue::Tqueue()" << endl;
}


template <class T, int N>
Tqueue::Tqueue(const Tqueue<T, N> &x)
{
    cerr << "Tqueue::Tqueue()" << endl;
}


template <class T, int N>
Tqueue::~Tqueue()
{
    cerr << "Tqueue::~Tqueue()" << endl;
}


template <class T, int N>
void
Tqueue::enqueue(T data)
{
    cerr << "Tqueue::enqueue()" << endl;
}


template <class T, int N>
void
Tqueue::dequeue(T &)
{
    cerr << "Tqueue::dequeue()" << endl;
}


template <class T, int N>
void
Tqueue::queueFront(T &)
{
    cerr << "Tqueue::queueFront()" << endl;
}


template <class T, int N>
int
Tqueue::isEmpty()
{
    cerr << "Tqueue::isEmpty()" << endl;
}


template <class T, int N>
int
Tqueue::isFull()
{
    cerr << "Tqueue::isFull()" << endl;
}


template <class T, int N>
Tqueue<T, N> &
Tqueue::operator=(Tqueue<T, N> y)
{
    cerr << "Tqueue::operator=()" << endl;
}


