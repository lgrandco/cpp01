#include "HashMap.hpp"

HashMap::HashMap() {
    for (int i = 0; i < TABLE_SIZE; ++i) buckets[i] = NULL;
    std::cout << "HashMap created" << std::endl;
}

void HashMap::insert(const std::string& key, void (Harl::*value)()) {
    size_t index = compute_hash(key);
    if (!buckets[index]) buckets[index] = new std::pair<std::string, void (Harl::*)()>(key, value);
    else
        std::cout << "what are u doin, " << buckets[index]->first
                  << " is already there and you can't use dequeues :/ (and u are too lazy to make "
                     "a linked list)"
                  << std::endl;
};

void (Harl::*HashMap::get_fct(const std::string& key))() {
    size_t index = compute_hash(key);
    if (!buckets[index] || buckets[index]->first != key) {
        std::cout << "Key error: " << key << std::endl;
        return NULL;
    } else {
        return buckets[index]->second;
    }
};

HashMap::~HashMap() {
    for (int i = 0; i < TABLE_SIZE; ++i) delete buckets[i];
    std::cout << "HashMap destroyed" << std::endl;
}
