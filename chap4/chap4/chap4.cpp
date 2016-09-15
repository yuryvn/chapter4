// chap4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS

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

//--------------------ex 4.30-------bucket sort-------ONLY POSITIVE integer in the array

//void bucketsort(int[], int);
//const int ArraySize = 20;
//
//int main(void){
//
//	int array[ArraySize] = { 4, 2, 6, 71, 3, 166, 242, 255, 631, 4, 1, 3, 25, 631, 422, 74226, 351, 353, 31, 5 };
//	int wish;
//
//	cout << "want to enter array?1/0" << endl;
//	cin >> wish;
//	if (wish == 1){
//		cout << "enter " << ArraySize << " elements" << endl;
//		for (int i = 0; i < ArraySize; i++){
//			cout << i + 1 << ":";
//			cin >> array[i];
//		}
//	}
//	for (int i = 0; i < ArraySize;i++)
//		cout << array[i]<<" ";
//	cout << endl;
//
//	bucketsort(array, ArraySize);
//
//	for (int i = 0; i < ArraySize; i++)
//		cout << array[i] << " ";
//	cout << endl;
//
//	return 1;
//}
//
//void bucketsort(int a[], int size){
//	int SupArray[10][ArraySize] = {};
//	int max = 0, razryad = 1, count = 0;
//	for (int i = 0; i < size; i++)
//		if (max < a[i]) max = a[i];
//
//
//	while (max > 0){
//		max /= 10;
//		memset(SupArray, 0, sizeof(SupArray[0][0]) * 10 * size);//zero the array
//
//
//		for (int i = 0; i < size; i++){
//			SupArray[a[i] / razryad % 10][i] = a[i];
//		}
//
//		count = 0;
//
//		for (int k = 0; k < 10; k++){
//			for (int i = 0; i < size; i++){
//				if (SupArray[k][i] != 0){
//					a[count] = SupArray[k][i];
//					count++;
//					SupArray[k][i] = 0;
//				}
//			}
//		}
//
//		razryad *= 10;
//	}
//	return;
//}


/////---------------ukazateli chapter 5==================
//
//void main(void){
//	int a = 10;
//	int *aPtr = &a;
//
//	cout << "Pointer aPtr=" << aPtr << endl;
//	cout << "Value contained at pointer location *aPtr=" << *aPtr << endl;
//	cout << "a=" << a << endl;
//	cout << "adress of a &a=" << &a << endl;
//	return;
//}

//int *Ptrvar;//nekonstantnii ukazatel' na nekonstantnie dannie
//const int *Ptr; //nekonstantnii ukazatel' na konstantnie dannie, ne dayot modificirovat' dannie, eto esli hotim zaschitit' dannie
//int * const Ptrcon;// konstantnii ukazatel' na nekonstantu- naprimer na massive
//const int * const conPtrcon;//konstatnti vezde

// ------------------sizeof----------------------

//int array[20] = {};
//double arrayf[20] = {};
//
//int main(void){
//	cout << "int array 20 size=" << sizeof(array) << endl;
//	cout << "float array 20 size=" << sizeof(arrayf) << endl;
//
//}
//

//-----------------function as parameter-------------

//int bigger(const int,const int);
//int smaller(const int,const int);
//int compare(const int, const int, int (*)(const int, const int));
//
//int main(void){
//	int a = 1;
//	int b = 2;
//
//	cout << a << "<" << b << "? " << compare(a, b, smaller)<<endl;
//	cout << a << ">" << b << "? " << compare(a, b, bigger)<<endl;
//	return 0;
//}
//int bigger(const int a, const int b){
//	if (a > b) return 1;
//	else return 0;
//}
//int smaller(const int a, const int b){
//	if (a < b) return 1;
//	else return 0;
//}
//int compare(const int a, const int b, int (*funcparam)(const int, const int)){
//	return funcparam(a, b);
//}


