#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class Mod : public IBaseCommand {
private:
	CalculatorProcessor* _processor;
	int _x;

public:
	Mod(CalculatorProcessor* processor, int x, int y = 0);
	int Execute(int y);
};

