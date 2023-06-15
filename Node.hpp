#pragma once

#include <iostream>

class Node {
	private:
		int x;
		int y;
	public:
		Node();
		Node(int x, int y);
		void print(std::ostream& os);
};

std::ostream& operator<<(std::ostream& os, Node& n);
