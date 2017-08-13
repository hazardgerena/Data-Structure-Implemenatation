/*
 * Test.cpp
 *
 *  Created on: Aug 8, 2015
 *      Author: Hazard Nguyen
 */
#include "LinkedList.h"
#include <iostream>
using namespace std;


int main(){

	/*LinkedList<int> intList;
	intList.insertTail(1);
	intList.insertTail(2);
	intList.insertTail(3);
	cout<<"List : ";
	cout<<intList<<endl;*/
	LinkedList<int> inlist;
	inlist.insertTail(1).insertTail(2).insertHead(3).insertTail(4).insertTail(5).insertTail(6).insertHead(1).insertHead(2).insertHead(3);
	cout<<"LinkedList Implementation"<<endl;
	inlist.print();
	inlist.insertHead(6).insertHead(7).insertHead(8).insertHead(9).insertHead(10);
	inlist.print();
	LinkedList<int> a = inlist;
	//a = inlist;
	//cout<<"Assing list a = inlist"<<endl;
	//a.print();
	LinkedList<int>::iterator it = a.begin();
	cout<<"Go through linkedlist"<<endl;
	for(it;it!=a.end();it++){
		cout<<(*it)<<"-->";
	}
	cout<<"NULL"<<endl;

	return 0;
}


