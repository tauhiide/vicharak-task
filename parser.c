typedef struct ASTNode {
TokenType type;
struct ASTNode *left,*right;
char value[MAX_TOKEN_LEN];
}ASTNode;
//to create New ASTNode
ASTNode* createNode(TokenType type, const char* value)
{
ASTNode node = (ASTNode)malloc(sizeof(ASTNode));
node->type = type;
node->left = NULL;
node->right = NULL;
strcpy(node->value, value);
return node;
}
ASTNode* parseExpression(){
  Token token;
  getNextToken(file,&token);
  ASTNode* node  = createNode(token.type,token.text);
  getNextToken(file,&token);
  if(token.type == TOKEN_PLUS || token.type == TOKEN_MINUS){
    ASTNode* opNode  = createNode(token.type,token.text);
    opNode->left = node;
    getNextToken(file,&token);
    opNode->right = createNode(token.type,token.text);
    return opNode;
  }
return node;
}
ASTNode* parseAssignment(){
   Token token;
  getNextToken(file,&token);
  ASTNode* varNode  = createNode(token.type,token.text);
  getNextToken(file,&token);
  if(token.type == TOKEN_ASSIGN){
    ASTNode* assignNode  = createNode(token.type,token.text);
    assignNode->left = varNode;
    assignNode->right = parseExpression();
    return assignNode;
  }
return NULL;
}
ASTNode* parseCondition(){
   Token token;
  getNextToken(file,&token);
  ASTNode* ifNode  = createNode(TOKEN_IF,"if");
  getNextToken(file,&token);
  ifNode-> left = parseExpression();
  getNextToken(file,&token);
  ifNode->right = parseExpression();
return ifNode;
}
