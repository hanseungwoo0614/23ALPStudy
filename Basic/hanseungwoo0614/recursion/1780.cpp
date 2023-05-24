#include <bits/stdc++.h>

int a, b, c;
int map[5000][5000];

void re(int x, int y, int size)
{
	int vis = map[y][x];

	for (int i = y; i < y + size; i++)
	{
		for (int j = x; j < x + size; j++)
		{
			if (vis != map[i][j])
			{
				re(x, y, size / 3);
				re(x + size / 3, y, size / 3); 
				re(x + size / 3 + size / 3, y, size / 3); 
				re(x, y + size / 3, size / 3); 
				re(x, y + size / 3 + size / 3, size / 3); 
				re(x + size / 3, y + size / 3, size / 3); 
				re(x + size / 3 + size / 3, y + size / 3 + size / 3, size / 3); 
				re(x + size / 3, y + size / 3 + size / 3, size / 3); 
				re(x + size / 3 + size / 3, y + size / 3, size / 3);
				return;

			}
			

			

		}
	}

	if (vis == -1)
		a++;

	else if (vis == 0)
		b++;
	else if (vis == 1)
		c++;


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


	std::cout << a << "\n" << b << "\n" << c << "\n";
}
