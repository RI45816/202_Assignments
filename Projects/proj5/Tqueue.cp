/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Tqueue.cpp
 *   DATE: Sat May 13 04:25:25 2017
 *  DESCR: 
 ***********************************************************************/
#include "Tqueue.h"
#include <iostream>

template <class T, int N>
Tqueue<T,N>::Tqueue()
{
    cerr << "Tqueue<T,N>::Tqueue()" << endl;
}


template <class T, int N>
Tqueue<T,N>::Tqueue(const Tqueue<T, N> &x)
{
    cerr << "Tqueue<T,N>::Tqueue()" << endl;
}


template <class T, int N>
Tqueue<T,N>::~Tqueue()
{
    cerr << "Tqueue<T,N>::~Tqueue()" << endl;
}


template <class T, int N>
void
Tqueue<T,N>::enqueue(T data)
{
    cerr << "Tqueue<T,N>::enqueue()" << endl;
}


template <class T, int N>
void
Tqueue<T,N>::dequeue(T &)
{
    cerr << "Tqueue<T,N>::dequeue()" << endl;
}


template <class T, int N>
void
Tqueue<T,N>::queueFront(T &)
{
    cerr << "Tqueue<T,N>::queueFront()" << endl;
}


template <class T, int N>
int
Tqueue<T,N>::isEmpty()
{
    cerr << "Tqueue<T,N>::isEmpty()" << endl;
}


template <class T, int N>
int
Tqueue<T,N>::isFull()
{
    cerr << "Tqueue<T,N>::isFull()" << endl;
}


template <class T, int N>
Tqueue<T, N> &
Tqueue<T,N>::operator=(Tqueue<T, N> y)
{
    cerr << "Tqueue<T,N>::operator=()" << endl;
}


