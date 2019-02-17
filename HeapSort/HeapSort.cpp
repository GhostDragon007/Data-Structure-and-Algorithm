#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void heapify(vector<int>& vec, int i, int size) {
	int left = 2 * i + 1, right = 2 * i + 2, max = i;
	if (left < size && vec[left] > vec[i])
		max = left;
	if (right < size && vec[right] > vec[left])
		max = right;
	if (max != i) {
		swap(vec[i], vec[max]);
		heapify(vec, max, size);
	}
}

void buildHeap(vector<int>& vec) {
	for (int i = vec.size() / 2 - 1; i >= 0; i--)
		heapify(vec, i, vec.size());
}

vector<int> heapSort(vector<int>& vec) {
	buildHeap(vec);
	int size = vec.size();
	for (int i = vec.size() - 1; i >= 1; i--) {
		swap(vec[i], vec[0]);
		heapify(vec, 0, --size);
	}
	return vec;
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
	vec = heapSort(vec);
	cout << "After doing heapSort:      ";
	for (int num : vec)
		cout << num << " ";
	cout << endl;

	getchar();
	return 0;
}
//<--END TEST STUB-->