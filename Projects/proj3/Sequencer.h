/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*****************************************
 ** File:    Sequencer.h
 ** Project: CMSC 202 proj3, Spring 2017
 ** Author:  Uzoma Uwanamodo
 ** Date:    03/28/2017
 ** Section: 05
 ** E-mail:  uu3@umbc.edu
 ** 
 ** This file contains the header for the Sequencer class.
 ** 
 ** 
 ** 
 ** 
 *********************************************/

#ifndef SEQUENCER_H
#define SEQUENCER_H

#include "DNA.h"

#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Sequencer {
 public:
  //name: Sequencer (default constructor)
  //pre: A linked list (DNA) is available
  //post: A linked list (DNA) where m_head and m_tail points to NULL
  //      m_size is also populated with SizeOf
  Sequencer(string fileName);
  //name: Sequencer (destructor)
  //pre: There is an existing linked list (DNA)
  //post: A linked list (DNA) is deallocated (including nucleotides) to have no memory leaks!
  ~Sequencer();
  //name: readFile
  //pre: Valid file name of characters (Either A, T, G, or C)
  //post: Populates the LinkedList (DNA)
  void readFile();
  //name: mainMenu
  //pre: Populated LinkedList (DNA)
  //post: None
  void mainMenu();
 private:
  DNA m_dna;
  string m_fileName;
};

#endif
