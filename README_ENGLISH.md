
# 🏰 Dungeons of Doom

## 🎮 Game Story

In *Dungeons of Doom*, you are a brave adventurer who must face dangers and solve puzzles in an ancient dungeon. Your journey begins in a peaceful village where the locals warn you about the hidden dangers underground. To escape and reach freedom, the player must find keys, avoid monsters, solve puzzles, and complete three challenging levels.

## 📜 Game Rules

- The player must find a key (`@`) and use it to open the exit door (`D → =`) on each level.
- Each level has obstacles such as walls (`*`), spikes (`#`), and monsters (`X` and `V`).
- There are interactions with NPCs (`P`), buttons (`O`), and teleporters (`>`).
- Touching spikes or being hit by monsters restarts the level. After three failures, the game returns to the main menu.

### 🧍‍♂️ Characters and Elements

| Symbol | Meaning                              |
|--------|--------------------------------------|
| `&`    | Player                               |
| `P`    | NPC                                  |
| `*`    | Wall (blocks movement)               |
| `@`    | Key to open the door                 |
| `D`    | Closed door                          |
| `=`    | Open door                            |
| `O`    | Interactive button (custom behavior) |
| `#`    | Spike (restarts level)               |
| `>`    | Teleport (always comes in pairs)     |
| `X`    | Monster Level 1 (random movement)    |
| `V`    | Monster Level 2 (chases the player)  |

### 🕹️ Controls

- `W` – move up  
- `A` – move left  
- `S` – move down  
- `D` – move right  
- `i` – interact with objects

## 🗺️ Game Structure

- **Main Menu:** Options to Play, Credits, and Exit  
- **Village:** Interactive tutorial with NPCs  
- **Levels 1, 2, and 3:** Increasing challenges with puzzles and enemies  
- **Victory Screen:** Shown after finishing all levels  
- **Defeat Screen:** Shown after three failures in a level

## 🛠️ Compilation and Execution Instructions

### 🔧 Requirements

- Windows OS (uses `<conio.h>` library)  
- C-compatible compiler (e.g., GCC, Visual Studio Code etc...)

### ▶️ Compilation

```bash
gcc DungeonsOfDoom.c -o DungeonsOfDoom
```

### 🚀 Execution

```bash
./DungeonsOfDoom
```

> **Note:** The game uses `system("cls")` to clear the screen, so use the terminal’s `cls` command when needed.

## 🗃️ Code Organization

Currently, the game is implemented in a single file:

```
📁 DungeonsOfDoom/
└── DungeonsOfDoom.c
```

## 👨‍💻 Credits

Developed by:

- Daneil Barros
- Cauê Milhomem  
- Wisley Gabriel
