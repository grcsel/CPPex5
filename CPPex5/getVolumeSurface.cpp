struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize; //������}�փT�C�Y
	double size; //�ו��̑傫��
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