#include<iostream>
#include"C.h"
using namespace std;
extern int a=1;
extern void op();
//int a = 2;
void op(){
	cout << "its a" << endl;
}
void main(){
	int a = 3;
	cout << a << endl;
	op();
	test();
	getchar();

}