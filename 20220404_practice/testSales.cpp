#include <iostream>
#include "SalesReport.h"
using namespace std;
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif // !DBG_NEW
#endif

int main() {
	cout << "학번 : 201710931 이름 : 송진욱"<<endl;
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	SalesReport team1(3);	
	team1.readInput();
	team1.computeStats();	
	cout << team1.getBestClerk().getSalesmanInfo() << endl;
	

	return 0;
}