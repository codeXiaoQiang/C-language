#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; // 专门用于存储数据的
    struct node *next; // 专门用于实现链接的
} Node;
Node *createList();
void printList(Node *head);
int main()
{
   /*
    * 动态创建链表
    * 尾插法
    * 规则:
    * 1.让新节点的下一个节点等于头结点的下一个节点
    * 2.让头结点的下一个节点等于新节点
    */
    Node *head = createList();
    printList(head);

    return 0;
}
/**
 * @brief printList 遍历链表
 * @param head 链表的头指针
 */
void printList(Node *head){
    // 注意点: 头结点对我们来说没用, 因为头结点中没有保存任何数据
    // 所以我们需要取到头结点的下一个节点
    while(head->next != NULL){
        // 修改指针的指向, 每次循环先后一个节点移动
        head = head->next;
        printf("data = %i\n", head->data);
    }
}
/**
 * @brief createList 创建动态链表
 * @return  返回创建好的动态链表的头指针
 */
Node *createList(){
    // 1.创建一个空链表
    // 注意点: malloc有可能分配失败
    Node *head = (Node *)malloc(sizeof(Node));
    if(head == NULL){
        exit(-1); // 直接退出程序
    }
    head->next = NULL;

    // 2.接收需要保存的数据
    int num = -1;
    printf("请输入要保存的数据\n");
    scanf("%i", &num); // 1

    // 3.定义变量记录新节点的上一个节点
    Node *pre = head;
    // 3.根据接收的数据创建行新的节点
    while(num != -1){

        // 3.1创建一个节点
        Node *node = (Node *)malloc(sizeof(Node));
        // 3.2将数据保存到节点中
        node->data = num;
        node->next = NULL;

       // 3.3将新节点添加到上一个节点后面
        pre->next = node;
       // 3.4让新节点成为下一个节点的上一个节点
        pre = node;

        // 3.4再次提示用户输入数据
        printf("请输入要保存的数据\n");
        scanf("%i", &num); // 3
    }

    return head;
}


