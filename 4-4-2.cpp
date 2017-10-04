#include <iostream>
using namespace std;

int main(){
	int cards[13] = { 101, 112, 113, 206, 207, 208, 303, 304, 309, 402, 405, 410 };
	int id = -1, low = 0, high = 12;
	while (low <= high)
	{
		int middle = (low + high) / 2;
		if (cards[middle] == 112)
		{
			id = middle;
			break;
		}
		else if (cards[middle] > 112)
			high = middle - 1;
		else
			low = middle + 1;
	}
	if (id != -1)
		cout << "第" << id + 1 << "张是Q" << endl;
	else
		cout << "没有黑桃Q";
	return 0;
}