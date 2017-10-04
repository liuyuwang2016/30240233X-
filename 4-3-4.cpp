#include <iostream>
using namespace std;

int main(){
	int cards[13] = { 101, 113, 303, 206, 405, 208, 311, 304, 410, 309, 112, 207, 402 };
	int min = 100, pos = -1;
	for (int i = 0; i < 13; i++){
		if (cards[i] % 100>7)
		{
			if (cards[i] % 100 < min)
			{
				min = cards[i] % 100;
				pos = i;
			}
		}
	}
	if (pos != -1)
		cout << "比7大的最小的数是第" << pos + 1 << "张" << endl;
	else
		cout << "没有比7大的牌了" << endl;
	return 0;

}