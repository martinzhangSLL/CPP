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

 void isOdd() {
	
	 int iNum;
	 string strResult;

	 printf("Please input a number: ");
	 scanf_s("%d", &iNum);

	 if (iNum % 2 == 0) {
		 strResult = "even";
	 }
	 else {
		 strResult = "odd";
	 }

	 printf("The number of %d is %s", iNum, strResult.c_str());

 }

 void canBeDividedBy357() {

	 int iNum;
	 string strResult="The number of %d can be divided by ";
	 bool isDivided = false;


	 printf("Please input a number: ");
	 scanf_s("%d", &iNum);

	 if (iNum % 3 == 0) {
		 strResult.append("3 ");
		 isDivided = true;
	 }
	 if (iNum % 5 == 0) {
		 strResult.append("5 ");
		 isDivided = true;
	 }
	 if (iNum % 7 == 0) {
		 strResult.append("7 ");
		 isDivided = true;
	 }
	 if (!isDivided) {
		 strResult = "The number of %d cannot be divided by 3 5 7";
	 }

	 printf(strResult.c_str(), iNum);

 }