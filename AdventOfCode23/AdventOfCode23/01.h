#pragma once

#include "Day.h"

class One : public Day
{
public:
	void Run() override;

private:
	string filename =
#ifdef TEST
		"Data/01_Test.txt";
#else
		"Data/01_Input.txt";
#endif

	int PartOne();
	int PartTwo();

	void AddTo(int* arr, int val, const int count = 3);
};

/*

*/

