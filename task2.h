#pragma once
#include <iostream>
#include <set>
#include <vector>
#include <time.h>



//��� ������ �����, ��������� ��������, ������� ����� ��� ���������.����������� ������������ ����������� ������� ��������.

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
	std::cout << "� ������� " << s.size() << " ��������� ��������" << std::endl;
}