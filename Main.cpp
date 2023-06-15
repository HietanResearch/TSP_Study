#include <iostream>
#include <vector>
#include "Map.hpp"

std::ostream& operator<<(std::ostream& os, std::vector<int>& v){
	for(int i: v) std::cout << i << ' ';
	return os;
}

int main(void){
	Map map(100, 100, 10);

	std::vector<int> paths = map.solveNearestNeighbor();

	map.printNodes();
	std::cout << paths << std::endl;

	return 0;
}
