# complete search algolithm

first, consider a problem of generating all subset from a set of n elements

recursive way

in the source code of complete search using recursion, here is how the program's flow :
```cpp
first call:
    powerset("abcd",1,"a") //this part include the current chara to subset
        powerset("abcd",2,"ab")
            powerset("abcd",3,"abc")
                powerset("abcd",4,"abcd") // base case 1 reached, then curr is printed which is curr = "abcd"
                powerset("abcd",4,"abc") //bc 2 same shi, but without including "d" cuz there's no + str[index]
            powerset("abcd",3,"ab")
                powerset("abcd",4,"abd") //bc 3
                powerset("abcd",4,"ab") //bc 4
        powerset("abcd",2,"a")
            powerset("abcd",3,"ac")
                powerset("abcd",4,"acd") //bc 5
                powerset("abcd",4,"ac") //bc 6
            powerset("abcd",3,"a")
                powerset("abcd",4,"ad") //bc 7
                powerset("abcd",4,"a") //bc 8

    powerset("abcd",1,"")  // this don't
        powerset("abcd",2,"b")
            powerset("abcd",3,"bc")
                powerset("abcd",4,"bcd") //bc 9
                powerset("abcd",4,"bc") //bc 10
            powerset("abcd",3,"b")
                powerset("abcd",4,"bd") //bc 11
                powerset("abcd",4,"b") //bc 12
        powerset("abcd",2,"")
            powerset("abcd",3,"c")
                powerset("abcd",4,"cd")// bc 13
                powerset("abcd",4,"c") //bc 14
            powerset("abcd",3,"")
                powerset("abcd",4,"d") //bc 15
                powerset("abcd",4,"") //bc 16
    
```

Ah, I see! You're thinking of the recursion as a kind of sequential process, where the first recursive call must finish before the second one is called. But in this case, recursion works in a branching way, meaning that both recursive calls can be executed independently of each other, even though they come one after the other in the code.

Key Idea:

In the recursive function, both calls are made at the same level of recursion, and they happen independently of each other. This is how recursion "branches" into multiple paths, even if they're part of the same recursive function call.