//--------------------------massive ukazateley na funkcii----------------
//void func1(const int);
//void func2(const int);
//void func3(const int);
//
//int main(){
//	void(*f[3])(const int) = { func1, func2, func3 }; // a vot i massive
//	int choice, value;
//	
//	cout << "choose value:" << endl;
//	cin >> value;
//
//	cout << "choose function 0-'+2';1-'+3';2-'^2':" << endl;
//	cin >> choice;
//	(*f[choice])(value);
//}
//void func1(const int a){
//	cout << a + 2;
//	return;
//}
//void func2(const int a){
//	cout << a + 3;
//	return;
//}
//void func3(const int a){
//	cout << a*a;
//	return;
//}

//void main(void){
//	char a[] = "zdes 3 slova";
//	char *Ptr;
//	cout<<a<<endl;
//	Ptr = a;
//	cout << *(Ptr+1)<<endl;
//
//	char *TokenPtr;
//
//	TokenPtr = strtok(a, " ");
//	cout << TokenPtr << "\t" << a << endl;
//	cout << strtok(NULL, " ");
//}
//

//--------------------playing cards

void Shuffle(int *,const int size);
const int DeckSize = 52;
void Sdacha(const int *, const int size);
void Sdacha_v_ruku(const int *Deck, int hand[5], const int StartCard = 0, const int HandSize = 5);
int PokerCheck(int *Hand, const int size=5);
void PrintHand(const int Hand[], const int size = 5);


