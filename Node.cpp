#include "Node.hpp"

Node::Node(){};

Node::Node(int xx, int yy){
	x = xx;
	y = yy;
}

void Node::print(std::ostream& os){
	os << x << ',' << y << std::endl;
}

void Node::setIsVisited(bool b){
	isVisited = b;
}

bool Node::getIsVisited(){
	return isVisited;
}

double Node::calcDistance(Node n){
	return sqrt(pow(x - n.x, 2) + pow(y - n.y, 2));
}

std::ostream& operator<<(std::ostream& os, Node& n){
	n.print(os);
	return os;
}
