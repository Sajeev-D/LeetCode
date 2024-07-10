#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class RandomizedSet {
 public:
  vector<int> value;
  unordered_map<int, int> map;

  RandomizedSet() {}

  // Done
  bool insert(int val) {
    if (map.find(val) != map.end()) {
      return false;
    } else {
      value.push_back(val);
      map[val] = value.size() - 1;
      return true;
    }
  }

  bool remove(int val) {
    if (map.find(val) == map.end()) {
      return false;
    } else {
      value.erase(map[val]);
      map.erase(val);
    }
  }

  // Done
  int getRandom() { return value[rand() % (value.size() - 1)]; }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */