#include "CalculatorProcessor.h"
#include <typeinfo>
#include <string>

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance() {
	if (_processor == nullptr) _processor = new CalculatorProcessor();
	return _processor;
}

void CalculatorProcessor::SetBaseNumber(int number) {
	baseNumber = number;
}

std::string CalculatorProcessor::GetDecimal() {
	return std::to_string(baseNumber);
}

std::string CalculatorProcessor::GetBinary() {
	int binaryNum[32];
	int n = baseNumber;
	std::string results = "";

	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		results = results + std::to_string(binaryNum[j]);

	return results;
}

std::string CalculatorProcessor::GetHexadecimal() {
	char hexaDeciNum[100];
	int n = baseNumber;
	std::string results = "";

	int i = 0;
	while (n != 0) {
		int temp = n % 16;
		if (temp < 10) {
			results = std::to_string(temp) + results;
		} else if (temp == 10) {
			results = "A" + results;
		} else if (temp == 11) {
			results = "B" + results;
		} else if (temp == 12) {
			results = "C" + results;
		} else if (temp == 13) {
			results = "D" + results;
		} else if (temp == 14) {
			results = "E" + results;
		} else if (temp == 15) {
			results = "F" + results;
		}

		n = n / 16;
	}

	results = "0x" + results;

	return results;
}

std::string CalculatorProcessor::Add() {
	return "";
}
std::string CalculatorProcessor::Subtract() {
	return "";
}
std::string CalculatorProcessor::Divide() {
	return "";
}
std::string CalculatorProcessor::Multiply() {
	return "";
}
