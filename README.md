# Number Guessing Game in C++

This is a simple console-based Number Guessing Game written in C++. The program generates a random number between 1 and 100, and the user tries to guess it. After each guess, the program provides feedback on whether the guess is too low or too high. The game continues until the user guesses the correct number.

## Features

- Random number generation between 1 and 100
- User input and feedback
- Tracks the number of attempts

## How to Run

1. **Clone or download this repository.**
2. **Compile the code using a C++ compiler:**

   ```
   g++ -o guessing_game guessing_game.cpp
   ```

3. **Run the executable:**

   ```
   ./guessing_game
   ```

## Example Output

```
Guess a number between 1 and 100: 50
Your guess is too low.
Guess a number between 1 and 100: 75
Your guess is higher
Guess a number between 1 and 100: 63
Congratulations! You guessed the number 63 correctly!
It took you 2 attempts.
```

## License

This project is open source
