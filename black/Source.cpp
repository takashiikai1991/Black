
//#include <Random1.h>
#include <iostream>
#include <cmath>
using namespace std;


#include "MyRandom.h"
#include "Price.h"

#include "Vol.h"
#include "Reader.h"

void main() {
	std::cout << "HELLo " << std::endl;
	
	const double tenor = 100 / 365.;
	const double strike = 100;
	const double spot = 100;
	const double vol = 0.10;
	const double rate = 0.01;

	BS::Price UsdYenPrice(tenor, strike, spot, vol, rate);

	return;

}


