#include<iostream>
#include<fstream>

main() {
	std::ifstream inf{"PTIT.in"};
	std::ofstream outf{"PTIT.out"};
	std::string line;
	while(std::getline(inf, line))
		outf << line << "\n";
	inf.close();
	outf.close();
}
