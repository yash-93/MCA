int top = -1, MAXSIZE = 8, stackArr[20];

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

int isFull(){
    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

void push(int data){
    if(!isFull()){
        top += 1;
        stackArr[top] = data;
    }else{
        printf("Could not insert data, Stack is full");
    }
}

int pop(){
    int data;
    if(!isEmpty()){
        data = stackArr[top];
        top -= 1;
        return data;
    }else{
        printf("Could not retrieve data, Stack is empty");
    }
}
