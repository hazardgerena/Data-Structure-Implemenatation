/*
 * LinkedList.h
 *
 *  Created on: Aug 8, 2015
 *      Author: Hazard Nguyen
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
using namespace std;
template <class T>
	struct Node{
		T data;
		Node<T> *next;
		Node(){
			this->data = NULL;
			this->next = NULL;
		}
		Node(T value){
			this->data = value;
			this->next = NULL;
		}
		Node(const Node<T>& copy){
			this->data = copy.data;
			this->next = copy.next;
		}
		~Node(){

		}
		Node<T>& operator=(const Node<T>& obj){
			this->data = obj.data;
			this->next = obj.next;
			return *this;
		}
	};
template <class T>
class LinkedList{
private:

	Node<T> *head;
	Node<T> *tail;
public:
	LinkedList();
	LinkedList(Node<T>*);
	LinkedList(const LinkedList<T>&);
	LinkedList<T>& insertTail(T);
	LinkedList<T>& insertHead(T);

	Node<T>* begin();
	Node<T>* end();
	LinkedList& operator=(const LinkedList&);
	void print();
	~LinkedList();
	//friend ostream& operator<<(ostream&,const LinkedList<T>&);
	//Node<T>& iterator;
private:
	void addNode(Node<T>* data);

};

template <class T>
LinkedList<T>::LinkedList(){
	this->head	 	= NULL;
	this->tail		= NULL;
	//this->iterator	= new Node<T>();
}
template <class T>
LinkedList<T>::LinkedList(Node<T>* newNode){
	this->head = newNode;
	this->tail = newNode;
	//this->iterator = newNode;

}
template <class T>
Node<T>* LinkedList<T>::begin(){
	return this->head;
}
template <class T>
Node<T>* LinkedList<T>::end(){
	return this->tail;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& obj) :head(NULL),tail(NULL){
	Node<T>* cur = obj.head;
	while(cur){
		Node<T>* newNode = new Node<T>(cur->data);
		this->addNode(newNode);
		cur=cur->next;
	}


}

template <class T>
LinkedList<T>& LinkedList<T>::insertTail(T val){
	Node<T>* data = new Node<T>(val);
	if(this->tail==NULL){
		data->next = this->tail;
		this->head = data;
		this->tail = data;
		

	}else{
		tail->next 	= data;
		tail 		= tail->next;

	}

	return *this;
}
template <class T>
LinkedList<T>& LinkedList<T>::insertHead(T val){
	Node<T>* data = new Node<T>(val);
	data->next = this->head;
	this->head = data;
	if(this->head->next==NULL){
		this->tail=data;
	}
	return *this;
}

template <class T>
void LinkedList<T>::addNode(Node<T>* data){
	if(this->tail==NULL){

			data->next = this->tail;
			this->head = data;
			this->tail = data;
			return;
	}
	this->tail->next 	= data;
	this->tail 			= this->tail->next;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other){
	this->head = other.head;
	this->tail = other.tail;
	return *this;
}
/*template <class T>
ostream& operator<<(ostream& out,const LinkedList<T>& list){
	Node<T> *cur = list.begin();
	while(cur){
		out<<cur->data<<" ";
		cur = cur->next;
	}
	out<<endl;
	return out;
}*/
template <class T>
void LinkedList<T>::print(){
	Node<T> *cur = this->begin();
	cout<<"Linked List elements:"<<endl;
	while(cur!=this->end()){
		cout<<cur->data<<"-->";
		cur = cur->next;
	}
	cout<<"NULL"<<endl;
}
template <class T>
LinkedList<T>::~LinkedList(){

	//delete(this->head);
	//delete(this->tail);
	///this->head = NULL;
	//this->tail = NULL;
	Node<T>* cur = this->head;
	while(cur){
		this->head = head->next;
		delete cur;
		cur = this->head;
	}
	cur = NULL;

}

#endif /* LINKEDLIST_H_ */
