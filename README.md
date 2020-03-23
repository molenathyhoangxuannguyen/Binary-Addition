# [L07: Binary Addition](https://docs.google.com/document/d/1rOxBrFifkuemZBPvCbzykaGYSfOBPXEOsOnQdRglk_g/edit?usp=sharing)

## This lab is designed to give you familiarity with an important aspect 
## of binary arithmetic, namely adding 1 or incrementing which sometimes 
## results in the propagation of a carry through the bits. 

### Starter files have been provided for you in C++

### Thy H. Nguyen
### Authors of lab and stubs: Mario Nakazawa and Jan Pearce, Berea College

1. **WHITEBOARD DESIGN**
*Write a high level design plan for your program.
You can use screenshots of your work on an actual white board 
or you can use pseudocode.*

Set the starting remaining 1. Get the last digit of the binary (the first node of first node).

Then, apply 0 + 0 = 0 (carry 0)

1+ 0 = 1 (carry 0)

0+1=1 (carry 0)

1+1=0 (carry 1)

The carry is saved as the remaining for the next digit.
The starting remaining is 1 (since we want to add 1 to the binary).

Check the last digit. If the result is 0, stick 1 to it.
The reason is that only 10 has the final digit 0. (0+0=0 cannot be the case since all binary here does not start with 0.)

As the digits are written backwards, this is the efficient way to do so.

CRC CARD
*List all of the new functions created in the program*

| **Function gets editted**      | What does it use for?
| :----------------------------- | :-------------------------- 
| void increment()               |  this method will increment the binary number stored in a linked list by one, making sure to propogate any carries that are generated.


2. **ASSIGNED TASKS**
*List who will implement each of new components of the main 
and each class method. Be careful to keep this equitable. 
It is NOT okay to have one person do the majority of the work.*


| **Team member**                | **Task**  
| :----------------------------- | :-------------------------- 
| Thy Nguyen                     |  A team has only 1 member: Thy Nguyen

3. **ARROW NOTATION**
*Explain the significance of the arrow (->) notation 
for the nodes of the C++ linked list.*

The -> notation is used when we create the address. This help assigns the address to the object (reference).
 
4. **LINKED LIST ORDER**
*The binary representation has the head of the linked list 
as the least significant bit (i.e. the number 13 in base 10 
is represented as 1->0->1->1-None.) 
Identify one significant advantage this representation has with regards 
to how this number can be incremented.*

The advantage of written backwards is to make coder easier to code addition for binary. 
Because we have to do addition from left to write, written backwards helps addition easier.

5. **OTHER REPRESENTATIONS**
*There are typically many design choices that could be made in 
terms of data structures that can be used for a given task. 
Identify two other possible data structures you that one might alternatively 
use to represent a binary number. For each, determine whether 
you think that adding would be easier and why.*

Two possible to do this, is to put the number into arrays.

Assign the arrays with the length of the bigger number. Then stick 0 to all of the places where there are no binary.

Another way to do this is just to put numbers into string. As we can concatenate the strings, we can do the binary addition.

Another way to do this is to add numbers in base10 (regular base10 of addition as students are taught in grade 1.) Then, convert
the new number to binary.

6. **LEAST SIGNIFICANT BIT**
*Notice the convert_decimal_to_binary() method refers to the 
leastSignificantBit instance variable only in the first half 
of the method, and the rest referred to  bitRef. 
Explain why the method still works even though it does not 
refer to leastSignificantBit all the time.*

The method still works even though it does not refer to leastSignificantBit all the time. The reason is that leastSignificantBit
instance variable is already assigned to the reference (address) of bitRef.

7. **PROCESS SUMMARY**
*Briefly summarize your design and implementation process, 
including how much your initial design plan evolved, 
the final results you achieved, and the amount of time you spent 
as a programmer or programmers in accomplishing these results. 
This should be one or at most two paragraphs.*

The design and implementation is smoothly. The reason is that I find it easy to add binary numbers. It is exactly 
like adding numbers in base 10, however, we are using base 2.

8. **DESIGN CHALLENGES**
*Describe the primary conceptual challenges that you encountered 
in trying to complete this lab and what might have made the 
lab easier for you.*

I did not get any primary conceptual challenges that I encountered.

9. **INNOVATIONS**
*Please briefly describe any innovations that were not 
specifically required by the assignment.*

I think that the computer epsilon did not get introduced. The computer epsilon is important 
to consider whether the computer has any error of arithmetic (rounding or chopping, loss of significance, 
overloading or underloading.)

10. **BIG O ANALYSIS**
*Complete a Big-O analysis for the increment() method as you 
implemented it, explaining the computation.*

The bigO is O(n) as the computer adds up number to number, from the right to the left, and goes through 
digits to digits. As there are n digits, the computer will do it n times. The number of time doing the addition
depend on the number of digits of the largest number.

11. **TESTING**
*Please briefly describe your testing process. 
Here you should be careful to select representative input cases, 
including both representative typical cases as well as extreme cases.*

I tested all extreme cases, for example, 99999, 1, 7, 15.

12. **ERRORS**
*List in bulleted form of all known errors 
and deficiencies with a very brief explanation.*

- I did not get any errors.

10. **LEARNING AND REACTION**
*A paragraph or so of your own comments 
on what you learned and your reactions to this lab.*

I already know how to add numbers in base 10. However, this is the first time
I have known how the computers actually adding the numbers. However, the computers
also store the numbers in base16 (hexadecimal), which leads to the errors of arithmetic
in computers.

11. **INTEGRITY STATEMENT**
*Please briefly describe ALL help you received and 
all help you gave to others in completing this lab.
Also list all other references below.*

I received no help from anyone in completing this lab.

## References:
- This repo contains a stubs by Mario Nakazawa and Jan Pearce
- To be continued