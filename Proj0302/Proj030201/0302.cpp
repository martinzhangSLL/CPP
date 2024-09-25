#include<iostream>
using namespace std;

void process();

void judgeNumber();
void getAbs();
void isOdd();
void canBeDividedBy357();

int main() {

	int iNum;

	process();

	while (true) {
		
		printf("\nPlease input 1 to continue, otherwise program will break: ");
		scanf_s("%d", &iNum);
		if (iNum == 1) {
			
			printf("\n");
			process();
		}
		else {
			
			break;
		}
	}
	

}

void process() {
	
	int iNum;

	printf("1- JudgeNumber \n");
	printf("2- GetAbs \n");
	printf("3- IsOdd \n");
	printf("4- canBeDividedBy357 \n");

	printf("\nPlease select a number: ");
	scanf_s("%d", &iNum);

	switch (iNum)
	{
	case 1:
		judgeNumber();
		break;

	case 2:
		getAbs();
		break;

	case 3:
		isOdd();
		break;

	case 4:
		canBeDividedBy357();
		break;

	default:
		break;
	}
}