#include <iostream>
using namespace std;
#include "getVolumeSurface.h"
BOX box;
int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "������́F";
		cin >> boxes[i].x;
		cout << "��������́F";
		cin >> boxes[i].y;
		cout << "���s����́F";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		cout << "\n";
		if (boxes[i].packSize == 0) {
			cout << "��}�ւł͑���܂���";
		}
		else {
			cout << boxes[i].packSize << "�T�C�Y�ő���܂�";
			cout << "\n";
		}

	}
	return 0;
}