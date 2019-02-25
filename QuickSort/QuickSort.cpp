// DataStructure_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Edited on 2/24/2019

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int partition(vector<int>& vec, int begin, int end) {
	int i = begin - 1;
	for (int curr = begin; curr < end; curr++)
		if (vec[curr] < vec[end])
			swap(vec[++i], vec[curr]);
	swap(vec[++i], vec[end]);
	return i;
}

void quickSort(vector<int>& vec, int begin, int end) {
	if (begin < end) {
		int mid = partition(vec, begin, end);
		quickSort(vec, begin, mid - 1);
		quickSort(vec, mid + 1, end);
	}
}

//<--TEST STUB-->
int main()
{
	vector<int> vec;
	srand(time(0));
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 50);
	cout << "Randomly generated vector: ";
	for (int num : vec)
		cout << num << " ";
	cout << "\n\n";
	quickSort(vec, 0, vec.size() - 1);
	cout << "After doing quicksort: ";
	for (int num : vec)
		cout << num << " ";
	cout << endl;

	getchar();
	return 0;
}
//<--END TEST STUB-->
