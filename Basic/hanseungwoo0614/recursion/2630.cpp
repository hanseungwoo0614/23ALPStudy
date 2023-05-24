#include <bits/stdc++.h>

int map[200][200];

int w, b;
void re(int x, int y, int n)
{
		
	int vis = map[y][x];

	for (int i = y; i < y + n; i++)
	{
		for (int j = x; j < x + n; j++)
		{
			if (vis == 0 && map[i][j] == 1)
				vis = 2;
			else if (vis == 1 && map[i][j] == 0)
				vis = 2;

			if (vis == 2)
			{
				re(x, y, n / 2);
				re(x + n / 2, y, n / 2);
				re(x, y + n / 2, n / 2);
				re(x + n / 2, y + n / 2, n / 2);
				return;
			}

		}
	}
	if (vis == 0)
		w++;
	else
		b++;



}

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> map[i][j];
		}
	}

	re(0, 0, n);
	std::cout << w << "\n" << b << "\n";

	return 0;
}
