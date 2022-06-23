#include "Divide.h"

Divide::Divide(CalculatorProcessor* processor, int x, int y) {
	_processor = processor;
	_x = x;
}
int Divide::Execute(int y) {
	return _x / y;
}