char *masti[4] = { "Piki", "Kresti", "Buby", "Chervi" };
char *cardvalue[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valet", "Dama", "King", "Tuz"};
char *PokerHand[9] = { "Para", "2 Pary", "Troika", "Straight", "Flush", "Full House", "Poker", "Straight Flush","Royal Flush"};

int main(void){
	int PlayerHand[5] = {};
	int PlayerHandEvaluation = 0, BigCard = 0;
	int Deck[DeckSize] = {};
	int restart = 1, sdach = 0;

	srand(time(NULL));

	Shuffle(Deck, DeckSize);


	while (restart == 1||restart==2){
		if (5 * sdach > (DeckSize - 5)){
			cout << "Automatic reshuffle as deck is empty" << endl;
			sdach = 0;
			Shuffle(Deck, DeckSize);
		}
		Sdacha_v_ruku(Deck, PlayerHand,5*sdach);
		PrintHand(PlayerHand, 5);
		PlayerHandEvaluation=PokerCheck(PlayerHand, 5);
		BigCard = PlayerHandEvaluation / 10;

		if (PlayerHandEvaluation % 10 == 0) cout << "You have nothing on your hand";
		else cout << "You have " << PokerHand[PlayerHandEvaluation % 10]; 

		cout << " with biggest card " << setw(8) << right << cardvalue[(BigCard - 1) % 13] << " " << setw(6) << masti[(BigCard - 1) / 13] << endl;

		sdach++;
		cout << "peresdat'=1; tasovat'=2; exit=0: ";
		cin >> restart;
		if (restart == 2) {
			Shuffle(Deck, DeckSize);
			sdach = 0;
		}

	}
	return 1;


}

void Shuffle(int *Deck, const int size){
	int ShuffleHelp1[DeckSize] = {};
	int Card;

	for (int i = 0; i < DeckSize; ShuffleHelp1[i] = i++ + 1);

	for (int i = 0; i < DeckSize; i++){
		Card = rand() % (DeckSize - i) + 1;
		*(Deck+i) = ShuffleHelp1[Card];
		for (int count = Card; (ShuffleHelp1[count] != 0) && (count < DeckSize); count++)
			count == (DeckSize - 1) ? ShuffleHelp1[count] = 0 : ShuffleHelp1[count] = ShuffleHelp1[count + 1];
	}
	return;
}


void Sdacha_v_ruku(const int *Deck, int hand[5],const int StartCard=0,const int HandSize=5){
	if (StartCard + HandSize > DeckSize) { cout << "reshuffle deck"; return; }
	for (int i = 0; i < HandSize; hand[i] = Deck[StartCard + i++]);
	return;
}

void PrintHand(const int Hand[], const int size){
	int Card = 0;
	for (int count = 0; count < size; count++){
		Card = *(Hand + count);

		if (Card > 52) cout << setw(15) << "Joker" << endl;
		else cout << setw(8) << right << cardvalue[(Card - 1) % 13] << " " << setw(6) << masti[(Card - 1) / 13] << endl;
	}
}


//void Sdacha(const int *Deck, const int NumberOfCards){
//	int Card1,Card2;
//	for (int count = 0; count < NumberOfCards/2; count++){
//		Card1 = *(Deck + count);
//		Card2 = *(Deck + count + NumberOfCards / 2);
//		//first card goes into first player hand
//		if (Card1 > 52) cout << setw(15)<<"Joker"<<"\t";
//		else cout << setw(8)<<right<<cardvalue[(Card1 - 1) % 13] << " " << setw(6)<<masti[(Card1 - 1) / 13] << "\t";
//
//		//second player hand
//		if (Card2 > 52) cout << setw(15) << "Joker" << endl;
//		else cout << setw(8) << right << cardvalue[(Card2 - 1) % 13] << " " << setw(6) << masti[(Card2 - 1) / 13] << endl;
//	}
//
//	return;
//}


void bucketsort(int a[], const int size){
	int SupArray[10][5] = {};
	int max = 0, razryad = 1, count = 0;

	for (int i = 0; i < size; i++)
		if (max < a[i]) max = a[i];
		
		
	while (max > 0){
		max /= 10;
		memset(SupArray, 0, sizeof(SupArray[0][0]) * 10 * size);//zero the array
		
		
		for (int i = 0; i < size; i++){
			SupArray[a[i] / razryad % 10][i] = a[i];
		}
		
		count = 0;
		
		for (int k = 0; k < 10; k++){
			for (int i = 0; i < size; i++){
				if (SupArray[k][i] != 0){
					a[count] = SupArray[k][i];
					count++;
					SupArray[k][i] = 0;
				}
			}
		}
		
		razryad *= 10;
	}
	return;
}

int PokerCheck(int *Hand, const int size){//will return number corresponding to poker hand (biggest card code*10+hand code)
	void bucketsort(int a[], const int size);
	int suits[5] = {}, values[5] = {};
	int result, flush = 1, straight = 1, para = 0, pary2 = -1, troika = -1, fullhouse = -2, poker = -2;
	int BiggestCard = size-1; //starting from the position of the card

	bucketsort(Hand, size);
	for (int i = 0; i < size; i++){
		suits[i] = (Hand[i] - 1) % 13;
		values[i] = (Hand[i] - 1) / 13;
	}
	for (int i = 1; i < size; i++){
		if (suits[i] != suits[i - 1]) flush = 0;
		if (values[i] != values[i - 1] + 1) straight = 0;
		if (values[i] == values[i - 1]) { poker++; fullhouse++; troika++; para++; pary2++; BiggestCard = i; }
		if (troika) if (values[i - 1] == values[i]) pary2 = -2;
	}

	BiggestCard = values[BiggestCard]; //now it is actaul card

	if (poker > 0 && (values[0] == values[1] && values[3] == values[4]))  return 6 + 10 * BiggestCard; 
	else return 7 + 10 * BiggestCard;
	if (fullhouse>0){ para = 0; pary2 = 0; troika = 0; }
	if (troika>0)	return 3 + 10 * BiggestCard;
	if (pary2 > 0) return 2+10 * BiggestCard;
	if (para > 0)return 1 + 10 * BiggestCard;

	if (flush == 1 && straight == 1&& BiggestCard==12) return 9 + 10 * BiggestCard;
	if (flush == 1 && straight == 1) return 8 + 10 * BiggestCard;
	if (flush == 1)return 5 + 10 * BiggestCard;
	if (straight == 1)return 4 + 10 * BiggestCard;


	return 10 * BiggestCard;
}

