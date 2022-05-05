# system-call

01: Create, execute and run a simple shell script that displays “Hello World” after execution.
A shell script is a file that comprises ASCII text. For creating a simple shell script, we will use a text editor. There are quite a number of text editors (like vi, gedit etc.), both command-line and GUI-based.
Step 1: $ gedit filename.sh
Step 2: Paste the following content in the file and save.
#!/bin/bash
# for making comment
echo “Hello World!”
Note:
#!/bin/bash is called shebang header. This is a special construct that indicates what program will be used to interpret the script.
Step 3: To make the script executable use the below command
$ chmod +x filename.sh
Step 4: To run the shell script
$ bash filename.sh
or,
$ ./filename.sh
02. Define & access the values of variables
Variables are defined as follows −
variable_name=variable_value
For example −
NAME="Zara Ali"
#!/bin/sh
#Accessing variable
NAME="Zara Ali"
echo $NAME
03. Take input from user at runtime
Basic User Input
#!usr/bin/env bash
read name
echo "Hello, $name"
Read Command Arguments
Read command provides a lot of arguments that can be passed to it so as to get the user input in a flexible way. Some of the few arguments are discussed here:
●	Prompt String (-p)
Example:
#!usr/bin/env bash
read -p "Enter your name : " name
echo "Hello, $name"
04. Conditional Statement in Shell Script
Conditional statement used to perform conditional tasks in the sequential flow of execution of statements. If statements usually allow us to make decisions in our Bash scripts. They help us to decide whether or not to run a piece of codes based upon the condition that we may set.
i)	If statement: The ‘if’ statement can be used to test single or multiple conditions. The ‘if’ statement is defined by the “if ... fi” blocks.
Syntax: if command
		then
		  statement
		fi
Example:
 
Note: use other comparison operators in bash shell:
●	-eq – Equal to
●	-ne – Not equal to
●	-lt – Less than
●	-le – Less than or equal to
●	-lt – Less than
●	-ge – Greater than or equal to

ii)	If-else statement: For situations where you have 2 possible outcomes: – whether this or that – the if-else statement comes in handy.
Syntax: if command
		then
		  statement 1
		else
		statement 2
		fi
Example:
 
05. Looping statement in shell script
Bash loops allow users to perform a series of tasks until a certain result is achieved. This comes in handy in performing repetitive tasks.
i)	While loop: This is one of the easiest loops to work with.
Syntax:
 
Example: lists all the numbers from 1 to 10
 
ii)	For Loop: Like the while loop, a “for loop” is used to execute code iteratively. I.e. repeat code execution as many times as possible defined by the user.
Syntax:
 
A better way to achieve this is to define a range using the double curly braces { } as shown instead of typing all the numbers.
 
06: Function in shell script
Function break down the overall functionality of a script into smaller, logical subsections, which can then be called upon to perform their individual tasks when needed.
●	Creating a function: Syntax
function_name () { 
   list of commands
}
Example:
#!/bin/sh
# Define your function here
Hello () {
  echo "Hello World"
}
# Invoke your function
Hello
●	Pass Parameters to a Function
#!/bin/sh

# Define your function here
Hello () {
   echo "Hello World $1 $2"
}

