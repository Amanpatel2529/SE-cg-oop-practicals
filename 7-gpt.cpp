#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
struct Item {
  int code;
  std::string name;
  int cost;
  int quantity;
};

// Comparison function to sort items by code
bool itemCodeComparison(const Item& a, const Item& b) {
  return a.code < b.code;
}

int main() {
  //by Aman Jakir Patel
  // Create a vector of items
  std::vector<Item> items = {
      {123, "Apple", 50, 2}, {456, "Banana", 20, 5}, {789, "Orange", 30, 3}};

  // Sort the items by code
  std::sort(items.begin(), items.end(), itemCodeComparison);

  // Print the sorted items
  std::cout << "Sorted items by code:" << std::endl;
  for (const auto& item : items) {
    std::cout << item.code << ": " << item.name << std::endl;
  }

  // Search for an item by name using the STL binary_search algorithm
  std::string nameToSearch = "Banana";
  auto it = std::lower_bound(items.begin(), items.end(), nameToSearch,
 [](const Item& a, const std::string& b) { return a.name < b; });
  if (it != items.end() && it->name == nameToSearch) {
    std::cout << "Item found: " << it->code << ": " << it->name << std::endl;
  } else {
    std::cout << "Item not found" << std::endl;
  }

  return 0;
}
