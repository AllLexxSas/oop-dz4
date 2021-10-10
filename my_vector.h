#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class my_vector {

private:
	int array_size = 0;
	int array_campacity = 0;
	int* arr;
	int number_length = 0;//переменна€ нужна дл€ оптимицазии блочной сортировки.
	const int increment = 4; //количесво добавл€емых €чеик при увеличении массива. ј так же стартовое количество €чеик в векторе. 


public:
	my_vector() = default;
	~my_vector()
	{
		std::cout << "kill array\n";
		delete[] arr;
	}

	bool push_back(int a)
	{
		int _number_length = a == 0 ? 1 : static_cast<int>(log(abs(a)) + 1);
		if (_number_length > number_length)
			number_length = _number_length;

		if (!arr) {
			arr = new int[increment];
			array_campacity = increment;
		}
		else
		{
			if (array_campacity < array_size + 1)
			{
				array_campacity *= 4;

				int* temp = new int[array_campacity];
				std::copy(arr, arr + array_size, temp);
				delete[]arr;
				arr = temp;
			}
		}

		arr[array_size++] = a;
		return true;
	}

	int size()
	{
		return array_size;
	}

	int capacity()
	{
		return array_campacity;
	}

	void print_vector()
	{
		for (size_t i = 0; i < array_size; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	void pop_back()
	{
		array_size--;
	}

	bool pop_front() {
		int* temp = new int[array_size - 1];
		std::copy(arr + 1, arr + array_size, temp);
		delete[] arr;
		arr = temp;
		array_size--;

		return true;
	}

	int operator [](int i)
	{
		return arr[i];
	}
	bool sort()
	{
		int max = array_size;
		const int _max = max;
		int d = 10;
		//std::vector<std::vector<int>> temp_arra(d, std::vector<int>(max + 1));
		int **temp_arra = new int*[d];

		for (size_t i = 0; i < d; ++i)
		{
			temp_arra[i] = new int[_max + 1];
			temp_arra[i][max] = 0;
		}
		int h = 0;

		for (int j = 1; h <= number_length; j *= 10) {
			for (int i = 0; i < array_size; i++)
			{
				int b = (arr[i] / j) % d;
				int counter = temp_arra[b][max];
				temp_arra[b][counter] = arr[i];
				temp_arra[b][max] = ++counter;
			}
			int index = 0;

			for (size_t i = 0; i < d; i++)
			{
				for (size_t j = 0; j < temp_arra[i][max]; j++)
				{
					arr[index++] = temp_arra[i][j];
				}
				temp_arra[i][max] = 0;
			}
			h++;
		}
		return true;
	}
};



void print_vector(std::vector<int>& a)
{
	for (const auto& val : a)
	{
		std::cout << val << std::endl;
	}
}

void print_vector(my_vector& a)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
}



int task1()
{
	my_vector v;

	v.push_back(44);


	v.push_back(33);
    v.push_back(1234);

	v.push_back(21);
	v.push_back(56);
	v.push_back(77);
	v.push_back(14);

	v.print_vector();
	std::cout << std::endl;
	v.sort();
	v.pop_front();
	v.print_vector();

	return 1;

}