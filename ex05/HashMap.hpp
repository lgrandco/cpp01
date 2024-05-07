#ifndef HASHMAP_HPP
#define HASHMAP_HPP

#include <cstdlib>
#include <iostream>

#define TABLE_SIZE 26

class Harl;

class HashMap {
    std::pair<std::string, void (Harl::*)()>* buckets[TABLE_SIZE];

public:
    HashMap();
    void insert(const std::string& key, void (Harl::*value)());
    void (Harl::*get_fct(const std::string& key))();
    ~HashMap();

private:
    size_t compute_hash(const std::string& s) { return (s[0] - 'A') % 26; }
};

#endif
