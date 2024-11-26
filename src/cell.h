#include <iostream>
#include <Magick++.h>

#ifndef __CELL_H__
#define __CELL_H__

 
typedef class Cell {
public:		
    //local position of last fragment
    static int span_x, span_y;

	static void read(const char*);
    static void write(const char*);
    
    unsigned int x, y; //global position of first fragment
    
 	void dbg() noexcept;
    
	Magick::Quantum* ref();

	Cell();
	~Cell();
    
	inline static Magick::Image base;

} cell_t;

#endif
