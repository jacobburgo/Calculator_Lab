#include "Add.h"

Add::Add(CalculatorProcessor* processor, int x, int y) {
	_processor = processor;
	_x = x;
}

int Add::Execute(int y) {
	return _x + y;
}
