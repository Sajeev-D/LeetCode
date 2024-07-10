// #include <algorithm>
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// class RandomizedSet {
//  public:
//   vector<int> value;
//   unordered_map<int, int> map;

//   RandomizedSet() {}

//   // Done
//   bool insert(int val) {
//     if (map.find(val) != map.end()) {
//       return false;
//     } else {
//       value.push_back(val);
//       map[val] = value.size() - 1;
//       return true;
//     }
//   }

//   // Not clear. Draw and review.
//   bool remove(int val) {
//     if (map.find(val) == map.end()) {
//       return false;
//     } else {
//       // Get the index of the element to be removed
//       int indexToRemove = map[val];
//       // Move the last element to the position of the element to be removed
//       value[indexToRemove] = value.back();
//       // Update the map for the moved element
//       map[value.back()] = indexToRemove;
//       // Erase the last element from the vector
//       value.pop_back();
//       // Remove the element from the map
//       map.erase(val);
//       return true;
//     }
//   }

//   // Done
//   int getRandom() {
//     if (value.empty()) {
//       throw runtime_error("Set is empty");
//     }
//     return value[rand() % value.size()];
//   }
// };

// /**
//  * Your RandomizedSet object will be instantiated and called as such:
//  * RandomizedSet* obj = new RandomizedSet();
//  * bool param_1 = obj->insert(val);
//  * bool param_2 = obj->remove(val);
//  * int param_3 = obj->getRandom();
//  */