# Coin Dispenser
A simple command-line tool that converts a dollar amount into the minimum number of U.S. coins (quarters, dimes, nickels, pennies). It reads a value from standard input, validates it (≤ 100 and non-negative), then prints how many of each coin you need. 

## Description
This coin dispenser program takes a monetary amount as input and breaks it down into the fewest possible coins using the standard US coin denominations:

- Quarters (25¢)
-  Dimes (10¢)
- Nickels (5¢)
- Pennies (1¢)

The program uses a greedy algorithm approach, starting with the largest denomination and working down to ensure the minimum number of coins is used.

## Features

- **✅Input validation:** Ensures the amount is non-negative and does not exceed $100
- **⚡Greedy algorithm:** Calculates the minimum number of coins needed
- **📊Clear output:** Displays the breakdown of each coin type
- **🛡️Error handling:** Provides informative messages for invalid inputs
- **🖥️Command-line interface:**  Easy to use from the terminal

## Installation
...

## How it works
The program uses a greedy algorithm to solve the coin change problem:

1. Reads and validates the input amount
2. Converts dollars to cents to avoid floating-point errors
3. Iterates through coin denominations from largest to smallest
4. For each denomination, calculates how many coins fit into the remaining amount
5. Subtracts the value of those coins and continues to the next denomination

This approach works optimally for U.S. currency because the denominations have a special property where the greedy choice always leads to the minimum number of coins.


## Contributing
Contributions are welcome! Feel free to:

- Report bugs
- Suggest new features
- Submit pull requests

Please open an issue first to discuss any major changes.
