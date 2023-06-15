#pragma once

#include <fstream>
#include <vector>
#include "Node.hpp"

class Path {
	private:
		Node n1;
		Node n2;
	public:
		Path(Node n1, Node n2);
		Node& getN1();
		Node& getN2();
		friend void printPaths(std::vector<Path>& v, std::ostream& os);
		friend void printPaths(std::vector<Path>& v, std::ofstream& f);
		friend void printAllPaths(std::vector<Path>& v, std::ostream& os);
};
