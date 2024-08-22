#include <bits/stdc++.h>
using namespace std;

void is_digits(string& str)
{
	for (char ch : str) {
		if (!isdigit(ch)){
			cout << "False" << endl;
			return;
		}
	}

	cout << "True" << endl;
}

int main()
{
	string str = "125";
	is_digits(str);

	str = "1h34";
	is_digits(str);

	str = "012";
	is_digits(str);

	return 0;
}
