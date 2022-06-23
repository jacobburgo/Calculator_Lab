#include "Mod.h"

Mod::Mod(CalculatorProcessor* processor, int x, int y) {
	_processor = processor;
	_x = x;
}
int Mod::Execute(int y) {
	return _x % y;
}
