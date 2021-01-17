#include <iostream>
using namespace std;
#include "getVolumeSurface.h"
BOX box;
int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力：";
		cin >> boxes[i].x;
		cout << "高さを入力：";
		cin >> boxes[i].y;
		cout << "奥行を入力：";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		cout << "\n";
		if (boxes[i].packSize == 0) {
			cout << "宅急便では送れません";
		}
		else {
			cout << boxes[i].packSize << "サイズで送れます";
			cout << "\n";
		}

	}
	return 0;
}