#include <iostream>
using namespace std;

void mySwap(string &s, int i, int j)
{
	char temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}

void permute(string s, int l, int r)
{
	if (l == r)
	{
		cout << s << " ";
		return;
	}

	for (int i = l; i <= r; i++)
	{
		mySwap(s, l, i);
		permute(s, l + 1, r);
		mySwap(s, l, i);
	}
};

main()
{
	string j = "Zarine";
	permute(j, 0, 5);
}