C

Data structure

device driver

linux internal

embedded linux

embedded driver

beagle bone data sheet

diffrent kind of memory device 

project overview
----------------------------------------
++++
C
+++++++++++++++++++++++++++++++++++++ C Doc +++++++++++++++++++++++++++++++++++++++++++++++++

//Question--***********************************************************************************************************************

//Q..What is C language?
	The C programming language is a standardized programming language developed in the early 1970s by Ken Thompson and Dennis 
	Ritchie for use on the UNIX operating system. It has since spread to many other operating systems, and is one of the most 
	widely used programming languages. C is prized for its efficiency, and is the most popular programming language for
	writing system software, though it is also used for writing applications. ... 

//Q..Compilation..How to reduce a final size of executable? 
     Size of the final executable can be reduced using dynamic linking for libraries. 
//*********************************************************************************************************************************

//Notes----------------------------------------------------------------------------------------------------------------------
C is block structure language..
	->Each statement should be part of function Block.
		ex-
			{
				int a;
				printf("Hi...sonu singh\n");
			}
	Note:-If statement is out side of block then it won't execute during the execution.That is only for compiler consideration
		ex-
			int a;
			main()
				{}
	->Advantage of block structure language.
		1>simplicity:-   It will look very simple..and easy to understand the execution flow.
		2>reusebility:-  If we are using same piece of code in other place of program then better reuse that block using
		funtion call.
				ex-
					void main()
					{
						printf("1----%d\n",sum(23,24));
						printf("2----%d\n",sum(34,56));
						
					}
					int sum(int a,int b)
					{
						return(a+b);
					}
		3>Easy to debug:-We can find error very easilly,because it will redirect to function block.
2>Variable:- It is an identifier used for holding the data.
	
	syntex:-data_type var_name;
	ex:	int roll;
	note:-Size and range of variable depend on data type.
	     -Scope, life and memory section depend on storage class.
3>constant:- it is fixed value for compiler depending on data type memory will allocate and it will allocate in code section.
	
		ex-string-"hello";
		   char 'A';
		 
4>Data type--------Size of data type is processor dependent
	-integer------int-----4byte------%d
	-	     sort int---2byte----%hd
	             unsigned int--4byte---%u
	-character char---1byte---%c
	-Real------float--4byte---%f
		   double-8byte---%lf
		   long double-10/12byte...%llf
5>User define data type:
	-Array:-It is UDT..which is collection of same type of data. 
	-struct:-It is UDT..which is capable to store related field of same or diffrent data type.
	-union:-same as structure but diffrent is, it will hold only one data at same time. 
	-enum:-enumerated data type.
6> Floating repersentation:-floating point co-processor (IEEE754)
	float---sign(1) + exp(8 bit)  + significant(23 bit)
	double--  1     +    11       +     52
	1.*e+-y
        for more detail---->vector notes
//Notes--------------------------------------------------input/output-------------------------------------------------------
1>  getchar()--------------putchar()-------------------\n will not flash it will still available in to input buffer register.
2>  gets()-----------------puts()----------------------Convert '\n' to '\0' 
3>  scanf()----------------printf()---------------------same as getchar and putchar.
note:-getchar and scanf both have same type of data entry process.
Note:-printf will return number of character(Bytes) written on output console..ret=printf("%d",123);....ret=3.
Note:-scanf will return number of 
//Question-*************************************************************************************************************

//Q>What is the output of printf("%d")? 
	1. When we write printf("%d",x); this means compiler will print the value of x. But as here, there is nothing after %d
	so compiler will show in output window garbage value. 

	2. When we use %d the compiler internally uses it to access the argument in the stack (argument stack).
	Ideally compiler determines the offset of the data variable depending on the format specification string.
	Now when we write printf("%d",a) then compiler first accesses the top most element in the argument stack of the printf
	which is %d and depending on the format string it calculated to offset to the actual data variable in the memory which 
	is to be printed.
	Now when only %d will be present in the printf then compiler will calculate the correct offset(which will be the offset
	to access the integer variable)
	but as the actual data object is to be printed is not present at that memory location
	so it will print what ever will be the contents of that memory location. 

	3. Some compilers check the format string and will generate an error without the proper number and type of arguments for
	things like 		printf(...) and scanf(...). 

