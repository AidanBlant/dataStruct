#ifndef LIST_H 
#define LIST_H
/*
Copying http://pumpkinprogrammer.com/2014/06/13/c-tutorial-intro-to-linked-lists/
Header file.  Then writing my own code for .cpp file.

*/


struct node{
	string nodeString;
	//Maybe use "item"? Or a template<>, whatever those were called.
	node * next;
};


class LinkedList{

	public:
		LinkedList();
		// listlength? necessary?
		//bool insertNode( node * newNode, int position );

		//bool removeNode( node * newNode, int position );
		bool pushNode( node * newNode, int position );
		bool pullNode( node * newNode, int position );


		void printList();


	private:
		node * head;

};


#endif