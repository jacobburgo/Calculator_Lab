#pragma once
#include <vector>
#include <string>

class IBaseCommand {
public:
	virtual int Execute(int y) = 0;
};

