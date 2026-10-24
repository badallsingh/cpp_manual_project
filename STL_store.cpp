#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <ctime>

using namespace std;

struct product
{
  int product_id;
  string product_name;
  string product_category;
};

struct order
{
  int order_id;
  int product_id;
  int quantity;
  int customer_id;
  string order_date;
};

int main()
{
  vector<product> products = {
      {1, "apple", "fruit"},
      {2, "iphone", "electronics"},
      {3, "orange", "fruit"},
      {4, "milk", "dairy"},
      {5, "bread", "food"},
      {6, "water", "drink"},
  };
  deque<string> customers = {"c001", "c002", "c003", "c004", "c005", "c006", "c007", "c008", "c009", "c010", "c011", "c012", "c013", "c014", "c015", "c016", "c017", "c018", "c019"};
  customers.push_back("c020");
  customers.push_front("c021");
}