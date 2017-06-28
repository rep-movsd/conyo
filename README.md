## What?

A simple ANSI escaper code wrapper library to make console apps development pretty (&) easy
More portable and easy to use than ncurses

Here is a crude example of drawing circles:

![Circles](/doc/example.png)


## Why?
Because there seemed to be no existing library other than ncurses for this

## How?
Simply translates functions into ANSI escape sequences ( supported by most Linux terminals and TTY, and Windows too) 

### TODOs

 * Implement drawing primitives
 * Implement windows and windowed output
 * Implement keyboard and mouse IO
 * Implement GUI like controls
 * Make sure every function works on every OS
 * Implement animation and extended colors
 



