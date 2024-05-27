### Towers of Hanoi Stack Implementation

This repository features a C implementation of the classic Towers of Hanoi puzzle, utilizing stack data structures. Developed for a Data Structures and Algorithms (DSA) lab assignment, this project demonstrates the application of linked list-based stacks to solve this renowned recursive problem.

#### Features
- **C Language Implementation**: Written entirely in C for efficient performance and clear demonstration of data structures.
- **Linked List-Based Stacks**: Implements stack operations using linked lists to manage the dynamic set of disks.
- **Interactive Interface**: Allows users to specify the number of disks and provides step-by-step visual feedback.
- **State Tracking**: Displays the state of each rod after every move, enhancing understanding of the algorithm.

#### Repository Contents
- **main.c**: Contains the main function and the core logic for solving the Towers of Hanoi puzzle.
- **node.h**: Defines the data structures for stack nodes and elements.
- **stack_functions.h**: Declares stack operations, including push, pop, and peek functions.
- **stack_functions.c**: Implements the stack operations using linked lists.

#### Setup and Usage
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/TowersOfHanoiStackImplementation.git
   ```
2. **Navigate to the Project Directory**:
   ```bash
   cd TowersOfHanoiStackImplementation
   ```
3. **Compile the Project**:
   ```bash
   gcc -o hanoi main.c stack_functions.c
   ```
4. **Execute the Program**:
   ```bash
   ./hanoi
   ```

#### Usage Instructions
1. Upon execution, the program prompts the user to enter the number of disks.
2. The initial state of the rods (source, auxiliary, destination) is displayed.
3. Each move is detailed, indicating which disk is moved from which rod to which rod.
4. The state of the rods is updated and displayed after each move.
5. The program pauses for user input between moves, allowing step-by-step tracking.

#### Example Output
```
Enter the number of disks: 3
Initial state:
Source rod: 3 2 1
Auxiliary rod: Empty
Destination rod: Empty

Move disk 1 from S to D
Source rod: 3 2
Auxiliary rod: Empty
Destination rod: 1

Move disk 2 from S to A
Source rod: 3
Auxiliary rod: 2
Destination rod: 1

Move disk 1 from D to A
Source rod: 3
Auxiliary rod: 2 1
Destination rod: Empty

...

Final state:
Source rod: Empty
Auxiliary rod: Empty
Destination rod: 3 2 1

Congratulations! All disks have been moved to the destination rod.
```

#### Contributions
Contributions are welcome! Please fork this repository and submit a pull request for any improvements or bug fixes.

#### License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
