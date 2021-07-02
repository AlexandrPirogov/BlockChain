#include "md5.h"
#include "Block.h"
#include <iostream>

void Block::set_hash()
{
	MD5 md5;
	std::string to_hash = std::to_string(this->index) + this->timestamp+this->data+this->prev_hash;
	std::size_t h1 = std::hash<std::string>{}(to_hash);
	this->this_hash = h1;
}


void Block::set_hash_nonce() {
	std::string nonce = "000";
	MD5 md5;
	std::string to_hash = std::to_string(this->index) + this->prev_hash + this->timestamp + this->data;
	char* pointer = &to_hash[0];
	this->this_hash = md5.digestString(pointer);
	std::string test = this->this_hash.substr(29, 3);
	while (this->this_hash.substr(29, 3) != "abc") {
		this->this_hash = md5.digestString(pointer);
		std::time_t result = std::time(nullptr);
		this->timestamp = std::asctime(std::localtime(&result));
		std :: cout << this->this_hash << std::endl;
		to_hash = std::to_string(this->index) + this->prev_hash + this->timestamp + this->data;
		char* pointer = &to_hash[0];
	}
}