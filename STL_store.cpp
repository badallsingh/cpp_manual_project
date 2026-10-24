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
#include <deque>

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

  list<order> orders;
  orders.push_back({1, 1, 2, 1, "2020-01-01"});
  orders.push_back({2, 1, 2, 1, "2020-01-02"});

  set<string> categories;

  for (const auto &product : products)
  {
    categories.insert(product.product_category);
  };

  map<int, int> product_stock =
      {
          {1, 10},
          {2, 20},
          {3, 30},
          {4, 40},
          {5, 50},
          {6, 60},
          {7, 70},
          {8, 80},
  };

  multimap<int, order> product_stock_multimap;
  for (const auto &order : orders)
  {
    product_stock_multimap.insert(make_pair(order.customer_id, order));
  }

  unordered_map<string, int> customer_stock = {
      {"c001", 10},
      {"c002", 20},
      {"c003", 30},
  };
  unordered_set<int> unique_customers;

  for (const auto &order : orders)
  {
    unique_customers.insert(order.customer_id);
  }
  return 0;
}