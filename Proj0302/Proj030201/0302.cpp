#include<iostream>
using namespace std;

void judgeNumber();

int main() {
	
	int iNum;

	printf("1- JudgeNumber \n");
	printf("Please select a number: ");
	scanf_s("%d", &iNum);

	switch (iNum)
	{
	case 1: 
		judgeNumber();
		break;


	default:
		break;
	}
	
}