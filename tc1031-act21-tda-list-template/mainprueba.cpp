
#include<iostream>
#include <string>
#include "catch.h"
#include "list.h"
#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
	List<int> b1;
	b1.push_front(7); b1.push_front(6); b1.push_front(5);
	b1.push_front(4); b1.push_front(3); b1.push_front(2);
	
	cout<<b1.remove_at(5);
}
