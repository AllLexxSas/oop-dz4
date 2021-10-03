#pragma once
#include <iostream>
#include <set>
#include <vector>
#define RAND 1 + rand() % 1000

//ƒан вектор чисел, требуетс€ вы€снить, сколько среди них различных.ѕостаратьс€ использовать максимально быстрый алгоритм.

void task2()
{
	srand(time(0));

	std::vector<int> a;

	for (size_t i = 0; i < RAND ; i++)
	{
		a.push_back(RAND);
	}
	std::set<int> s{ a.begin() , a.end() };
	std::cout << "в векторе " << s.size() << " различных элемента" << std::endl;
}