# Invoke your function
Hello Zara Ali
List of Programs:
1.	Write a shell program to perform all arithmetical operators.
2.	Write a script to take the input from the user at runtime.
3.	Write a shell program to check whether the given number is odd or even.
echo “Enter a number:” read n
if [ `expr $n % 2` = 0 ] then
echo “Even number”
else
echo “Odd number”
fi
Output:
Enter a number:
6
Even number
4.	Write a Shell program to check and display 10 leap years.
PROGRAM
for((i = 2000 ; i<= 2036 ; i++)) do
if [ `expr $i % 400` = 0 ] then
echo “$i is a leap year”
elif [ `expr $i % 4` = 0 -a `expr $i % 100` != 0 ] then
echo “$i is a leap year”
fi
done
OUTPUT
2000 is a leap year 2004 is a leap year 2008 is a leap year 2012 is a leap year 2016 is a leap year 2020 is a leap year 2024 is a leap year 2028 is a leap year 2032 is a leap year 2036 is a leap year
5.	Write a Shell program to check the given string is palindrome or not.
PROGRAM
echo “Enter the string:” read s
l=`expr length $s` c=1
p=””
while [ $c -le $l ] do
e=`expr substr $s $c 1` p=$e$p
c=`expr $c + 1`
done
if [ $p = $s ] then
echo “The given string $s is a palindrome”
else
echo “The given string $s is not a palindrome”
fi
OUTPUT 1
Enter the string:
madam
The given string madam is a palindrome
OUTPUT 2
Enter the string:
sir
The given string sir is not a palindrome
6.	Write a Shell program to find the roots of a quadratic equation.
PROGRAM
echo “Enter the value for a” read a
echo “Enter the value for b” read b
echo “Enter the value for c” read c
d=`expr $b \* $b – 4 \* $a \* $c`
x1=`echo “scale=3; (-$b + sqrt($d)) / (2 * $a)” | bc` x2=`echo “scale=3; (-$b – sqrt($d)) / (2 * $a)” | bc` echo “Root 1 : $x1”
echo “Root 2 : $x2”
OUTPUT
-bash-3.2$ sh quadratic.sh Enter the value for a
2
Enter the value for b 3
Enter the value for c 1
Root 1 : -.500
Root 2 : -1.000
7.	Write a Shell program to find the sum of square of individual digits of a number.
PROGRAM
echo “Enter a number:” read n
t=$n s=0
while [ $n -gt 0 ] do
r=`expr $n % 10` s=`expr $s + $r \* $r` n=`expr $n / 10`
done
echo “The sum of square of individual digits of $t is $s”
OUTPUT
Enter a number:
124
The sum of square of individual digits of 124 is 21
8.	Write a Shell program to generate Fibonacci series.
PROGRAM
echo “Enter the number of terms:” read n
echo “Fibonacci series is:” a=-1
b=1
c=0
for((i = 1 ; i <= n ; i++)) do
c=`expr $a + $b` echo $c
a=$b b=$c
done
OUTPUT
Enter the number of terms: 5
Fibonacci series is: 0 1 1 2 3
9.	Write a Shell program to find the factorial of given number using function.
PROGRAM
#!/bin/bash
# Recursive factorial function
factorial()
{
    product=$1     
    # Defining a function to calculate factorial using recursion
    if((product <= 2)); then
        echo $product
    else
        f=$((product -1))    
# Recursive call
f=$(factorial $f)
f=$((f*product))
echo $f
fi
}
# main program
echo "Enter the number:"   
read num
# defining a special case for 0! = 1
if((num == 0)); then   
echo 1
else
#calling the function
factorial $num
fi
OUTPUT
Enter the number
5
120
10.	Write a Shell program to find the largest among ‘n’ different numbers.
PROGRAM
echo “Enter the number of elements:” read n
l=0
for((i = 1 ; i <= n ; i++)) do
echo “Enter the number:” read no
if [ $no -gt $l ] then
l=$no
fi
done
echo “The largest numbers is : $l”
OUTPUT
Enter the number of elements: 5
Enter the number: 44
Enter the number: 55
Enter the number: 33
Enter the number: 22
Enter the number: 11
The largest numbers is: 55
11.	Write a ‘C\C++’ program to calculate sum of even and odd using fork () system call.
Program:
#include <iostream> 
#include <unistd.h> 
using namespace std; 
int main() 
{ 
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
    int sumOdd = 0, sumEven = 0, n, i; 
    n = fork(); 
    // Checking if n is not 0 
    if (n > 0) { 
        for (i = 0; i < 10; i++) { 
            if (a[i] % 2 == 0) 
                sumEven = sumEven + a[i]; 
        } 
        cout << "Parent process \n"; 
        cout << "Sum of even no. is " << sumEven << endl; 
    } 
  
    // If n is 0 i.e. we are in child process 
    else { 
        for (i = 0; i < 10; i++) { 
            if (a[i] % 2 != 0) 
                sumOdd = sumOdd + a[i]; 
        } 
        cout << "Child process \n"; 
        cout << "\nSum of odd no. is " << sumOdd << endl; 
    } 
    return 0; 
}

