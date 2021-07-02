#pragma once
#include <vector>
#include <string>
#include "Block.h"

class Blockchain {
public:
	std::vector<Block*> chains;
	Blockchain() {
		Block* b = new Block("000");
		b->index = 0;
		b->set_hash();
		this->chains.push_back(b);
		this->last_block = 1;
	};
	void add_block(std::string data);
private:
	int last_block;
};