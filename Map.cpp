#include "Map.hpp"
#include "Path.hpp"

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

void Map::printNodes(std::ofstream& f){
	for(Node& n: nodes) f << n;
}

std::vector<Path> Map::solveNearestNeighbor(){
	std::vector<Path> paths = std::vector<Path>();
	int start_ind = 0;

	Node* prevNode = &nodes.at(start_ind);

	for(int i = 0; i < nodesCount - 1; i++){
		int min_ind;
		double min_length = DBL_MAX;

		prevNode->setIsVisited(true);

		for(int j = 0; j < nodesCount; j++){
			if(nodes.at(j).getIsVisited()) continue;

			double length = calcDistance(*(prevNode), nodes.at(j));
			if(length < min_length){
				min_ind = j;
				min_length = length;
			}
		}

		paths.push_back(Path(*(prevNode), nodes.at(min_ind)));
		prevNode = &nodes.at(min_ind);
	}

	paths.push_back(Path((paths.end() - 1)->getN2(), paths.begin()->getN1()));

	return paths;
}
