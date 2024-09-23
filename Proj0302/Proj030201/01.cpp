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

 void getAbs() {
	
	 float input, output;

	 printf("Please input a float number: ");
	 scanf_s("%f", &input);

	 if (input < 0) {
		
		 output = -input;
	 }
	 else {
		
		 output = input;
	 }

	 printf("The Abs float number of input is %0.2f", output);
 }