#include "Blockchain.h"

void Blockchain::add_block(std::string data)
{
	Block* b = new Block(data+this->chains.at(this->chains.size() - 1)->this_hash + std::to_string(this->chains.size()));
	b->index = this->chains.size();
	this->chains.push_back(b);
}
