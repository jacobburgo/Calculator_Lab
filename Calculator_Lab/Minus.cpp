#include "Minus.h"

Minus::Minus(CalculatorProcessor* processor, int x, int y) {
	_processor = processor;
	_x = x;
}

int Minus::Execute(int y) {
	return _x - y;
}
