#include "conyo.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace cy
{
// Escape sequence
#define CSI "\x1b["

void cursorStep(CYCurDir dir, int n)
{
  cout << CSI << n << char('A' + int(dir)) << std::flush;
}

// Move cursor relatively in Y direction, sets X to 1
void cursorMoveVert(int n)
{
  cout << CSI << n << (n < 0 ? "E" : "F") << std::flush;
}

// Move cursor absolutely in X direction 
void cursorSetCol(int n)
{
  cout << CSI << (n + 1) << "G" << std::flush;
}

// Move cursor to absolute position
void cursorSetPos(int col, int row)
{
  cout << CSI << int(row * 0.5 +1)  << ";" << (col+1) << "H" << std::flush;
}

// Save cursor position
void cursorSavePos()
{
  cout << CSI "s" << std::flush;
}

// Restore saved cursor position
void cursorRestorePos()
{
  cout << CSI "u" << std::flush;
}


// Hide cursor
void cursorHide()
{
  cout << CSI "?l" << std::flush;
}

// Show cursor
void cursorShow()
{
  cout << CSI "?h" << std::flush;
}

//Clear screen
void screenClear()
{
  cout << CSI "2J" << std::flush;
}

// set fg color
void screenFGColor(int n)
{
  cout << CSI << n << "m" << std::flush;
}


}