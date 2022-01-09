#include <iostream>
int main()
{
	float oceny[9];
	for (int id = 0; id < 9; ++id)
	{
		std::cout << "Podaj ocene:";
		std::cin >> oceny[id];
	}
	float sum = 0;
	for (int id = 0; id < 9; ++id)
	{
		sum = sum + oceny[id];
	}
	float average = sum / 9;
	std::cout << "Srednia ocen: "<<average;
}

