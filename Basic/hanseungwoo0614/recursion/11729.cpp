#include <bits/stdc++.h>

using namespace std;

void re(int x, int start, int mid, int end)
{
	if (x == 1)
	{
		cout << start << " " << end << "\n";
	}
	else {
		re(x - 1, start, end, mid);
		cout << start << " " << end << "\n";
		re(x - 1, mid, start, end);
	}

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;

	cin >> n;

	cout << (1 << n) - 1 << "\n";

	re(n, 1, 2, 3);

}
