#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 5000 + 1;

vector<int> coords[MAX];

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int coord, color;
		cin >> coord >> color;

		coords[color].push_back(coord);
	}

	long long result = 0;

	for (int color = 1; color < MAX; color++)
	{
		if (coords[color].empty())
		{
			continue;
		}

		sort(coords[color].begin(), coords[color].end());

		result += coords[color][1] - coords[color][0];

		for (int j = 1; j < coords[color].size() - 1; j++)
		{
			int x = coords[color][j];
			
			result += min(x - coords[color][j - 1], coords[color][j + 1] - x);
		}

		int lastIdx = coords[color].size() - 1;
		result += coords[color][lastIdx] - coords[color][lastIdx - 1];
	}

	cout << result << "\n";

	return 0;
}