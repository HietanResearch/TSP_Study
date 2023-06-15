#pragma once

#include <cmath>
#include <iostream>

class Node {
	private:
		int x;
		int y;
		bool isVisited = false;
	public:
		Node();
		Node(int x, int y);
		void print(std::ostream& os);
		void setIsVisited(bool b);
		bool getIsVisited();
		double calcDistance(Node n);
};

std::ostream& operator<<(std::ostream& os, Node& n);
