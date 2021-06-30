type of operator on the basis of number of operands:
- unary operator (single operand)
- binary operator (two operand)
- ternary operator (more than two)

type of operator on the basis of use case:
- Arithmetic Operator   
    unary +
    unary -     a = 4, b = -a; b = -4
    binary +    addition               a = 10, b = 20, a + b = 30
    binary -    subtraction            a = 3, b = 4 , a - b = -1
    binary *    multiplication         a = 4, b = 7, a * b = 28
    /           division               a = 4, b = 2, a / b = 2
    %           modulus (remainder)    a = 7, b = 4, a % b = 3 

- Relational Operator (comparison operator)
    <    less than           if left hand side value is less than right hand side value then TRUE otherwise FALSE                
            int a = 10, b = 30;
            a < b   => TRUE
            b < a   => FALSE
    <=   less or equal       if left hand side value is less or equal than right hand side value then TRUE otherwise FALSE
            int a = 10, b = 30, c = 10;
            a <= b   => TRUE
            a <= c  => TRUE
            b <= a   => FALSE
    >    greater than        if left hand side value is greater than right hand side value then TRUE otherwise FALSE
            int a = 10, b = 30;
            a > b   => FALSE
            b > a   => TRUE
    >=   greater or equal    if left hand side value is greater or equal than right hand side value then TRUE otherwise FALSE
            int a = 10, b = 30, c = 10;
            a >= b   => FALSE
            a >= c  => TRUE
            b >= a   => TRUE
    ==   equal               if both left and right hand side are equal then TRUE otherwise FALSE
            int a = 10, b = 30, c = 10;
            a == b   => FALSE
            a == c   => TRUE
    !=   not equal           if both left and right hand side are not equal then TRUE otherwise FALSE
            int a = 10, b = 30, c = 10;
            a != b   => TRUE
            a != c   => FALSE

- Assignment Operator
        =       equal symbol   assigns value from right hand side to variable on left hand side
        variable = variable or literals
                int a, b;
                a = 10;         //valid
                10 = a; // invalid
                b = a;  //valid
                char c;
                c = 'q';        //valid

        shorthand assignment operator:
               int a = 10, b;
               a = a % b;       // a = 10 + 1   a = 11
        +=, -=, *=, /=, %=
                int a = 10, b;
                a = b + c;
                a = a + b;
                a += b;         
                a += 1;         // a = a + 1 
                a += b;         // valid      a = a + b
                1 += a;         //invalid       
                b += a;         // valid        b = b + a
                a -= b;         // a = a - b
                b -= a;         // b = b - a
                a /= 2;         // a = a/2;     a = 10/2        a = 5
                a %= 2;         // a = a%2;     a = 10%2        a = 0
                a *= 2;         // a = a*2;     a = 10*2        a = 20

                a = a + b       a += b      ok          a = a + b   
                a = b + a       a += b      ok          a = a + b
                a = 10, b = 20
                a = a - b  -10      a -= b                  a = a - b   -10
                a = b - a   10    a -= b                  a = a - b     -10   invalid (cannot be changed to short hand)
                a = a * b  200     a *= b       a = a * b
                a = b * a  200     a *= b       a = a * b
                a = a / b  0.5     a /= b       a = a / b       0.5
                a = b / a   2    invalid        a = a / b       0.5
                a = a % b    10   a %= b        a = a % b       10
                a = b % a   0    invalid        a = a % b       10
                a = b + c       invalid

