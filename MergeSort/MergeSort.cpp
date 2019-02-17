// MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void merge(vector<int>& vec, vector<int>& left, vector<int>& right) {
	int leftCount = 0, rightCount = 0, vecCount = 0;
	while (leftCount < left.size() && rightCount < right.size()) {
		if (left[leftCount] <= right[rightCount])
			vec[vecCount++] = left[leftCount++];
		else
			vec[vecCount++] = right[rightCount++];
	}
	while (leftCount < left.size())	vec[vecCount++] = left[leftCount++];
	while (rightCount < right.size())	vec[vecCount++] = right[rightCount++];
}

void mergeSort(vector<int>& vec) {
	int size = vec.size();
	if (size <= 1)	return;
	int mid = size / 2;
	vector<int> left(vec.begin(), vec.begin() + mid);
	vector<int> right(vec.begin() + mid, vec.end());
	mergeSort(left);
	mergeSort(right);
	merge(vec, left, right);
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
	mergeSort(vec);
	cout << "After doing mergeSort: ";
	for (int num : vec)
		cout << num << " ";
	cout << endl;

	getchar();
	return 0;
}
//<--END TEST STUB-->