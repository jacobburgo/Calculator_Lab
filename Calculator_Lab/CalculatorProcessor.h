#pragma once
#include <string>
#include <vector>
#include "IBaseCommand.h"

class CalculatorProcessor {
private:
	static CalculatorProcessor* _processor;
	int baseNumber;
	CalculatorProcessor() {}
public:
	size_t numSize;
	std::string answer;
	static CalculatorProcessor* GetInstance();
	void SetBaseNumber(int number);

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();
	std::string Negate();
	std::string Add();
	std::string Subtract();
	std::string Divide();
	std::string Multiply();
};

