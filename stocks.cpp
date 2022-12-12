/* implementation of the greedy algorithm in C++ to find the best day 
to buy and sell stocks, where the selling day must be after the buying 
day and the stock is sold when the profit is maximum:
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Array of stock prices on different days
  int prices[5];

  cout << "Enter the prices of the stock on different days: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Day " << i+1 << ": ";
    cin >> prices[i];
  }

  // Set the initial values of min_price, max_profit, and buy_day
  int min_price = prices[0];
  int max_profit = 0;
  int buy_day = 0;
  int sell_day = 0;

  // Loop through the array of stock prices and update the
  // min_price, max_profit, buy_day, and sell_day accordingly
  for (int i = 0; i < 5; i++) {
    if (prices[i] < min_price) {
      min_price = prices[i];
      buy_day = i;
    }
    if (prices[i] - min_price > max_profit) {
      max_profit = prices[i] - min_price;
      sell_day = i;
    }
  }

  // Print the results
  cout << "The best day to buy the stock is on day " << buy_day+1 << " with a price of " << min_price << endl;
  cout << "The best day to sell the stock is on day " << sell_day+1 << " with a profit of " << max_profit << endl;

  return 0;
}
