#pragma once
#include <iostream>
#include <set>
#include <vector>
<<<<<<< HEAD
#include <time.h>


=======
#define RAND 1 + rand() % 1000
>>>>>>> 06a874aad7c82ed67f785a03fc24ed74f655a652

//ƒан вектор чисел, требуетс€ вы€снить, сколько среди них различных.ѕостаратьс€ использовать максимально быстрый алгоритм.

void task2()
{
	srand(time(0));

<<<<<<< HEAD
	int const rnd = 1 + rand() % 1000;

	std::vector<int> a;

	for (size_t i = 0; i < rnd; i++)
	{
		a.push_back(rnd);
=======
	std::vector<int> a;

	for (size_t i = 0; i < RAND ; i++)
	{
		a.push_back(RAND);
>>>>>>> 06a874aad7c82ed67f785a03fc24ed74f655a652
	}
	std::set<int> s{ a.begin() , a.end() };
	std::cout << "в векторе " << s.size() << " различных элемента" << std::endl;
}