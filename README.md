# CSCI_313 HW2 Question 4
### Author: James Deciutiis
## The Question: 
4) Create your own stack functions to do the following:
<br></br>
a. List all the elements in the stack
<br></br>
b. Iterate through the stack and change one of the values based on its position

## Methodology:
- For this question I decided to use the array implementation for the stack. 
- Using the stack implementation I was able to write a print function that simply just treversered and printed each element of the array backwards (first in first out) 
- To change a value based on position, I simply wrote a function that took an element, and an index position as parameters. With that, it was just a matter of going to the given position and rewriting its value.

## Print
```c++
//prints all of the elements of the stack out
void print(){
  for(int i = count - 1; i >= 0; i--){
    cout<< list[i] <<endl;
  }
}
```

## Insert
```c++
void changeElemAt(int index, const T& element){
 int cursor = 0;
 for(int i = count - 1; i>=0; i--){
  if(cursor == index){
   list[i] = element;
  }
  cursor++;
 }
}
```

## Compile 
```
g++ main.cpp -std=c++11 -o <desired_name_of_output>
```

## Closing thoughts
Through this question, I have found that when it comes to problems where you want work with a collections specific index, array based stacks seem to be the way to go.
