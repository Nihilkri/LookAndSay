#include "LookAndSay.h"

LookAndSay::LookAndSay(){}
LookAndSay::~LookAndSay(){}

int main(int argc, char* argv[]) {
	stringstream o, n; int d = -1, c = -1, x = 0;
	int lim = 20;

	o << "1";

	for (int i = 0; i < 5; i++) {
		d = -1; c = -1; x = 0; lim = 5;
		//for (int x = 0; x < o.str().length(); x++) {
		while (lim-- != 0) {
			x = o.get() - 48;
			cout << "i " << i << "  lim " << lim << "  d " << d << "  c " << c << "  x " << x 
				<< "  \"" << o.str() << "\"" << "  \"" << n.str() << "\"" << endl;
			
			if (x < 0) { n << c << d; break; }
			if (x != d) { 
				if (d != -1) { n << c << d; d = x; c = 1; }
				else{ d = x; c = 1; }
			}
			else c++;

		}
		o.str(string()); o << n.str(); n.str(string()); d = -1, c = -1;
		cout << "i " << i << "  \"" << o.str() << "\"" << endl;
	}


	cout << endl << "Press any key to continue." << endl; while (cin.peek() == 0){}
	return 0;
}

