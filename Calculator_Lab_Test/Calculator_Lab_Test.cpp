#include "pch.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Calculator_Lab/CalculatorProcessor.h"
#include "../Calculator_Lab/CalculatorProcessor.cpp"
#include "../Calculator_Lab/ButtonFactory.h"
#include "../Calculator_Lab/ButtonFactory.cpp"
#include "../Calculator_Lab/Calculator_Lab.h"
#include "../Calculator_Lab/Calculator_Lab.cpp"
#include "../Calculator_Lab/RunApp.h"
#include "../Calculator_Lab/RunApp.cpp"
#include "../Calculator_Lab/Mod.h"
#include "../Calculator_Lab/Mod.cpp"
#include "../Calculator_Lab/Add.h"
#include "../Calculator_Lab/Add.cpp"
#include "../Calculator_Lab/Multiply.h"
#include "../Calculator_Lab/Multiply.cpp"
#include "../Calculator_Lab/Divide.h"
#include "../Calculator_Lab/Divide.cpp"
#include "../Calculator_Lab/Minus.h"
#include "../Calculator_Lab/Minus.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorLabTest {
	TEST_CLASS(CalculatorLabTest) {
public:
	Calculator calc;
	ButtonFactory factory;
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();
	TEST_METHOD(ButtonFactoryTests) {
		for (int i = 0; i < 21; i++) {
			calc.mButtons[i] = factory.CreateButton(calc.GetMainWindowOfCompositeControl(), i);
		}
		Assert::AreEqual(calc.mButtons[0]->GetId(), 0);
		Assert::AreEqual(calc.mButtons[1]->GetId(), 1);
		Assert::AreEqual(calc.mButtons[2]->GetId(), 2);
		Assert::AreEqual(calc.mButtons[3]->GetId(), 3);
		Assert::AreEqual(calc.mButtons[4]->GetId(), 4);
		Assert::AreEqual(calc.mButtons[5]->GetId(), 5);
		Assert::AreEqual(calc.mButtons[6]->GetId(), 6);
		Assert::AreEqual(calc.mButtons[7]->GetId(), 7);
		Assert::AreEqual(calc.mButtons[8]->GetId(), 8);
		Assert::AreEqual(calc.mButtons[9]->GetId(), 9);
		Assert::AreEqual(calc.mButtons[10]->GetId(), 10);
		Assert::AreEqual(calc.mButtons[11]->GetId(), 11);
		Assert::AreEqual(calc.mButtons[12]->GetId(), 12);
		Assert::AreEqual(calc.mButtons[13]->GetId(), 13);
		Assert::AreEqual(calc.mButtons[14]->GetId(), 14);
		Assert::AreEqual(calc.mButtons[15]->GetId(), 15);
		Assert::AreEqual(calc.mButtons[16]->GetId(), 16);
		Assert::AreEqual(calc.mButtons[17]->GetId(), 17);
		Assert::AreEqual(calc.mButtons[18]->GetId(), 18);
		Assert::AreEqual(calc.mButtons[19]->GetId(), 19);
		Assert::AreEqual(calc.mButtons[20]->GetId(), 20);
		Assert::AreEqual(calc.mButtons[0]->GetLabel(), "bin");
		Assert::AreEqual(calc.mButtons[1]->GetLabel(), "hex");
		Assert::AreEqual(calc.mButtons[2]->GetLabel(), "dec");
		Assert::AreEqual(calc.mButtons[3]->GetLabel(), "C");
		Assert::AreEqual(calc.mButtons[4]->GetLabel(), "1");
		Assert::AreEqual(calc.mButtons[5]->GetLabel(), "2");
		Assert::AreEqual(calc.mButtons[6]->GetLabel(), "3");
		Assert::AreEqual(calc.mButtons[7]->GetLabel(), "+");
		Assert::AreEqual(calc.mButtons[8]->GetLabel(), "-");
		Assert::AreEqual(calc.mButtons[9]->GetLabel(), "4");
		Assert::AreEqual(calc.mButtons[10]->GetLabel(), "5");
		Assert::AreEqual(calc.mButtons[11]->GetLabel(), "6");
		Assert::AreEqual(calc.mButtons[12]->GetLabel(), "*");
		Assert::AreEqual(calc.mButtons[13]->GetLabel(), "/");
		Assert::AreEqual(calc.mButtons[14]->GetLabel(), "7");
		Assert::AreEqual(calc.mButtons[15]->GetLabel(), "8");
		Assert::AreEqual(calc.mButtons[16]->GetLabel(), "9");
		Assert::AreEqual(calc.mButtons[17]->GetLabel(), "%");
		Assert::AreEqual(calc.mButtons[18]->GetLabel(), "=");
		Assert::AreEqual(calc.mButtons[19]->GetLabel(), "0");
		Assert::AreEqual(calc.mButtons[20]->GetLabel(), "+/-");
	}

	TEST_METHOD(CalculatorProcessorTests) {
		processor->SetBaseNumber(55);
		std::string answer1Bin = processor->GetBinary();
		Assert::AreEqual(std::to_string(110111), answer1Bin);
		std::string answer1Hex = processor->GetHexadecimal();
		std::string check1 = "0x37";
		Assert::AreEqual(check1, answer1Hex);
		processor->SetBaseNumber(164);
		std::string answer2Bin = processor->GetBinary();
		Assert::AreEqual(std::to_string(10100100), answer2Bin);
		std::string answer2Hex = processor->GetHexadecimal();
		std::string check2 = "0xA4";
		Assert::AreEqual(check2, answer2Hex);
		processor->SetBaseNumber(9999);
		std::string answer3Bin = processor->GetBinary();
		Assert::AreEqual(std::to_string(10011100001111), answer3Bin);
		std::string answer3Hex = processor->GetHexadecimal();
		std::string check3 = "0x270F";
		Assert::AreEqual(check3, answer3Hex);

		// tested against values determined at https://www.rapidtables.com/convert/number/decimal-to-binary.html

		Minus* sub = new Minus(processor, 5);
		int answer1 = sub->Execute(5);
		Multiply* mult = new Multiply(processor, 5);
		int answer2 = mult->Execute(5);
		Divide* div = new Divide(processor, 5);
		int answer3 = div->Execute(5);
		Mod* mod = new Mod(processor, 10);
		int answer4 = mod->Execute(5);
		Add* add = new Add(processor, 5);
		int answer5 = add->Execute(5);

		Assert::AreEqual(0, answer1);
		Assert::AreEqual(25, answer2);
		Assert::AreEqual(1, answer3);
		Assert::AreEqual(0, answer4);
		Assert::AreEqual(10, answer5);
	}
	};
}
