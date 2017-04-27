#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
  // Create IntArray objects and call methods here...
  IntArray ia(10);

  ia.AddToAll(5);
  
  ia+5;
  
  ia[4];
  ia.Insert(5,5);
  ia.Clear();
  ia.Clear();
  ia.Remove(5);
  ia[44];
  ia+5;
  ia.Del(5);
  ia.Contains(7);
  ia.GetLength();
  ia.AddToAll(43);
  ia.Scale(235);
  ia.Sum(IntArray(234));
  ia.Product(IntArray(43));
  ia.Insert(12,3);
  ia[34];
  ia == IntArray(53);

// Print out the number of errors/edge cases found
  cout << endl << endl << IntArray::GetProgress() << endl;
    
  return 0;
}