//Q>printf() Function- What is the difference between "printf(...)" and "sprintf(...)"? 
Ans:-sprintf(...) writes data to the character array whereas printf(...) writes data to the standard output device. 
   
   #include<math.h>
   int main()
   {
       char str[80];

       sprintf(str, "Value of Pi = %f", M_PI);
       puts(str);
   
       return(0);
}

//************************************************************************************************************************
//Notes----------------------------operator-----------------------------------------
->>>Operator:-operator are symbol which is meaningfull to compiler and it's operate on operant to give usefull result.
Base on no of operand
	1>unary (&,*,++, --)
	2>Binary (=,+,-)
	3>ternory (? :)
//Notes------------------------------------------------------------------------------------------------------------------
Relational--  <, >, <=, >=, ==, !=   -----Single condition check---return type True/False..
Logical----&&->AND6, ||->OR, !->NOT  -----for multiple condition---Return type True/Flase.
Bitwise----&, |, ^, <<, >>, ~  -----------Return Type is value but data is not modify.
Note:---Bitwise operator can't use with real data type.
//Question...******************************************************************************************************************
//Q> Which bit wise operator is suitable for turning off a particular bit in a number? 
	The bitwise AND operator,
	ex:-(data &=~(1<<bit))
//Q> Which bit wise operator is suitable for putting on a particular bit in a number? 
	The bitwise OR operator. 
	ex:-data|=(1<<bit)
//******************************************************************************************************************************
//Notes---------------------------------
>>2's(x)=-(x)
>>1's(x)=2's(x)-1

>>if number is -ve--- -3<<4=-3*2^4
>>-120>>3=-15
>>-5>>5=-1
//----------------------------------
Compound Assigment
a+=b;
Increment/decrement;
a= ++a + ++a + ++a---undefine because value will vary with compiler.

//Notes--------------------------------------------------------------------------------------------------------------------------
Control statement:
--------un conditional
return
break
continue
goto

Note:- you can use break only inside loop and switch case....it will send control to out of loop..  
Note:- you can use continue only inside loop...it will bypass the other statment which is written after the continue...and 
execute the loop
 
--------control statement
if
if---else
switch----case
Notes:-
//--------Iterative/loop
while
for
do----while
//Bit Operation-------------
//--------------------------
Test Bit-- 	(data>>bit)&1
Set Bit--- 	data|=(1<<bit)
Clear Bit- 	(data &=~(1<<bit))
compliment bit--data^=(1<<bit)
//----------------------------------------------------
tpye conversion----->char->int->(sign->unsign)->float->double


//Notes-----------------------------------------------------------------------------------------------------------------------
--------------
//-------------------------------------------Storage Class:--------------------------------------------------------------------
-------------
>>it is keyword which tells compiler about variable.like memory, life and scope
1>auto:-
	Life:- come to life when function call
	memory:- stack
	Scope:- Within the function,where it is define.
	initial value:-garbage
2>register:-
	Life:- come to life when function call
	memory:- register(it is compiler choise.either it will go to stack or register)
	Scope:- Within the function,where it is define.
	initial value:-garbage
3>extern:-
	Life:- start with process and end with process
	memory:- data section 
	Scope:- within the program and out side the program(module) 
	initial value:-zero
4>static:-
	Life:- start with process and end with process
	memory:- data section 
	Scope:- within the program if it is declared as global and out side the program(module) 
	initial value:-zero
Note:-we can use static and extern for function also...
	if you want to  protect your function form outside module or program then use static keyword....
	or else you want to share function to outside then use extern..
Note:-All global declaration are external declaration.

