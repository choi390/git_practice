#include <iostream>
using namespace std;

int evenSum(int a, int b) {
	int ret = 0;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			ret += i;
		}
	}
	return ret;
}

int sumDigits(int num) {
	int ret = 0;
	while (num > 0) {
		ret += (num%10);
		num = (num / 10);

	}

	return ret;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << evenSum(a, b) << endl;

	int num;
	cin >> num;
	cout << sumDigits(num) << endl;

	return 0;
}