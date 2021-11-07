#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
	int* arr = new int [n] {};
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int min = arr[0], max = arr[0], sum = 0, minNum, maxNum;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
		}
		if (arr[i] <= min) {
			min = arr[i];
			minNum = i;
		}
		if (arr[i] >= max) {
			max = arr[i];
			maxNum = i;
		}
	}
	int multiplication = 1;
	if (minNum < maxNum) {
		for (int i = minNum; i < maxNum - 1; i++) {
			multiplication *= arr[i + 1];
		}
	}
	if (minNum > maxNum) {
		for (int i = maxNum; i < minNum - 1; i++) {
			multiplication *= arr[i + 1];
		}
	}
	cout << sum << " " << multiplication << endl;
	return 0;
}