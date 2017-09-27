#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int n, a;
	cin >> n >> a;

	int plusproche = 1e9;

	for(int i = 0; i < n; i++)
	{
		int taille;
		cin >> taille;
		
		int dift = abs(taille - a);
		int difp = abs(plusproche - a);

		if( dift < difp)
			plusproche = taille;

		else if(dift == difp && taille < plusproche)
			plusproche = taille;

	}

	cout << plusproche;

	

	return 0;
}
