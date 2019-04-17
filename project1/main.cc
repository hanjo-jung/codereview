#include "priority_queue.h"

#include <iostream>
#include <cstdlib>


using namespace std;


void pushIntQueue(templatePriorityQueue<int>* Que, int data){
	cout << "[+] Integer "<< data <<" pushed in the Priority Queue." << endl;
	Que->push(data);
}

void popIntQueue(templatePriorityQueue<int>* Que){
	cout << "[+] Integer "<< Que->top() << " will be poped from the Priority Queue." << endl;
	Que->pop();
}

int main(int argc, char* argv[]){
	templatePriorityQueue<int> priQueue;
	int customNumber = 0;

	//empty check
	if(priQueue.empty()){
		cout << "[!] Priority Queue is empty - initalized" << endl;
	}

	// push
	pushIntQueue(&priQueue,23);
	pushIntQueue(&priQueue,598);
	pushIntQueue(&priQueue,302);

	if( argc > 1 ){
		customNumber = atoi(argv[1]);
		if( customNumber > -500 && customNumber < 2000 ){
			pushIntQueue(&priQueue,customNumber);
		}
		else{
			pushIntQueue(&priQueue,-1);
		}
	}
	else{
		pushIntQueue(&priQueue,-1);
	}

	//empty & size
	if(priQueue.empty()){
		cout << "[-] Priority Queue is empty. - Push method did not work!" << endl;
		return -1;
	}
	else{
		cout << "[+] Priority Queue has data. - Queue Size : " << priQueue.size() <<endl;
	}

	// pop twice
	popIntQueue(&priQueue);
	popIntQueue(&priQueue);

	cout << "[+] Now, Top element of Priority Queue is " << priQueue.top() << endl;
	
	return 0;
}
