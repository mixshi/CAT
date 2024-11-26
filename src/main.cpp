#include "cell.h"
#include <Magick++.h>

typedef unsigned int uint;

int main(int argc, char* argv[]) {

    if (argc < 3) return 0;
	
    //input
    Cell::read(argv[1]);
 
	Cell cell;

	Magick::Quantum* ref = cell.ref();
	for (uint i = 0; i < 400; i += 4) {	
		ref[i] = (float)(~(unsigned char)(ref[i] * 255.0)) / 255.0;
		ref[i +1] = (float)(~(unsigned char)(ref[i +1] * 255.0)) / 255.0;
		ref[i +2] = (float)(~(unsigned char)(ref[i +2] * 255.0)) / 255.0;
	}
	Cell::base.syncPixels();

    Cell::write(argv[2]);


}
