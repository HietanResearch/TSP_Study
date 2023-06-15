#include "Node.hpp"

Node::Node(){};

Node::Node(int xx, int yy){
	x = xx;
	y = yy;
}

void Node::print(std::ostream& os){
	os << x << ',' << y << std::endl;
}

void Node::print(std::ofstream& f){
	f << x << ',' << y << std::endl;
}

void Node::setIsVisited(bool b){
	isVisited = b;
}

bool Node::getIsVisited(){
	return isVisited;
}

double calcDistance(Node n1, Node n2){
	return sqrt(pow(n1.x - n2.x, 2) + pow(n1.y - n2.y, 2));
}

std::ostream& operator<<(std::ostream& os, Node& n){
	n.print(os);
	return os;
}

std::ofstream& operator<<(std::ofstream& f, Node& n){
	n.print(f);
	return f;
}
