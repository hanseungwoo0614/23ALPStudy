#include <bits/stdc++.h>

using namespace std;

long long re(int a, int b, int c)
{
	if (b == 1)
	{
		return a % c;
	}
	long long result;

	result = re(a, b / 2, c);
	result = result * result % c;

	if (b % 2 == 0)
	{
		return result;
	}
	return result * a % c;





}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;

	cin >> n >> m >> k;
	
	cout<<re(n, m, k);

	



}
