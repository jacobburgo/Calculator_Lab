#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class Multiply : public IBaseCommand {
private:
	CalculatorProcessor* _processor;
	int _x;

public:
	Multiply(CalculatorProcessor* processor, int x, int y = 0);
	int Execute(int y);
};
