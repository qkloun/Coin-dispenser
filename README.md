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

- **Input validation:** Ensures the amount is non-negative and does not exceed $100
- **Greedy algorithm:** Calculates the minimum number of coins needed
- **Clear output:** Displays the breakdown of each coin type
- **Error handling:** Provides informative messages for invalid inputs
- **Command-line interface:**  Easy to use from the terminal

## Installation
...