Note:- Uninitialized data will go in to BSS
---------------------------------
Some example
------------
1> static int v=34;
main()
{
	auto int v=10;//no error
}
2> extern int v;//it will search deffination out side of code.//other source code or else out side of any function
main()
{
	auto int v=10;//no error
}
3> extern int v;
main()
{
	static int v=30;//no error
}
4> extern int v;//error 
static int v;
main()
{}
note:-in same scope we can't use more than one storage class
Some Points
-----------
1> Best use of static variable
    return static array from function means ..if u want to return multiple value from function.
2> int * ptr-------------------------------------   1      1 modification are allowed in both  
3> const int *ptr--------------------------------   0      1
4> int * const ptr--------------------------------  1      0
5> const int *const ptr-(const char *ptr is same as char const *ptr;)---   0      0
//Question--********************************************************************************************************************
//Q--What does static variable mean? 
	there are 3 main uses for the static.
	1. If you declare within a function:
	It retains the value between function calls
	2.If it is declared for a function name:
	By default function is extern..so it will be visible from other files if the function declaration is as static..it is
	invisible for the 	outer files 
	3. Static for global variables:
	By default we can use the global variables from outside files If it is static global..that variable is limited to 
	with in the file 
//Q--What are the different storage classes in C?
Ans..C has three types of storage: automatic, static and allocated. 
	Variable having block scope and without static specifier have automatic storage duration. 
	Variables with block scope, and with static specifier have static scope. Global variables (i.e, file scope) with or
	without the the 
	static specifier also have static scope. 
	Memory obtained from calls to malloc(), alloc() or realloc() belongs to allocated storage class.
//Q..When should the register modifier be used? Does it really help? 
Ans..The register modifier hints to the compiler that the variable will be heavily used and should be kept in the CPU’s registers,
if possible, 
	so that it can be accessed faster. 
	There are several restrictions on the use of the register modifier. 
	First, the variable must be of a type that can be held in the CPU’s register. This usually means a single value of a size less than or 	
	equal to the size of an integer. Some machines have registers that can hold floating-point numbers as well. 
	Second, because the variable might not be stored in memory, its address cannot be taken with the unary & operator. 
	An attempt to do so 	
	is flagged as an error by the compiler. Some additional rules affect how useful the register modifier is. Because 
	the number of
	registers is limited, and because some registers can hold only certain types of data (such as pointers or floating-point
	numbers),
	the number and types of register modifiers that will actually have any effect are dependent on what machine the program 
	will run on. 
	Any additional register modifiers are silently ignored by the compiler. 
	Also, in some cases, it might actually be slower to keep a variable in a register because that register then becomes
	unavailable for 		other purposes or because the variable isn’t used enough to justify the overhead of 
	loading and storing it. 
	So when should the register modifier be used? The answer is never, with most modern compilers. Early C compilers did not
	keep any variables in registers unless directed to do so, and the register modifier was a valuable addition to the 
	language. C compiler design 		has advanced to the point, however, where the compiler will usually make better
	decisions than the programmer about which variables 		should be stored in registers. 
	In fact, many compilers actually ignore the register modifier, which is perfectly legal, because it is only a hint and
	not a directive.
//******************************************************************************************************************************
Notes:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Function::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
Notes:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::link list::::::::::::::::::::::::::::::::::::::::::::::::::::::::
Notes:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::ARRAY+STRING+POINTER:::::::::::::::::::::::::::::::::::::::::::::
=>collection of elements of same type in adjecent memory
int m[4]
-->access data by index
-->looping for data access
Note:-int a[]...error //it is userdefine data type, so compiler don't know the size
Some pionts
-----------
=>>>>>>> if you are declaring any pointer, which will hold the any kind of variable.
         int i;
	 int *ptr = &i;
	 int a[10];
	 int *ptr = a;
	 struct student v;
	 struct student *ptr = v;
	 struct student * v[5];
	 struct student * *ptr=v;



1> name of array represent base address of array.
2> a[i]<--->*(a+i)   //derefrence 
3>don't try to access beyond the size of array // size is 5 but u trying to access...a[5] it will give garbage value or some time 
//memory violation
4> if u want to pass array to function then better to pass base address..and size of array
       main()
       {
       		int a[10]={13,90};
       		sizeof(a)/sizeof(a[0]);
       		print(a,n)
       }
       print(int *a, int n)
       {
       	
       }
       	
