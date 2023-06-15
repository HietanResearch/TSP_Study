#pragma once

#include <cfloat>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include "Node.hpp"

class Map {
	private:
		int width;
		int height;
		int nodesCount;
		std::vector<Node> nodes;

	public:
		Map(int w, int h, int c);
		void putNodes(int count);
		void putNodes();
		void printNodes();
		std::vector<int> solveNearestNeighbor();
};
