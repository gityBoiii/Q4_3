#pragma once
using namespace std;

class Blocks
{
public:
	Blocks(); // 값 없을 시 초기화
	Blocks(int InSheet, int Vertical, int Horizontal); // 값 넣으면, 내장 변수에 지정
	int Sheet;
	int Vertical;
	int Horizontal;

};

