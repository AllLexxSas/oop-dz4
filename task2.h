#pragma once
#include <iostream>
#include <set>
#include <vector>
#include <time.h>



//ƒан вектор чисел, требуетс€ вы€снить, сколько среди них различных.ѕостаратьс€ использовать максимально быстрый алгоритм.

void task2()
{
	srand(time(0));

	int const rnd = 1 + rand() % 1000;

	std::vector<int> a;

	for (size_t i = 0; i < rnd; i++)
	{
		a.push_back(rnd);
	}
	std::set<int> s{ a.begin() , a.end() };
	std::cout << "в векторе " << s.size() << " различных элемента" << std::endl;
}