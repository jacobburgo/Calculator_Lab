#include "Multiply.h"

Multiply::Multiply(CalculatorProcessor* processor, int x, int y) {
	_processor = processor;
	_x = x;
}

int Multiply::Execute(int y) {
	return _x * y;
}
