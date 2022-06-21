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
		int temp = 0;
		temp = n % 16;

		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		} else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	for (int j = i - 1; j >= 0; j--)
		results = results + hexaDeciNum[j];

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
