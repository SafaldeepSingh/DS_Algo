#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> toPrint) {
	for (int i = 0; i < size(toPrint); i++) {
		cout << toPrint[i] << ' ';
	}
	cout << endl;
}

vector<int> insertionSort(vector<int> listOfNumbers) {
	for (int i = 1; i < size(listOfNumbers); i++) {
		int key = listOfNumbers[i];
		int j = i - 1;
		while (j >= 0 and listOfNumbers[j] > key) {
			listOfNumbers[j + 1] = listOfNumbers[j];
			j--;
			listOfNumbers[j + 1] = key;
		}
	}
	return listOfNumbers;
}
int main() {
	vector<int> listOfNumbers = { 22,42,54,2,65,21,5 };
	listOfNumbers=insertionSort(listOfNumbers);
	printVector(listOfNumbers);
	system("pause");
	return 0;
}