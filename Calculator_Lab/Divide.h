#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class Divide : public IBaseCommand {
private:
	CalculatorProcessor* _processor;
	int _x;

public:
	Divide(CalculatorProcessor* processor, int x, int y = 0);
	int Execute(int y);
};

