#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include <chrono>

class Block {
public:
	int index;
	Block* prev_block;
	std::string this_hash;
	std::string prev_hash;
	Block(std::string data) {
		this->data = data;
		std::time_t result = std::time(nullptr);
		this->timestamp = std::asctime(std::localtime(&result));
	};
	void set_hash();
private:
	std::string timestamp;
	std::string data;
	void set_hash_nonce();
};