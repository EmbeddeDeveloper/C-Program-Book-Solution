/*
When to Use Call by Value and When to use Call by Reference?

One advantage of the call by reference method is that it is
using pointers, so there is no doubling of the memory used
by the variables (as with the copy of the call by value method).
This is of course great, lowering the memory footprint is always
a good thing. So why don’t we just make all the parameters call by reference?

There are two reasons why this is not a good idea and that you
(the programmer) need to choose between call by value and call
by reference. The reason are: side effects and privacy. Unwanted
side effects are usually caused by inadvertently changes that
are made to a call by reference parameter. Also in most cases
you want the data to be private and that someone calling a
function only be able to change if you want it. So it is better
to use a call by value by default and only use call by reference
if data changes are expected.

let’s take a look at what is happening in this call-by-value source
code example. In the main() we create a integer that has the value of
10. We print some information at every stage, beginning by printing
our variable a. Then function call_by_value is called and we input
the variable a. This variable (a) is then copied to the function
variable x. In the function we add 10 to x (and also call some print
statements). Then when the next statement is called in main() the value
of variable a is printed. We can see that the value of variable a isn’t
changed by the call of the function call_by_value().

Let’s explain what is happening in this source code example. We start with
an integer b that has the value 10. The function call_by_reference() is
called and the address of the variable b is passed to this function. Inside
the function there is some before and after print statement done and there
is 10 added to the value at the memory pointed by y. Therefore at the end
of the function the value is 20. Then in main() we again print the variable b
and as you can see the value is changed (as expected) to 20. */

#include <stdio.h>

void call_by_value(int x) {
	printf("Inside call_by_value x = %d before adding 10.\n", x);
	x += 10;
	printf("Inside call_by_value x = %d after adding 10.\n", x);
}

void call_by_reference(int *y) {
	printf("Inside call_by_reference y = %d before adding 10.\n", *y);
	(*y) += 10;
	printf("Inside call_by_reference y = %d after adding 10.\n", *y);
}

int main() {
	int a=10;
	int b=10;

	printf("\n-----------call_by_reference---------------------\n\n");
	printf("b = %d before function call_by_reference.\n", b);
	call_by_reference(&b);
	printf("b = %d after function call_by_reference.\n", b);

	printf("\n-----------call_by_value-------------------------\n\n");
	printf("a = %d before function call_by_value.\n", a);
	call_by_value(a);
	printf("a = %d after function call_by_value.\n", a);

	return 0;
}

