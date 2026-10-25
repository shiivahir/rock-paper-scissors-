# Rock Paper Scissors Game (C++)

## 📌 About the Project
A simple, console-based **Rock Paper Scissors game** developed using C++. The game allows two players to compete over multiple rounds, tracks their scores, and declares the overall winner.

## ✨ Features
- **Two-Player Mode:** Two players take turns entering their choices.
- **Multiple Rounds:** Players can choose the number of rounds before starting.
- **Input Validation:** Rejects choices outside the range of 1–3.
- **Score Tracking:** Maintains individual scores throughout the game.
- **Round Results:** Displays both players' choices and the winner of each round.
- **Final Result:** Announces the overall winner or a draw.
- **Object-Oriented Programming:** Uses a class, private data members, a constructor, and public member functions.

## 🎮 Game Rules

| Choice | Beats |
|---|---|
| Rock | Scissors |
| Paper | Rock |
| Scissors | Paper |

- If both players select the same option, the round is a draw.
- The winner of each round earns one point.
- The player with the highest score at the end wins the game.

## 🛠️ Technologies Used
- **Language:** C++
- **Header Files:** `iostream`, `string`
- **Concepts:** Classes and Objects, Encapsulation, Constructors, Functions, Conditional Statements, Loops, and Input/Output Operations.

## 🚀 How to Run

### 1. Compile the program
Save the code as `main.cpp` and compile it using a C++ compiler:

```bash
g++ -std=c++17 main.cpp -o rps
```

### 2. Run the game

**macOS / Linux**
```bash
./rps
```

**Windows**
```bash
rps.exe
```

## 🕹️ How to Play
1. Enter the number of rounds.
2. Player 1 selects Rock, Paper, or Scissors using `1`, `2`, or `3`.
3. Player 2 enters their choice after Player 1.
4. The program displays both choices and the round result.
5. After all rounds, the final scores and overall winner are displayed.


## 🎯 Learning Objectives
This project demonstrates basic C++ programming, object-oriented design, decision-making, loops, functions, and score management in a simple interactive game.

## 📜 License
This project is available for educational and learning purposes.
