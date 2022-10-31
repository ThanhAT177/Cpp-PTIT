#include<iostream>
#include<sstream>
using namespace std;

main() {
	int T;
	cin >> T;
	cin.ignore();
	while(T--) {
		string s;
		getline(cin, s);
		stringstream mycin(s);
		string tmp;
		int count = 0, ss = 0;
		while(mycin >> tmp) {
			int temp = stoi(tmp);
			++count;
			if(temp & 1)
				++ss;
			else
				--ss;
		}
		if(count & 1) {
			if(ss > 0)
				cout << "YES\n";
		}
		else if(ss < 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
