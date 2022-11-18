#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	cin >> x;

	auto ans = int{ 0 };
	for (auto i = 1; i <= x; ++i) {
		if (0 == x % i) {
			ans += i;
		}
	}

	cout << ans;

	return 0;
}