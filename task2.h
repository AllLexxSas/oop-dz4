#pragma once
#include <iostream>
#include <set>
#include <vector>
#define RAND 1 + rand() % 1000

//��� ������ �����, ��������� ��������, ������� ����� ��� ���������.����������� ������������ ����������� ������� ��������.

void task2()
{
	srand(time(0));

	std::vector<int> a;

	for (size_t i = 0; i < RAND ; i++)
	{
		a.push_back(RAND);
	}
	std::set<int> s{ a.begin() , a.end() };
	std::cout << "� ������� " << s.size() << " ��������� ��������" << std::endl;
}