#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class Minus : public IBaseCommand {
private:
	CalculatorProcessor* _processor;
	int _x;

public:
	Minus(CalculatorProcessor* processor, int x, int y = 0);
	int Execute(int y);
};

