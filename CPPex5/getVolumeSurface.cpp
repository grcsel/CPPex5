struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //送れる宅急便サイズ
	double size; //荷物の大きさ
};

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	box->size = box->x + box->y + box->z;

	for (int i = 60; i <= 160; i += 20) {
		if (box->size <= i) {
			box->packSize = i;
			break;
		}
		box->packSize = 0;
	}
	return;
}