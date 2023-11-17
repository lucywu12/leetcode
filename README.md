# leetcode
Where I will track my programming practice (leetcode, ICPC, etc.) to stay accountable. Follow my journey here!



11/16
- Game of Life (on LC): SOLVED (0 ms, 7.24 mb)
I liked that I made a separate function to take care of the live/dead conditions.
I also think this is much better than the time I had to program it in MATLB,
although some parts of it I feel are slightly redundant.
Big mistake was not declaring a tmp array since all values should be updated at the very end.
Another big mistake was not declaring an else case inside a for loop (value wasn't getting updated...)
Other than that it was an enjoyable exercise

- Queens Attack Kings (on LC): ATTEMPTED
This one was a lot harder for me for some reason
I think I struggled most with the vector push_back because I needed a way to store the most optimal
but in a vector there's not really a good way to overwrite it once it's in there
Logically, this was similar to GOL so I kind of employed a similar edge case logic there

11/14
- Max Distance: SOLVED (62 ms, 100 kb)
I ran into a couple of compilation errors initially, but I eventually figured it out.
I malloced arrays since you can't really initialize an array of n in C++,
but I wonder if there are other ways to solve this.
There were also faster runtimes, but I wonder if this had to do with malloc as well
or if there is something else I can try.