#include <iostream>
#include "Map.hpp"

int main(void){
	Map map(100, 100);
	map.putNodes(10);

	map.printNodes();

	return 0;
}
