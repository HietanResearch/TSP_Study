#include "Map.hpp"

Map::Map(int w = 100, int h = 100, int c = 10){
	width = w;
	height = h;
	nodesCount = c;

	putNodes();
}

void Map::putNodes(int count){
	nodesCount = count;
	Map::putNodes();
}

void Map::putNodes(){
	srand(time(NULL));

	nodes = std::vector<Node>(nodesCount);
	for(Node& n: nodes){
		int x = rand() % width;
		int y = rand() % height;
		n = Node(x, y);
	}
}

void Map::printNodes(){
	for(Node& n: nodes) std::cout << n;
}

std::vector<int> Map::solveNearestNeighbor(){
	std::vector<int> paths = std::vector<int>(nodesCount + 1);

	paths.at(0) = 0;
	nodes.at(0).setIsVisited(true);

	for(int i = 1; i <= nodesCount; i++){
		int min_ind;
		double min_length = DBL_MAX;

		Node prevNode = nodes.at(i - 1);

		for(int j = 1; j < nodesCount; j++){
			if(nodes.at(j).getIsVisited()) continue;

			double length = prevNode.calcDistance(nodes.at(j));
			if(length < min_length){
				min_ind = j;
				min_length = length;
			}
		}

		paths.at(i) = min_ind;
		nodes.at(min_ind).setIsVisited(true);
	}

	paths.at(nodesCount) = 0;

	return paths;
}
