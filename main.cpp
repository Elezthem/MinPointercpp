#include <iostream>
#include <string>

using namespace std;

void minimal(int* arr1, int len) {
	int min = *arr1;
	for (int a = 0; a < len; a++) {
		if (min > *(arr1 + a))
			min = *(arr1 + a);
	}
	cout << "Min: " << min << endl;
}

int main() {
	setlocale(LC_ALL, "RU");
	
	int arr1[] = { 1, 2, 3, -4, 5, 6 };
	minimal(arr1, 6);

	return 0;
}