#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <vector>
#include "Node.hpp"

class Map {
	private:
		int width;
		int height;
		std::vector<Node> nodes;

	public:
		Map(int w, int h);
		void putNodes(int count);
		void printNodes();
};

#endif
