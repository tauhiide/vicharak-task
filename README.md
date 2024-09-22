# vicharak-recruit

Lexer : converts SimpleLang source code into tokens.
Parser : Build an abstarct Syntax Tree (AST) from the tokens
AST Design : Strcuture the AST to represent the code.
Code Generation : tranverse the AST to generate assembly code
Testing : Run the generated assembly code on 8 bit CPU simulator

Step 1:  Bulding the lexer
-> lexer is responsible for breaking SimpleLang code into recognizeable tokens(keywords, idnetifers, operators)
Token Structure : types of tokens -> such as keywords (int,if), operators (+,-,=), symbols (; , { , }).
Tokenization Logic : the lexer should read characters, identify tokens and return them.

Step 2: Parser Design - once lexer works correctly, we can move to parser, this will take the stream of tokens from the lexer and build an Abstract Syntaxt Tree(AST)
AST Node Strcture : defining structure for AST Node. Parse expressions (eg:a+b), Parse assignments (eg:a=b=10;), Parse conditionals (if statements).

Step 3: Code Generation
Once the AST is built, we will traverse it and generate assembly code. Code generator will visit each node and translate it into the assembly instrcutions for 8 bit CPU. Code generation will translate high level constructs into assembly instructions that the 8-bit CPU CAN EXCUTE.
