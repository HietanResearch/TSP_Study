#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Map.hpp"

std::ofstream& operator<<(std::ofstream& f, std::vector<int>& v){
	for(int i = 0; i < int(v.size()) - 1; i++) f << v.at(i) << ',' << v.at(i + 1) << std::endl;
	return f;
}

int main(int argc, char *argv[]){
	Map map(100, 100, 20);

	std::vector<int> paths = map.solveNearestNeighbor();

	std::ofstream file;

	if(argc >= 2) file = std::ofstream(argv[1]);
	else file = std::ofstream("nodes.csv");
	
	if(!file) {
		std::cerr << "Failed to open a file." << std::endl;
		std::exit(1);
	}

	map.printPaths(paths, file);

	return 0;
}
