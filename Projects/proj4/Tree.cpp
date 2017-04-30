/***********************************************************************
 * AUTHOR: U-DESKTOP-ANLHPM1\amozu <amozu>
 *   FILE: .//Tree.cpp
 *   DATE: Sat Apr 29 19:50:08 2017
 *  DESCR: 
 ***********************************************************************/
#include "Tree.h"

Tree::Tree()
{    
}


Tree::~Tree()
{
}


void
Tree::die()
{
    
}


void
Tree::ClearFruit()
{
    
}


void
Tree::tick()
{
    SetIsDiseased(false);

    int wellOrSick = rand() % 5;
    if (wellOrSick)
        SetSize(GetSize() + 1);
    else
        SetIsDiseased(true);

    
        
}


ostream &
Tree::operator<<(ostream &os)
{
        return os << "Tree (" << (GetSize() < 12 ? "Seedling" : GetSize() < 24 ? "Sapling" : GetSize() < 36  ? "Pole" : "Mature") << " : " << (GetIsAlive() ? "Alive" : "Dead") << " : " << (GetSize() > 36 ? "Fruiting" : "Not Fruiting") << " : " << (GetIsDiseased() ? "Diseased" : "Not Diseased") << ")" << endl;
}