5> %[^\n]s--->it will take any character except \n
6> memmove is use in overlapping area...instead of strcpy and strncpy
==>DMA---2d and 3d allocation 
1> array of pointer
2> pointer to array
1> array of pointer(not contigeous)
int ***a;
a=(int **)malloc(sizeof(int**));
for(i=0;i<2;i++)
{
	a[i]=(int*)malloc(3*sizeof(int*));
	for(j=0;j<3;j++)
	{
		a[i][j]=malloc(5*sizeof(int));
	}
}
2> pointer to array(contigeous memory)
-------------------
char (*p)[10];
p=calloc(5,10);//it will create 5 block of memory
for(i=0;i<5;i++)
{
	gets(p[i]);
}
--------------
Note:-for 2d and 3d array please check vector notes(1 page before DMA)
Notes:::::::::::::::::::::::::::::::::::::::::::::::::::DMA:::::::::::::::::::::::::::::::::::::::::::::::::::::::
Some Points
-----------
1-> On demand memory allocation(no shortage & no wastages)
2-> Run time memory allocation or variable sized
3-> if we are declered int a or int a[4]; then it is static or compile time memory allocation or fixed sized memory allocation
4-> In DMA we have to request to memory manager of OS by using malloc , calloc, realloc and free for releasing the resource
5-> memory leak--> for avoiding memory leak use free---
6-> danaling pointer-> if use are releasing the resource then better to assign with NULL pointer otherwise it will still point 
    to previous data.
7-> realloc(0,6)-------it is similer to malloc(5)
8-> realloc(ptr,0)-----it is similer to free(ptr)
9-> in all cases..it return (void*)---OS don't know which type of data we are using 
Q> why dyanling pointer problem not in static memory allocation + 


-----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------
:::::::::::::::::::::::::::::::::::::::::::::::::::::Structure::::::::::::::::::::::::::::::::::::::::::::::::
->user define data type which is capable to store related field of diffrent data type
some points
----------
1> name wise access in structure 
2> . operator use in structure to access it ex student.name
3> -> operator use to access member through pointer.
4> defination of struct info for compiler about it's properties
5> if you are not giving tag then you can't  create object of that structure within any function 
6> we can assign value of one structure into same structure variable only.ex--v1=v2
7> call by value......print(v1)-------------------print(struct st v1).
8> call by reference....print(&v1)................print(struct st *p).
9> hole in structure:---->member allignment----> structure padding
10> array is more  faster than structure:::in array all member present at equal distance 
11> nesting structure...
12> self reffrential structure..
13> typedef:::::typedef int INT;//(exiting user define)
14> typedef struct student
		{
			-----;
			-----;
		}ST;
		
15> typedef char int ---> worng
16> #define char int-----> right
17> union: it can only hold 1 member data..
  union A
  {
  	int a;
  	char b;
  	double g;
  
  }v;
  union A v={3,'A'}----> error u can initialized all member dada..
18> enum:::
enum E {a,b,c,d};-------------every enum variable is 4 byte
19> member are not declared

---Bit fild
#include <stdio.h>
#include <string.h>

/* define simple structure */
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;
 
int main( ) {

   printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %d\n", sizeof(status2));

   return 0;
}

-------------

#include <stdio.h>
#include <string.h>

struct {
   unsigned int age : 3;
} Age;

int main( ) {

   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}



http://www.c4learn.com/c-programming/c-structure-bit-manipulation/
------------------------------------------------------------------------------------------------------------------
Dynamic memory allocation limitation
------------------------------------
1> if you are deleting any recored then we have to move all recored in to forward direction
2> if memory not available in contigeous form then DAM will fails...
--------------------------------------------------------------
Note:-Both we can slove by link list
---> link list is data structure in which node one node is link to other node....where node is recored container.
   --> contigeous memory is not required..
