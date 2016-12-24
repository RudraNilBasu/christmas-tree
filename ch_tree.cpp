#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "rlutil.h"

#define GREEN 2
#define BLUE 1
#define CYAN 3
#define RED 4
#define PURPLE 5
#define Yellow_dark 6
#define white 7
#define Grey 8
#define Bright_blue 9
#define Brigth_green 10
#define Bright_cyan 11
#define Bright_red 12
#define Pink 13
#define Yellow 14
#define white_bright 15

using namespace rlutil;
using namespace std;

int main()
{
	rlutil::setColor(2); // 2 for Green

	std::cout << "Hello! I am green!" << std::endl;

	rlutil::setColor(1);
	std::cout<<"The Phenomenal RNB\n";

	int i,j;
	setColor(2);
	int base=15; // min space at the end of the tree
	// printing the top portion
	int top=15+45;
	setColor(Yellow);
	for(i=1;i<=top;i++) {cout<<' ';}
	cout<<"*\n";
	// first layer
	int layer2=top-12;
       	srand(time(NULL));	
	// max reach of layer2 from
	// top left most part = top-12
	int st=11;
	for(i=1;i<=10;i++) { // 12
		for(j=1;j<=layer2;j++) {
			cout<<' ';
		}
		//cout<<'|';
		for(j=1;j<=st;j++) {
			cout<<' ';
		}
		st--;
		for(j=1;j<=(2*(i+1))-1;j++) {
			int x=rand()%10;
			if(x>8) {
				setColor(RED);
				cout<<'*';
			} else {
				setColor(GREEN);
				cout<<'@';
			}
		}
		cout<<'\n';
	}
	// second layer
	st=9;
       	srand(time(NULL));	
	int layer3=layer2-3;
	int k;
	for(i=1;i<=10;i++) {
		for(j=1;j<=layer3;j++) {
			cout<<' ';
		}
		//cout<<'|';
		for(j=1;j<=st;j++) {
			cout<<' ';
		}
		st--;
		k=i+5;
		for(j=1;j<=(2*(k+1))-1;j++) {
			int x=rand()%10;
			if(x>8) {
				setColor(RED);
				cout<<'*';
			} else {
				setColor(GREEN);
				cout<<'@';
			}
		}
		cout<<'\n';
	}
	// third layer
	st=5;
       	srand(time(NULL));	
	int layer4=layer3-5;
	int l=29;
	int m=0;
	for(i=1;i<=6;i++) {
		for(j=1;j<=layer4+1;j++) {
			cout<<' ';
		}
		//cout<<'|';
		for(j=1;j<=st;j++) {
			cout<<' ';
		}
		st--;
		k=i+5;
		for(j=1;j<=l+m;j++) {
			int x=rand()%10;
			if(x>8) {
				setColor(RED);
				cout<<'*';
			} else {
				setColor(GREEN);
				cout<<'@';
			}
		}
		m+=2;
		cout<<'\n';
	}
	// fourth layer
	st=4;
       	srand(time(NULL));	
	int layer5=layer4-4;
	l=37;
	m=0;
	for(i=1;i<=5;i++) {
		for(j=1;j<=layer5+2;j++) {
			cout<<' ';
		}
		//cout<<'|';
		for(j=1;j<=st;j++) {
			cout<<' ';
		}
		st--;
		k=i+5;
		for(j=1;j<=l+m;j++) {
			int x=rand()%10;
			if(x>8) {
				setColor(RED);
				cout<<'*';
			} else {
				setColor(GREEN);
				cout<<'@';
			}
		}
		m+=2;
		cout<<'\n';
	}
	int trunk=15+43; // 40
	setColor(3);
	for(k=1;k<=5;k++) {
		for(i=1;i<=layer5+2+20;i++) {
			cout<<' ';
		}
		cout<<"******\n";
	}
	//cout<<"||||||||||"<<endl;
	// test
	setColor(PURPLE);
	for(i=0;i<15;i++) {
		cout<<' ';
	}
	for(i=0;i<=90;i++) {
		cout<<'*';
	}
	cout<<'\n';
	return 0;
}
