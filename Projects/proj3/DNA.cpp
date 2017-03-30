/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    DNA.cpp
 ** Project: CMSC 202 proj3, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    03/28/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the definition for the DNA class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/
#include <iostream>
#include "DNA.h"

using namespace std;


// DNA
// Initialize an empty linked list (DNA strand)

DNA::DNA() {
    m_size = 0;
}

// Clear
// Clear the linked list (DNA strand)

void DNA::Clear() {
    Nucleotide* next = m_head;
    Nucleotide* curr;
    while (next != NULL) {
        curr = next;
        next = next->m_next;
        curr = NULL;
    }
}


// IsEmpty
// Return whether or not the linked list (DNA strand) is empty

bool DNA::IsEmpty() {
    return m_size == 0;
}



// InsertEnd
// Inserts a new nucleotide at the end of the linked list (DNA strand)

void DNA::InsertEnd(char payload) {
    Nucleotide* nucleotide;
    nucleotide = new Nucleotide(payload);
    
    if (IsEmpty()) 
        m_head = nucleotide;
            else
                m_tail->m_next =  nucleotide;
            m_tail = nucleotide;
            if (m_head)
    this->m_size++;

    return;

    //    cout << m_tail->m_payload << " " << m_size << endl;
}

// Display
// Shows the nucleotides (and their complements) in the DNA strand

void DNA::Display(int numStrand) {
    Nucleotide *curr;
    if (!IsEmpty())
        curr = m_head;
    else
        return;
    while (curr != NULL) {
        if (numStrand == 1)
            cout << curr->m_payload << endl;
        else
            cout << curr->m_payload << "-" << curr->ComplimentaryNucleotide() << endl;
        curr = curr->m_next;
    }
}

DNA::~DNA() {
}