--> In link list should not use realloc best way to allocate memory is malloc & free function.


Address binding:

https://www.cyberciti.biz/faq/linux-find-size-of-text-data-segment-bss-uninitialized-data/


-----------------------------------Interview and important que------------------------------



=> Compiling a C program:- Behind the Scenes:
http://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/

-------
cc -E test.c -o test.i
cc -S test.i -o test.s
cc -c test.s -o test.o

=> Difference between “int main()” and “int main(void)” in C/C++?

// Program 1 (Compiles and runs fine in C, but not in C++)
void fun() {  } 
int main(void)
{
    fun(10, "GfG", "GQ");
    return 0;
}
Run on IDE
The above program compiles and runs fine (See this), but the following program fails in compilation (see this)

// Program 2 (Fails in compilation in both C and C++)
void fun(void) {  }
int main(void)
{
    fun(10, "GfG", "GQ");
    return 0;
}

=> Is it fine to write “void main()” or “main()” in C/C++?
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Puzzel and program:

http://www.geeksforgeeks.org/c/


=================================
Bit wise operator based que
----------------------------
Test Bit-- 	(data>>bit)&1
Set Bit--- 	data|=(1<<bit)
Clear Bit- 	(data &=~(1<<bit))
compliment bit--data^=(1<<bit)


#include<stdio.h>
main()
{
     int v1 = 0x02;
     int v2 = 0x00,i;
     for(i = 0; i<16; i++)
     {
         v2 = v2|(((v1>>i)&1)<<i);
     }
     printf("%x\n", v2);
}
----------------------------------------
#include<stdio.h>
main()
{
    int bit_5 =0, bit_0=0, data = 0x20;
    bit_5 = (data>>5)&1;
    bit_0 = (data>>0)&1;
    if(!(bit_5 == bit_0))
    {
        data^= 1<<5;
        data^= 1<<0;
        printf("i am in if");

    }
    printf("%x",data);
}
-------------------------------------

Important fact of bitwise operator
http://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/

Important program on bitwise operator.
http://www.crazyforcode.com/bitwise-operators/
------------------------------------
Q=>how to check divisibal by 8 using bit wise operator.
So in order to check for divisibility by 8 you need to check if the three low order bits are all zero:

if (((x >> 3) << 3) == x)
  divisibleBy8 = true;
  
  
Q=> power of 2

bool IsPowerOfTwo(long x)
{
    return (x & (x - 1)) == 0;
}

For example for 4 ( 100) and 16(10000), we get following after subtracting 1
3 –> 011
15 –> 01111

So, if a number n is a power of 2 then bitwise & of n and n-1 will give zero. 
We can say n is a power of 2 or not based on value of n &(n-1).
  
Q=> Find the Maximum of Two Numbers Without Using if-else

/*Function to find minimum of x and y*/
int min(int x, int y)
{
  return y ^ ((x ^ y) & -(x < y));
}
  
/*Function to find maximum of x and y*/
int max(int x, int y)
{
  return x ^ ((x ^ y) & -(x < y));
}




String based fuction defination
Recursion based program and it's advantage
=> Que on Const and volatile qulifier

Ans: Global variables modified by an interrupt service routine outside the scope: For example,
a global variable can represent a data port (usually global pointer referred as memory mapped IO) which will be updated dynamically. 
The code reading data port must be declared as volatile in order to fetch latest data available at the port.
Failing to declare variable as volatile, the compiler will optimize the code in such a way that 
it will read the port only once and keeps using the same value in a temporary register to speed up the program (speed optimization).
In general, an ISR used to update these data port when there is an interrupt due to availability of new data

=> Why structure padding is required?


Const Qualifier in C
http://www.geeksforgeeks.org/const-qualifier-in-c/

----------------------------------
Q> Where we can use volatile qulifire
volatile int *ptr1 = 0x1000;
volatile int *ptr2 = 0x2000;
*ptr2 = *ptr1;

