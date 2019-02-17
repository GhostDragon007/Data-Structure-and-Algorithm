#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void insertionSort(vector<int>& vec) {
	for (int i = 0; i < vec.size() - 1; i++) {
		int j = i + 1;
		while (j > 0 && vec[j] < vec[j - 1]) {
			swap(vec[j], vec[j - 1]);
			j--;
		}
	}
}

void selectionSort(vector<int>& vec) {
	int min = INT_MAX, pos = -1;
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[i] < min) {
				min = vec[i];
				pos = i;
			}
		}
		swap(vec[i], vec[pos]);
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
	cout << "\n";
	insertionSort(vec);
	cout << "After doing insertionSort: ";
	for (int num : vec)
		cout << num << " ";
	cout << "\n\n";

	vector<int> vec1;
	srand(time(0));
	for (int i = 0; i < 10; i++)
		vec1.push_back(rand() % 50);
	cout << "Randomly generated vector: ";
	for (int num : vec1)
		cout << num << " ";
	cout << "\n";
	insertionSort(vec1);
	cout << "After doing selectionSort: ";
	for (int num : vec1)
		cout << num << " ";
	cout << endl;

	getchar();
	return 0;
}
//<--END TEST STUB-->