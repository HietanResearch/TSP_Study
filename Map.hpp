#pragma once

#include <cfloat>
#include <cstdlib>
#include <ctime>
#include <fstream>
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
		void printNodes(std::ofstream& f);
		void printPaths(std::vector<int>& paths, std::ofstream& f);
		std::vector<int> solveNearestNeighbor();
};
