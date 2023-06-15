#include "Node.hpp"

Node::Node(int xx, int yy){
	x = xx;
	y = yy;
}

void Node::print(std::ostream& os){
	os << x << ' ' << y << std::endl;
}

std::ostream& operator<<(std::ostream& os, Node& n){ n.print(os); }
