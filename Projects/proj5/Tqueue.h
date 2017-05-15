#ifndef TQUEUE_H
#define TQUEUE_H

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T, int N>
class Tqueue {
public:
    //Name: Tqueue - Default Constructor
    //Precondition: None (Must be templated)
    //Postcondition: Creates a queue using dynamic array
    Tqueue(); //Default Constructor
    //Name: Copy Constructor - Not used but required for project 5
    //Precondition: Existing Tqueue
    //Postcondition: Copies an existing Tqueue
    Tqueue(const Tqueue<T, N>& x); //Copy Constructor
    //Name: Destructor
    //Precondition: Existing Tqueue
    //Postcondition: Destructs existing Tqueue
    ~Tqueue(); //Destructor
    //Name: enqueue
    //Precondition: Existing Tqueue
    //Postcondition: Adds item to back of queue
    void enqueue(T data); //Adds item to queue (to back)
    //Name: dequeue
    //Precondition: Existing Tqueue
    //Postcondition: Removes item from front of queue
    void dequeue(T &); //Removes item from queue (from front)
    //Name: queueFront
    //Precondition: Existing Tqueue
    //Postcondition: Retrieve front (does not remove it)
    void queueFront(T &); // Retrieve front (does not remove it)
    //Name: isEmpty
    //Precondition: Existing Tqueue
    //Postcondition: Returns 1 if queue is empty else 0
    int isEmpty(); //Returns 1 if queue is empty else 0
    //Name: isFull
    //Precondition: Existing Tqueue
    //Postcondition: Returns 1 if queue is full else 0
    int isFull(); //Returns 1 if queue is full else 0
    //Name: Overloaded assignment operator - Not used but required for project 5
    //Precondition: Existing Tqueue
    //Postcondition: Sets one Tqueue to same as a second Tqueue using =
    Tqueue<T, N>& operator=(Tqueue<T, N> y); //Overloaded assignment operator for queue





private:
    int m_back; //Back of the queue
    T* m_data; //Data of the queue (Must be dynamically allocated array)
    int m_front; //Front of the queue
};

//**** Add class definition below ****

template <class T, int N>
Tqueue<T, N>::Tqueue() {
    m_data = new T[N];
    m_back = m_front = N - 1;
}

// Tqueue
// Explicit copy constructor

template <class T, int N>
Tqueue<T, N>::Tqueue(const Tqueue<T, N> &x) : m_back(x.m_back), m_data(new T[N]), m_front(x.m_front) {
    for (int i = 0; i < N; i++)
        m_data[i] = x.m_data[i];
}

// ~Tqueue
// Deconstructor for Tqueue

template <class T, int N>
Tqueue<T, N>::~Tqueue() {
    delete[] m_data;
}

// Enqueue
// Add object<T> to back of queue

template <class T, int N>
void
Tqueue<T, N>::enqueue(T data) {
    m_data[m_back--] = data;
}

// Dequeue
// Remove object<T> from the front of queue

template <class T, int N>
void
Tqueue<T, N>::dequeue(T &t) {
    t = m_data[m_front--];
    
    if (isEmpty())
        m_front = m_back = N - 1;
}

// queueFront
// Display the front of the queue without removing it

template <class T, int N>
void
Tqueue<T, N>::queueFront(T &t) {
    t = m_data[m_front];
}

// isEmpty
// Returns 1 if empty, 0 if not

template <class T, int N>
int
Tqueue<T, N>::isEmpty() {
    return (m_front == m_back) ^ 0;
}

// isFull
// returns 1 if full, 0 if not

template <class T, int N>
int
Tqueue<T, N>::isFull() {
    return (!!m_back) ^ 0;
}
// operator=
// Copy assginment operator
template <class T, int N>
Tqueue<T, N> &
Tqueue<T, N>::operator=(Tqueue<T, N> y) {
    if (this != &y) {
        m_back = y.m_back;
        m_data = y.m_data;
        m_front = y.m_back;
    }
    return *this;
}



#endif