Output:
12. Write a C program to create four processes (1 parent & 3 children) where they terminate in a sequence as follows:
a)	Third child should be terminating first.
b)	Second child should be terminated after last and before first child
c)	Parent process should be terminating in last.
d)	First child should be terminated before parent & after second child.
Program:
/* Program to implement fork () system call*/
#include <stdio.h> 
int main() 
{ 
    int pid, pid1, pid2; 
     pid = fork(); 
    if (pid == 0) { 
           sleep(3); 
          printf("child[1] --> pid = %d and ppid = %d\n", 
               getpid(), getppid()); 
    } 
      else { 
        pid1 = fork(); 
        if (pid1 == 0) { 
            sleep(2); 
            printf("child[2] --> pid = %d and ppid = %d\n", 
                   getpid(), getppid()); 
        } 
        else { 
            pid2 = fork(); 
            if (pid2 == 0) { 
                // This is third child which is 
                // needed to be printed first. 
                printf("child[3] --> pid = %d and ppid = %d\n", 
                       getpid(), getppid()); 
            } 
              // If value returned from fork() 
            // in not zero and >0 that means 
            // this is parent process. 
            else { 
                sleep(3); 
                printf("parent --> pid = %d\n", getpid()); 
            } 
        } 
    } 
    return 0; 
}
13. Aim: replacing a process image
Description: The exec family of functions replaces the current running process image (entire code) with a new process. It can be used to run a C program by using another C program. It comes under the header file unistd.h. There are many members in the exec family such as execlp, execvp, execv.
Source code:
#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Before execl\n");
    execl("/bin/ps","ps","-a",NULL);//
    printf("After execlp\n");
}
Output:
$gcc -o exec execl.c
$./exec
 
Replace ps with ls
ls- display long list of current working directory
Program:
#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Before execl\n");
    execl("/bin/ls","ls","-1",NULL);//
    printf("After execlp\n");
}
14. Aim: Waiting for a process
Description: When a process creates a child process, sometimes it becomes necessary that the parent process should execute only after the child has finished. wait() system call does exactly this. It makes the parent process wait for child process to finish and then the parent continues its working from the statement after the wait().
wait() system call takes only one parameter which stores the status information of the process. Pass NULL as the value if you do not want to know the exit status of the child process and are simply concerned with making the parent wait for the child. On success, wait returns the PID of the terminated child process while on failure it returns -1.
Program for wait() system call which makes the parent process wait for the child to finish.
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
pid_t p;
printf("before fork\n");
p=fork();
if(p==0)//child
{
printf("I am child having id %d\n",getpid());
printf("My parent's id is %d\n",getppid());
}
else//parent
{
wait(NULL);
printf("My child's id is %d\n",p);
printf("I am parent having id %d\n",getpid());
}
printf("Common\n");
}
Output:
 
15. Aim: Creating a Zombie Process
Description: A zombie is a process which has terminated but its entry still exists in the process table until the parent terminates normally or calls wait(). Suppose you create a child process and the child finishes before the parent process does. If you run the ps command before the parent gets terminated the output of ps will show the entry of a zombie process(denoted by defunct ). This happens because the child is no longer active but its exit code needs to be stored in case the parent subsequently calls wait.
Source Code:
#include<stdio.h>
#include<unistd.h>
int main()
{
   pid_t t;
   t=fork();
   if(t==0)
   {
       printf("Child having id %d\n",getpid());
    }
    else
    {
        printf("Parent having id %d\n",getpid());
        sleep(15); // Parent sleeps. Run the ps command during this time
    }
}
Output:

