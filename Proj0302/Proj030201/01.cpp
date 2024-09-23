#include<iostream>

using namespace std;

 void judgeNumber() {

	int iNum;
	string strResult;

	printf("Please input a number: ");
	scanf_s("%d", &iNum);

	if (iNum > 0) {

		strResult = "positive";
	}
	else {

		if (iNum == 0) {

			strResult = "zero";
		}
		else {

			strResult = "negtive";
		}
	}

	printf("The number %d is %s", iNum, strResult.c_str());
}