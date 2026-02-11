# Project 1: C Programming Fundamentals

## About this Project
This is my first big project for the C programming module. I’ve put together a few different programs to show what I have learned about how C works, using loops to make menus, and working with functions.

## What’s in here?
- **question_1.c**: A simple area calculator that shows how basic C programs are structured.
- **question_2.c**: A bank menu program. This one was tricky to get the while loop to stay open until I hit exit.
- **question_3.c**: A math program using recursion to find factorials.
- **embedded_design.txt**: My notes on a smart light system.

## Question 1: How C Programs Work

### Real-world Application
I found out that C is used for things like the Linux kernel. It’s perfect for that because it talks directly to the hardware and doesn't waste memory.

### Syntax vs. Semantic Errors
- **Syntax Errors**: This is when I forget a semicolon ; or misspell a keyword like pintf instead of printf. The compiler won't even start because the "grammar" is wrong.
- **Semantic Errors**: These are harder to find. The code runs fine, but it gives the wrong answer. Like if I try to calculate area by adding length and width instead of multiplying them.

### The Compilation Process
- **Preprocessing**: The computer looks for lines starting with # and brings in the header files.
- **Compilation**: It turns my C code into assembly code.
- **Assembly**: It takes that assembly code and makes "object code" (machine language).
- **Linking**: This is the final step where it links my code with other libraries to make the final file I can run.

## Question 2: Control Flow logic
I built a menu that uses a switch statement inside a while(1) loop. I used break to let the user exit. If they type a wrong number, the default case tells them and continue starts the loop over again.

## Question 3: Recursion
For the factorial program, I used a recursive function.

### The Good
It makes the code much shorter and easier to read for math problems.

### The Bad
It’s risky because if I forget the "base case" (like if n <= 1), the program will keep calling itself until the computer runs out of memory and crashes.

## Question 4: My Embedded System Idea
I designed a simple Automatic Night Light.

- **Sensor**: A Photoresistor (it checks how much light is in the room).
- **Controller**: An Arduino board that reads the sensor data.
- **Actuator**: An LED bulb.
- **Data Flow**: The sensor sends a voltage signal to the controller. The controller checks: "Is it dark?" If the answer is yes, it sends power to the LED to turn it on.

## Question 5: Putting it all together
Building a real system needs all these parts. You need Control Flow to make decisions, Functions to keep the code organized so you don't get confused, and Embedded hardware to actually interact with the physical world.

## How to run my code
To test my programs, I used this command in my terminal:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [filename].c -o output


Then I ran it with:
./output