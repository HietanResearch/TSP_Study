#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Map.hpp"
#include "Path.hpp"

int main(int argc, char *argv[]){
	Map map(100, 100, 20);

	std::vector<Path> paths = map.solveNearestNeighbor();

	std::ofstream file;

	if(argc >= 2) file = std::ofstream(argv[1]);
	else file = std::ofstream("nodes.csv");
	
	if(!file) {
		std::cerr << "Failed to open a file." << std::endl;
		std::exit(1);
	}

	printPaths(paths, file);

	return 0;
}
