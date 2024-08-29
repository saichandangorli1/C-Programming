# CHAPTER 3 : CONDITIONAL INSTRUCTIONS

Sometims we order junk kfood if mom is not at home.

In C language , we use be able to excute intructions on a condition

## QUICK LINKS

- [DECISION MAKING INSTRUCITONS IN C](#decision-making-instrucitons-in-c)
- [IF-ELSE STATEMENT](#if-else-statement)
- [RELATIONAL OPERATORS IN C](#relational-operators-in-c)
- [LOGICAL INSTRUCTIONS IN C](#logical-instructions-in-c)
- [ELSE-IF LADDER](#else-if-ladder)
- [OPERATOR PRECEDENCE](#operator-precedence)
- [TERNARY OPERATORS](#ternary-operators)

## DECISION MAKING INSTRUCITONS IN C

- if-else statememnt

- switch statement

## IF-ELSE STATEMENT

Theh syntax of an if-else statement in C looks like:

```bash
if(condition){
    // Statement if condition is true
}
else{
// Statement if condition is false
}

```

### CODE EXMAPLE:

```bash
int age = 18;
if(age > 18){
    printf("your age is %d",age);
}
```

## RELATIONAL OPERATORS IN C

Relational operators are used to evaluate condiotions (true or false) inside the if statements.

Some examples of relational operators are:

- < (less than)

- \> (greater than)

- <= (less than equal to)

- \>= (greater than equal to)

- == (Equality operator)

- != (not equal to)

**_Important note : '=' is used for assignment whereas '==' is used for equality check._**

The condition can be any valid epession. In C a non-zero value is considered to be true.

## LOGICAL INSTRUCTIONS IN C

- && (Logical AND)

- || (Logical OR)

- ! (Logical NOT)

Three logical operators in C. These are read as 'AND','OR' and 'NOT'.

They are used to provide logic to our C program.

### USE OF LOGICAL OPERATORS:

1. && (AND) &rarr; is true whne both the conditions are true.

   a. "1 and 0" is evaluated as false.

   b. "1 and 1" is evaluated as true.

   c. "0 and 0" is evaluated as false.

2. || (OR) &rarr; is true when at least one of the condition is true

   a. "1 and 0" is evaluated as true.

   b. "1 and 1" is evaluated as true.

   c. "0 and 0" is evaluated as false.

3.! (NOT) &rarr; returns true if given false and false if gives true

    a. !(1 == 1) is evaluated as false.

    b. !(5 > 50) is evaluated as true.

As the number og condition sincreases, the level of the indentation increases. This reduces he readibitly. LOgical operators come to rescue in such cases.

## ELSE-IF LADDER

Instead of using multiple if statememts, we can also use else-if ladder along with it thus forming an if-else else-if ladder.

### CODE EXAMPLE

A typical if-else if-else ladder looks like:

```bash


if (/* condition */)
{
    /* code */
}
else if (/* condition */)
{
    /* code */
}
else
{
    /* code */
}
```

### IMPORTANT NOTE

1. Using the is-else if-else reduces indents.

2. The last "else" is optional.

3. Also there can be any number of "else-if".

4. Last else is executed only if conditions fail.

## OPERATOR PRECEDENCE

The following table lists the operator priority in C

| Priority | Operators |
| -------- | --------- |
| 1st      | !         |
| 2nd      | \* / %    |
| 3rd      | + -       |
| 4th      | <>,<=,>=  |
| 5th      | ==,!=     |
| 6th      | &&        |
| 7th      | 11        |
| 8th      | =         |

## TERNARY OPERATORS

A shorth and "if-else" can be written using conditional or ternary operator.

```bash
condition ? expression-if-true : expression-if-false

// #include <stdio.h>
// int main()
// {
//     int min, a = 5, b = 6;
//     min = (a < b) ? a : b;
//     printf("minimum : %d", min);
//     return 0;
// }


```
