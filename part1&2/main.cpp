#include <iostream>
using namespace std;

int main() {
	cout << "Hello World\n";

#ifdef DEBUG_MODE
	cout << "Debug mode is ON\n";
#endif

#ifdef VERBOS_MODE
	cout << "Verbose mode is ON\n";
#endif

	return 0;
}

