#include "Blocks.h"
#include <iostream>

Blocks::Blocks()
{
	Sheet = 0;
	Vertical = 0;
	Horizontal = 0;

	cout << "Blocks 0���� �ʱ�ȭ!" << endl;
}

Blocks::Blocks(int InSheet,  int InVertical, int InHorizontal)
{
	Sheet = InSheet;
	Vertical = InVertical;
	Horizontal = InHorizontal;

	cout << "Blocks ������!" << endl;
	cout << "Sheet " << Sheet << "���� " << "ũ��� : " << Vertical << " * " << Horizontal << endl;

	for (int i = 0; i < Vertical; i++)
	{
		for (int j = 0; j < Horizontal; j++)
		{
			cout << "��";
		}
		cout << " " << endl;

	}

}
