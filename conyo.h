#pragma once

namespace cy
{
  // Cursor functions
  ///////////////////////////////////////////////
  
  // Cursor movement dir
  enum CYCurDir {cdUp, cdDown, cdRight, cdLeft};
  
  // Move cursor by n step in given dir
  void cursorStep(CYCurDir, int n);
  
  // Move cursor relatively in Y direction, sets X to 1
  void cursorMoveVert(int n);
  
  // Move cursor absolutely in X direction 
  void cursorSetCol(int n);
  
  // Move cursor to absolute position
  void cursorSetPos(int col, int row);
  
  // Save cursor position
  void cursorSavePos();
  
  // Restore saved cursor position
  void cursorRestorePos();
  
  // Hide cursor
  void cursorHide();
  
  // Show cursor
  void cursorShow();

  
  // Output functions
  //////////////////////////////////////////////
  
  void screenClear();
  
  void screenFGColor(int);
}
