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

    // Traversal pointers
    Nucleotide* next = m_head;
    Nucleotide* curr;

    // Go through and delete every node
    while (next != NULL) {
        curr = next;
        next = next->m_next;
        *curr = NULL;
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

    // Create a new nucleotide using the payload character
    Nucleotide* nucleotide;
    nucleotide = new Nucleotide(payload);

    // If the DNA strand is empty, set the new nucleotide as the head, otherwise, set it as the next element
    if (IsEmpty())
        m_head = nucleotide;
    else
        m_tail->m_next = nucleotide;

    // Set the tail as the new nucleotide
    m_tail = nucleotide;

    // Increment the size counter
    this->m_size++;
    return;
}


// SizeOf
// 


// Display
// Shows the nucleotides (and their complements) in the DNA strand

void DNA::Display(int numStrand) {
    Nucleotide *curr; // Stores the current nucleotide

    // Only run if the DNA string is populated
    if (!IsEmpty())
        curr = m_head;
    else
        return;

    // Go through each node, starting at the first, and print the nucleotide
    while (curr != NULL) {
        if (numStrand == 1)
            cout << curr->m_payload << endl;
        else
            cout << curr->m_payload << "-" << curr->ComplimentaryNucleotide() << endl;
        curr = curr->m_next;
    }
}





// Translate
// Converts a trinucleotide string to an amino acid name

string DNA::Translate(const string trinucleotide) {


    // Match list for the trinucleotide
    if ((trinucleotide == "ATT") || (trinucleotide == "ATC") || (trinucleotide == "ATA"))
        return ("Isoleucine");
    else if ((trinucleotide == "CTT") || (trinucleotide == "CTC") || (trinucleotide == "CTA") ||
            (trinucleotide == "CTG") || (trinucleotide == "TTA") || (trinucleotide == "TTG"))
        return ("Leucine");
    else if ((trinucleotide == "GTT") || (trinucleotide == "GTC") ||
            (trinucleotide == "GTA") || (trinucleotide == "GTG"))
        return ("Valine");
    else if ((trinucleotide == "TTT") || (trinucleotide == "TTC"))
        return ("Phenylalanine");
    else if ((trinucleotide == "ATG"))
        return ("Methionine");
    else if ((trinucleotide == "TGT") || (trinucleotide == "TGC"))
        return ("Cysteine");
    else if ((trinucleotide == "GCT") || (trinucleotide == "GCC") ||
            (trinucleotide == "GCA") || (trinucleotide == "GCG"))
        return ("Alanine");
    else if ((trinucleotide == "GGT") || (trinucleotide == "GGC") ||
            (trinucleotide == "GGA") || (trinucleotide == "GGG"))
        return ("Glycine");
    else if ((trinucleotide == "CCT") || (trinucleotide == "CCC") ||
            (trinucleotide == "CCA") || (trinucleotide == "CCG"))
        return ("Proline");
    else if ((trinucleotide == "ACT") || (trinucleotide == "ACC") ||
            (trinucleotide == "ACA") || (trinucleotide == "ACG"))
        return ("Threonine");
    else if ((trinucleotide == "TCT") || (trinucleotide == "TCC") ||
            (trinucleotide == "TCA") || (trinucleotide == "TCG") ||
            (trinucleotide == "AGT") || (trinucleotide == "AGC"))
        return ("Serine");
    else if ((trinucleotide == "TAT") || (trinucleotide == "TAC"))
        return ("Tyrosine");
    else if ((trinucleotide == "TGG"))
        return ("Tryptophan");
    else if ((trinucleotide == "CAA") || (trinucleotide == "CAG"))
        return ("Glutamine");
    else if ((trinucleotide == "AAT") || (trinucleotide == "AAC"))
        return ("Asparagine");
    else if ((trinucleotide == "CAT") || (trinucleotide == "CAC"))
        return ("Histidine");
    else if ((trinucleotide == "GAA") || (trinucleotide == "GAG"))
        return ("Glutamic acid");
    else if ((trinucleotide == "GAT") || (trinucleotide == "GAC"))
        return ("Aspartic acid");
    else if ((trinucleotide == "AAA") || (trinucleotide == "AAG"))
        return ("Lysine");
    else if ((trinucleotide == "CGT") || (trinucleotide == "CGC") || (trinucleotide == "CGA") ||
            (trinucleotide == "CGG") || (trinucleotide == "AGA") || (trinucleotide == "AGG"))
        return ("Arginine");
    else if ((trinucleotide == "TAA") || (trinucleotide == "TAG") || (trinucleotide == "TGA"))
        return ("Stop");
    else
        cout << "returning unknown" << endl;
    return ("Unknown");
}

DNA::~DNA() {
    Clear();
}

