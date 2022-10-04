#include <iostream>
#include <vector>
#include "Blocks.h"
using namespace std;

int main()
{
		// 엑셀 만들기
	// 아이디어 : 가로줄 / 세로줄 / (가로, 세로) 좌표 
	
	vector<Blocks> MyBlocks;
	MyBlocks.push_back(Blocks(1, 5, 4));
	MyBlocks.push_back(Blocks(2, 5, 9));
	MyBlocks.push_back(Blocks(3, 9, 7));


	return 0;
}