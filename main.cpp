#include <iostream>
#include <cmath>
#include "conyo.h"
using namespace std;
using namespace cy;


void drawcircle(int x0, int y0, int radius, char c)
{
  int x = radius;
  int y = 0;
  int err = 0;
  
  while (x >= y)
  {
    cursorSetPos(x0 + x, y0 + y);
    cout << c;
    
    cursorSetPos(x0 + y, y0 + x);
    cout << c;
    
    cursorSetPos(x0 - y, y0 + x);
    cout << c;
    
    cursorSetPos(x0 - x, y0 + y);
    cout << c;
    
    cursorSetPos(x0 - x, y0 - y);
    cout << c;
    
    cursorSetPos(x0 - y, y0 - x);
    cout << c;
    
    cursorSetPos(x0 + y, y0 - x);
    cout << c;
    
    cursorSetPos(x0 + x, y0 - y);
    cout << c;
    
    y += 1;
    if(err <= 0)
    {
      err += 2*y + 1;
    } 
    else 
    {
      x -= 1;
      err += 2 * (y - x) + 1;
    }
  }
}


int main()
{
  //screenClear();
  
  for(int i = 20, j = 1; i > 2; --i, ++j)
  {
    screenFGColor(31 + j % 8);
    drawcircle(20, 24, i, '\x18');
  }
  
  cursorSetPos(1, 50);
}