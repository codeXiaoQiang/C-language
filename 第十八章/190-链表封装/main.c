#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; // 专门用于存储数据的
    struct node *next; // 专门用于实现链接的
} Node;
Node *createEmpty();
void  insertNode(Node *head, int num);
void printfList(Node *head);
int main()
{
    // 1.创建一个空链表
    Node *head = createEmpty();
//    printf("data = %i\n", head->data);
//    printf("next = %p\n", head->next);

    // 2.给空链表添加一个节点
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);

    // 3.打印结果
    printfList(head);
    return 0;
}
// 3.封装一个专门用于遍历链表的函数
/**
 * @brief printfList 遍历链表
 * @param head 链表的头指针
 */
void printfList(Node *head){
    // 1.取出头节点的下一个节点
    Node *cur = head->next;
    // 2.判断是否为NULL, 如果不为NULL就开始遍历
    while(cur != NULL){
        // 2.1取出当前节点的数据, 打印
        printf("data = %i\n", cur->data);
        // 2.2让当前节点往后移动
        cur = cur->next;
    }
}
// 2.封装一个专门用于插入节点的函数
/**
 * @brief insertNode 给链表插入新的节点
 * @param head 链表的头指针
 * @param data 需要新节点保存的数据
 */
void  insertNode(Node *head, int num){
    // 1.创建一个新的节点
    Node *node = (Node *)malloc(sizeof(Node));
    // 2.将数据保存到新节点中
    node->data = num;

    // 3.进行插入
    // 3.1让新节点的下一个节点 等于 头节点的下一个节点
    node->next = head->next;
    // 3.2让头结点的下一个节点 等于 新节点
    head->next = node;
}
// 1.封装一个专门用于创建空链表的函数
/**
 * @brief creaateEmpty 创建空链表
 * @return 链表的头指针
 */
Node *createEmpty(){
    // 1.定义头指针
    Node *head = NULL;
    // 2.创建一个空节点, 并且赋值给头指针
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    // 3.返回头指针
    return head;
}
