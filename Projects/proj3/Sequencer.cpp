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
    m_dna.ParseTrinucleotides();
    mainMenu();
}



// ReadFile
// Load a file of nucleotides into the DNA

void Sequencer::readFile() {

    // File reader variables
    ifstream rawDNA(m_fileName.c_str());
    string line;

    // Read the file and create the DNA strand
    while (getline(rawDNA, line))
        m_dna.InsertEnd(line.c_str()[0]);

    rawDNA.close();
    cout << "New Sequencer loaded" << endl;
}

// MainMenu
// Calls the various functions in the DNA 

void Sequencer::mainMenu() {

    while (true) {

        // Display menu and get user input
        int menuOption = 0; // Variable that stores user input
        do {

            // Show menu
            cout << "What would you like to do?:" << endl;
            cout << "1. Display Sequencer (Leading Strand)" << endl;
            cout << "2. Display Sequencer (Base Pairs)" << endl;
            cout << "3. Inventory Basic Amino Acids" << endl;
            cout << "4. Sequence Entire DNA Strand" << endl;
            cout << "5. Exit" << endl;

            cin >> menuOption;

        } while (menuOption > 5 || menuOption < 1);


        switch (menuOption) {
            case 1:
            case 2:
                m_dna.Display(menuOption);
                break;
            case 3:
                m_dna.NumAmino("TGG");
                m_dna.NumAmino("TTT");
                break;
            case 4:
                m_dna.Sequence();
                break;
            case 5:
                cout << "DNA removed from memory" << endl;
                return;
                break;
            default:
                break;
        }
    }
}

Sequencer::~Sequencer() {
    DNA *dna = &this->m_dna;
    delete dna;
}
//
