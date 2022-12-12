/*
Problem: You have to make a change of an amount using the smallest 
possible number of coins.

Amount: $18

Available coins are
  $5 coin
  $2 coin
  $1 coin
There is no limit to the number of each coin you can use.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int amount = 18;
  int coins[] = {5, 2, 1}; // available coins in descending order
  int minCoins = 0; // minimum number of coins needed to make change

  // iterate over the coins
  for (int i = 0; i < 3; i++) {
    // keep adding the largest possible number of coins of this denomination until the remaining amount is less than the denomination
    while (amount >= coins[i]) {
      amount -= coins[i]; // subtract the value of the coin from the remaining amount
      minCoins++; // increment the minimum number of coins needed
    }
  }

  // print the minimum number of coins needed
  cout << "Minimum number of coins needed: " << minCoins << endl;

  return 0;
}
