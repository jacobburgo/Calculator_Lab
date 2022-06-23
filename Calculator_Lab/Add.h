#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class Add : public IBaseCommand {
private:
	CalculatorProcessor* _processor;
	int _x;

public:
	Add(CalculatorProcessor* processor, int x, int y = 0);
	int Execute(int y);
};