Memory Layout of C Programs
http://www.geeksforgeeks.org/memory-layout-of-c-program/
---
-> if we are writing char *ptr = "sonu"....memory of ptr will come from data section but "sonu" will go into text section.
-> if we are writing char * const ptr = "sonugggggggggggg"; then compiler will put it into text section
-> if variable local constant then it will put into test section that's why we can't change it...but golobal we can change...
bcz it will come from data section.
---
Check memory leak..
http://www.geeksforgeeks.org/how-to-deallocate-memory-without-using-free-in-c/
How free will come to know size of deallocation
http://www.geeksforgeeks.org/g-fact-88/
What is memory leak and how you can avoid it.
http://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/


Linked List
+++++++++++
Q> One before last node
NODE * temp = head;
while(temp && (temp-> link) && temp -> link->link)
   { 
      temp = temp ->link; 
   }

Using single pointer
Q> 5 before last

NODE * temp = head;
while(temp)
{
   temp =temp-> next;
   len++;
}
for(i=0;i<len-5;i++)
temp = temp->next;

Q> at mid---> using single pointer same as above
Traverse linked list using two pointers. Move one pointer by one and other pointer by two. 
When the fast pointer reaches end slow pointer will reach middle of the linked list.

void printMiddle(struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
 
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
    }
}
Nth before last node

Maintain two pointers – reference pointer and main pointer. Initialize both reference and main pointers to head.
First move reference pointer to n nodes from head. Now move both pointers one by one until reference pointer reaches end.
Now main pointer will point to nth node from the end. Return main pointer.


/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct node *head, int n)
{
  struct node *main_ptr = head;
  struct node *ref_ptr = head;
 
  int count = 0;
  if(head != NULL)
  {
     while( count < n )
     {
        if(ref_ptr == NULL)
        {
           printf("%d is greater than the no. of "
                    "nodes in list", n);
           return;
        }
        ref_ptr = ref_ptr->next;
        count++;
     } /* End of while*/
 
     while(ref_ptr != NULL)
     {
        main_ptr = main_ptr->next;
        ref_ptr  = ref_ptr->next;
     }
     printf("Node no. %d from last is %d ", 
              n, main_ptr->data);
  }
}


Structure, Array, pointer and union:

http://www.c4learn.com/c-programming/c-initializing-structure/


Q> calculate size of structure without sizeof structure.

#include<stdio.h>

struct
  {
  int num1,num2;
  char s1;
  int *ptr;
  int abc[5];
}a[2];

void main()
  {
  int start,last;
  start = &a[1].num1;
  last = &a[0].num1;
  printf("\nSize of Structure : %d Bytes",start-last);
}


_____________________________________________________________________
Quiz
----
http://quiz.geeksforgeeks.org/c-language-2/storage-classes/
http://quiz.geeksforgeeks.org/c-language-2/variable-declaration-and-scope/
http://quiz.geeksforgeeks.org/c-language-2/data-types/
http://quiz.geeksforgeeks.org/c-language-2/input-and-output/



+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Important Que
+++++++++++++
Q> How data will save in emmc from internet, when we download file from internet?


Q> How data will redirect to hardware, when we click save button from user application?

Q> Memory mapping for micro-controller (where a.out(hex code) will seat)?
Ans: http://8051-microcontrollers.blogspot.in/2013/01/memory-map.html#.WGTx_mf1o8o
https://www.physicsforums.com/threads/microcontroller-how-does-it-execute-a-program-and-how-does-hexadecimal-play-a-role.355680/
http://nptel.ac.in/courses/Webcourse-contents/IIT-KANPUR/microcontrollers/micro/ui/Course_home5_37.htm
Q> Memory mapping for a.out in PC or OS based system?
Ans:



        p         -- p
       *p         -- is a pointer
      (*p)[4]     -- to a 4-element array
     *(*p)[4]     -- of pointers
    (*(*p)[4])()  -- to functions 
int (*(*p)[4])(); -- returning int. 
-------------------------------------------

int (*p)(int)  ----------------> pointer to function


----------------------------------------------------------------------------------------------
-> creating C library.
hinding the implementation.
