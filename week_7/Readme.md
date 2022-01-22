In the following code snippet, the `modulus` operator can be quite an expensive operation. How would you implement your own modulus operator?

```
for(int i = 0; i <=100; i++){
        if(i % 2){
            cout << i << "\n";
        }
}
```

I offered the following solution:

```
 bool modulo(int n){
     return n & 0x01; 
 }
```

I vividly remember this question because I was quite frazzled due to external factors before the interview. I fumbled my way around for the first 5 minutes before settling into the interview.

The other questions I remember include:

1. Tell me about a hardware / software issue that you had to troubleshoot and the approach you had to take to solving the problem. 
2. What is your workstyle? When do you consider a project to be complete?
