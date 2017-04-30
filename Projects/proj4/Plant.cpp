/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Plant.cpp
 *   DATE: Fri Apr 28 20:17:06 2017
 *  DESCR: 
 ***********************************************************************/
#include "Plant.h"

/***********************************************************************
 *  Method: Plant::Plant
 *  Params: 
 * Effects: 
 ***********************************************************************/
Plant::Plant() {
    m_isAlive=true;
    m_isDiseased=false;
    m_size = 0;
}

/***********************************************************************
 *  Method: Plant::~Plant
 *  Params: 
 * Effects: 
 ***********************************************************************/
Plant::~Plant() {
}

/***********************************************************************
 *  Method: Plant::GetIsDiseased
 *  Params: 
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Plant::GetIsDiseased() {
    return m_isDiseased;
}

/***********************************************************************
 *  Method: Plant::GetIsAlive
 *  Params: 
 * Returns: bool
 * Effects: 
 ***********************************************************************/
bool
Plant::GetIsAlive() {
    return m_isAlive;
}

/***********************************************************************
 *  Method: Plant::GetSize
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Plant::GetSize() {
    return m_size;
}

/***********************************************************************
 *  Method: Plant::SetSize
 *  Params: int size
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Plant::SetSize(int size) {
    m_size = size;
}

/***********************************************************************
 *  Method: Plant::SetIsAlive
 *  Params: bool isAlive
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Plant::SetIsAlive(bool isAlive) {
    m_isAlive = isAlive;
}

/***********************************************************************
 *  Method: Plant::SetIsDiseased
 *  Params: bool isDiseased
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Plant::SetIsDiseased(bool isDiseased) {
    m_isDiseased = isDiseased;
}

