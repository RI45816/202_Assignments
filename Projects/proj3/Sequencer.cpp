/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Sequencer.cpp
 ** Project: CMSC 202 proj3, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    03/28/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the definition for the Sequencer class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/
#include <iostream>
#include <fstream>
#include "Sequencer.h"

using namespace std;

// Sequencer
//  Build the DNA (linked list)

Sequencer::Sequencer(string fileName) : m_fileName(fileName) {
    readFile();
    m_dna.Display(2);
}



// ReadFile
// Load a file of nucleotides into the DNA

void Sequencer::readFile() {

    // File reader variables
    ifstream rawDNA(m_fileName.c_str());
    char line;

    // Read the file and create the DNA strand
    while (rawDNA.get(line))
        m_dna.InsertEnd(line);
}

//
Sequencer::~Sequencer() {
    m_dna = NULL;
}
//
