#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
	int i = 0;
	while(i++ < 10) {
		double r = (rand() % 10) + 1;
		cout << r/10 << " ";
	}
	return 0;
}