- Logical or Boolean Operator
        &&      logical AND     if both hand side are true then TRUE otherwise FALSE
                int a=10, b=20, c=30;
                a && b    //invalid
                (a<b) && (b<c)          TRUE && TRUE   => TRUE 
                (a>b) && (b<c)          FALSE && TRUE   => FALSE
                (a<b) && (b>c)          TRUE && FALSE   => FALSE
                (a>b) && (b>c)          FALSE && FALSE   => FALSE
                (a<b) && (b<c) && (a<c) TRUE && TRUE && TRUE    TRUE && TRUE  => TRUE
       
        ||      logical OR      if both hand side are false then FALSE otherwise TRUE
                int a=5, b=2, c=3;
                a || b    //invalid
                (a<b) || (b<c)          FALSE || TRUE   => TRUE 
                (a>b) || (b<c)          TRUE || TRUE    => TRUE
                (a<b) || (b>c)          FALSE || FALSE  => FALSE
                (a>b) || (b>c)          TRUE || FALSE   => TRUE
                (a<b) || (b<c) || (a<c) FALSE || TRUE || FALSE    TRUE || FALSE  => TRUE

        !       logical NOT   
                int a=5, b=2, c=3;
                a ! b    //invalid
                (a<b) ! (b<c) // invalid
                !a //invalid

                !(a<b)    !FALSE  => TRUE      
                !(a>b)    !TRUE   => FALSE   

- Increment/Decrement Operator (Unary)
        increases or decreases value of operand by 1
        ++      increment       increases value of operand by 1
                int a;
                a = 20;
                a += 3;         a = a + 3;
                a++;       postfix increment     // a = a + 1   first implement then increment
                ++a;       prefix increment      // a = a + 1    first increment then implement

        --      decrement       decreases value of operand by 1
                int a;
                a = 20;
                a -= 3;         a = a - 3;
                a--;       postfix decrement     // a = a - 1   first implement then decrement
                --a;       prefix decrement     // a = a - 1    first decrement then implement

- Bitwise Operator
        - binary operator (two operands)
        - convert operands to bit(binary value (number system))
        - 20    ->      10100 (5 bit)
        - bit by bit
        - Bitwise AND           &
                int a, b, c;                            
                a = 14;                 01110
                b = 25;                &11001
                c = a & b;     c = 8    01000           
               
        
        - Bitwise OR 
                int a, b, c;                            
                a = 14;                 01110
                b = 25;                |11001          
                c = a | b;     c = 31   11111    
        
        - Bitwise XOR        
                int a, b, c;                            
                a = 14;                 01110
                b = 25;                ^11001          
                c = a ^ b;     c = 23   10111   
        
        - Left Shift and Right Shift    <<, >> 
                int a;
                a = 10;                1010
                a<<3                1010000            
                a>>3                   1010
                                       0001 

- Special Operators (sizeof, comma)
        - comma
                234056  
                234060
                234064
                234068
                int a,b,c;
                printf("%d %d",a,b,c);
                for(i=0,j=0,k=0;i<10;i++)
        
        - sizeof
                - variable or datatype size
                - sizeof(arg)

- Ternary or conditional Operator
        - decision making problem
        - condition checking problem
        - output true or false
        - one line alternative for if-else
        - use two symbols ? and :
        - consist of three blocks

        syntax:
                expression ? expression or statement : expression statement;

                condition_check ? true_statement : false_statement ;


        - nested ternary operators

        condition ? [ condition ? true_st : false_st] | statement : [condition ? true_st : false_st] | statement;

        condition ? [ condition ? true_st : false_st] : [condition ? true_st : false_st];
        condition ? [ condition ? true_st : false_st] : statement;
        condition ? statement : [condition ? true_st : false_st] ;
        condition ? statement : statement;



- Operator precedence rule
        - different types of operator
        - all operators have precedence (priority) value
        - 1,2,3,4,5     highest -> lowest
       result = num1 + num2 / num3 * (num4 - num5)
- Operator associativity rule
        - operators having same precedence level (value)
        - left to right or right to left
        +-      */
        num1 + num2 - num3 + num4 - num5 * num6 / num7
        2 + 4 - 1 + 6 - 7 * 9 / 3
        2 + 4 - 1 + 6 - 63 / 3
        2 + 4 - 1 + 6 - 21
        6 - 1 + 6 - 21
        5 + 6 -21
        11 - 21
        -10




