Signals are only hard because of its incompatibility with certain functions like printf - they can result in undefined behaviour.

And I hate writing directly to STDOUT.
Instead, I found that as long as certain rules are respected when working with printf(), then the chance of undefined behaviour
should largely be minimised.

1) Only use lvalues inside printf (No rvalues such as return values from functions or expressions)
	E.g
	Change printf("%d", getpid()); to
	       printf("%d", precomputedPIDVariable);

Secondly, setitimer is bullshit and I have only been able to get it to work with threads. Just use a while loop and gettimeofday to
run a certain program for a given amount of seconds.
