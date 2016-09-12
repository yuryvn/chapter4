// chap4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>


using namespace std;

//
//int main(){
//	char stroka[20];
//	int array[10] = { 4, 3, 15 };
//	cout << "key" << setw(6) << "value" << endl;
//	for (int i = 0; i < 10; i++){
//		cout << setw(3)<<i << setw(6) << array[i] << endl;
//	}
//	cout << "enter stroku" << endl;
//	cin >> stroka;
//	cout << stroka << endl;
//	for (int i = 0; stroka[i] != '\0'; i++)
//		cout << stroka[i] << " ";
//	cout << endl;
//	return 0;
//}

//------------------------------ex 4.10-----------------------------------------

//int main(void){
//	int sellercounter[9] = {};
//	int sellers = 15, key;
//	float soldvalue, proc=0.09;
//
//	cout << "Enter amount of sellers" << endl;
//	cin >> sellers;
//
//	for (int i = 1; i <= sellers; i++){
//		cout << "Enter sold items value for " << i << " seller" << endl;
//		cin >> soldvalue;
//		cout << "salary=" << 200 + soldvalue*proc<<endl;
//		key = (int)(soldvalue*proc / 100);
//		if (key > 8) key = 8;
//		sellercounter[key]++;
//	}
//	cout << "Salary range" << "     " << "number of sellers"<<endl;
//	for (int i = 0; i <= 8; i++){
//		cout << 200 + 100 * i << "-" <<setw(6)<<left<< 200 + 100 * i + 99<<"\t" << right<<setw(4) << sellercounter[i] << endl;
//	}
//
//	return 0;
//}


//-------------------------4.17--------------
//
//int RollDice(void);
//
//int main(void){
//	const int howmany = 100000;
//	srand(time(NULL));
//	int DiceResults[11] = {};
//	for (int i=1; i <= howmany; i++){
//		DiceResults[RollDice()]++;
//	}
//	cout << "Value" << setw(13) << "Amount"<<setw(10)<<"Percent"<<endl;
//	for (int i = 0; i <= 10; i++)
//		cout << setw(5) << i + 2 << setw(13) << DiceResults[i]<<setw(10)<<fixed<<setprecision(3)<<(float)(DiceResults[i])/howmany<<endl;
//}
//
//int RollDice(void){
//	return  rand() % 6+rand()%6;
//}












