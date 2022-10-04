#include "Blocks.h"
#include <iostream>

Blocks::Blocks()
{
	Sheet = 0;
	Vertical = 0;
	Horizontal = 0;

	cout << "Blocks 0으로 초기화!" << endl;
}

Blocks::Blocks(int InSheet,  int InVertical, int InHorizontal)
{
	Sheet = InSheet;
	Vertical = InVertical;
	Horizontal = InHorizontal;

	cout << "Blocks 생성됨!" << endl;
	cout << "Sheet " << Sheet << "번의 " << "크기는 : " << Vertical << " * " << Horizontal << endl;

	for (int i = 0; i < Vertical; i++)
	{
		for (int j = 0; j < Horizontal; j++)
		{
			cout << "□";
		}
		cout << " " << endl;

	}

}
