#include <iostream>
#include <vector>
#include "Blocks.h"
using namespace std;

int main()
{
		// ���� �����
	// ���̵�� : ������ / ������ / (����, ����) ��ǥ 
	
	vector<Blocks> MyBlocks;
	MyBlocks.push_back(Blocks(1, 5, 4));
	MyBlocks.push_back(Blocks(2, 5, 9));
	MyBlocks.push_back(Blocks(3, 9, 7));


	return 0;
}