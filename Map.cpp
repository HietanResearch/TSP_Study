#include "Map.hpp"

Map::Map(int w = 100, int h = 100){
	width = w;
	height = h;
}

void Map::putNodes(int count){
	nodes = std::vector<Node>(count);
	for(Node n: nodes){
		n = Node(1, 2);
	}
}

void Map::printNodes(){
	for(Node n: nodes) std::cout << n << std::endl;
}
