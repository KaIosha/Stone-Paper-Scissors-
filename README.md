# **Stone, Paper, Scissors Game** 🎮

A simple **Stone, Paper, Scissors** game implemented in **C++**. Play against the computer, track your wins, and enjoy a fun, interactive experience!

---

## **Why This Project?** 🤔

This project is a great way to practice:
- **Basic C++ programming** (functions, loops, conditionals).
- **Random number generation**.
- **User input validation**.
- **Console manipulation** (colors and screen reset).
- **Game logic implementation**.

---

## **Features** ✨
- **Player vs. Computer**: Compete against the computer in a classic Stone, Paper, Scissors game.
- **Multiple Rounds**: Choose to play between **1 to 10 rounds**.
- **Dynamic Results**: Track wins, losses, and draws.
- **Color-Coded Feedback**: Console changes colors based on the outcome of each round.
- **Play Again Option**: Play multiple sessions without restarting the program.
- **Randomized Computer Choice**: The computer's choice is randomized for fairness.

---

## **How It Works** 🛠️
1. The player is prompted to enter the number of rounds (1 to 10).
2. For each round:
   - The player selects **Stone (1)**, **Paper (2)**, or **Scissors (3)**.
   - The computer randomly selects its choice.
   - The winner of the round is determined based on the rules of Stone, Paper, Scissors.
3. At the end of the game, the results are displayed, and the player can choose to play again or exit.

---

## **Code Structure** 🧩
- **`Rules()`**: Determines the winner of each round.
- **`number_of_rounds()`**: Prompts the player to enter the number of rounds.
- **`User_choice()`**: Prompts the player to select Stone, Paper, or Scissors.
- **`Random_choice()`**: Generates a random choice for the computer.
- **`take_the_user_choice()`**: Displays the player's choice.
- **`pc_choice()`**: Displays the computer's choice.
- **`show__the_result()`**: Displays the final results of the game session.
- **`show_the_head_of_the_game()`**: Manages the flow of each round.
- **`Do_you_want_again()`**: Asks the player if they want to play again.
- **`ResetScreen()`**: Resets the console screen and color for a new game session.
- **`theGame()`**: Main function that runs the game loop.

---

 
 
