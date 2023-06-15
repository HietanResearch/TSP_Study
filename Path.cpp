#include "Path.hpp"

Path::Path(Node nn1, Node nn2){
	n1 = nn1;
	n2 = nn2;
}

Node& Path::getN1(){
	return n1;
}

Node& Path::getN2(){
	return n2;
}

void printPaths(std::vector<Path>& v, std::ostream& os){
	for(Path p : v) os << p.n1;
	os << v.begin()->n1;
}

void printPaths(std::vector<Path>& v, std::ofstream& f){
	for(Path p : v) f << p.n1;
	f << v.begin()->n1;
}

void printAllPaths(std::vector<Path>& v, std::ostream& os){
	for(Path p : v) os << p.n1 << " -> " << p.n2;
}
