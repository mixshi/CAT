#include "cell.h"

int Cell::span_x = 10; // 10x10 Pixels
int Cell::span_y = 10;


void Cell::dbg() noexcept {
		std::cout << "x:" << this->x << ", y:" << this-> y << std::endl;
}


Cell::Cell():x(0), y(0) {}
Cell::~Cell() {}

Magick::Quantum* Cell::ref() {
    return Cell::base.getPixels(this -> x, this -> y, Cell::span_x, Cell::span_y);
}


void Cell::read(const char* path) {
    Cell::base.read(path);
}

void Cell::write(const char* path) {
    Cell::base.write(path);	
}
