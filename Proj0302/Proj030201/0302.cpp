#include<iostream>
using namespace std;

void judgeNumber();
void getAbs();

int main() {
	
	int iNum;

	printf("1- JudgeNumber \n");
	printf("2- GetAbs \n");

	printf("Please select a number: ");
	scanf_s("%d", &iNum);

	switch (iNum)
	{
	case 1: 
		judgeNumber();
		break;

	case 2:
		getAbs();
		break;

	default:
		break;
	}
	
}