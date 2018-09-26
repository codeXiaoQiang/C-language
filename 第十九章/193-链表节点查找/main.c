#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; // 专门用于存储数据的
    struct node *next; // 专门用于实现链接的
} Node;
Node *createEmpty();
void  insertNode(Node *head, int num);
void printfList(Node *head);
void destroyList(Node *head);
int listLength(Node *head);
Node *findNode(Node* head, int key);
int main()
{
    // 1.创建一个空链表
    Node *head = createEmpty();

    // 2.给空链表添加一个节点
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 5);

    // 3.打印结果
//    printfList(head);

//    int len = listLength(head);
//    printf("len = %i\n", len);

    Node *node = findNode(head, 5);
    printf("data = %i\n", node->data);

    // 4.使用完链表记得销毁
    destroyList(head);
    return 0;
}
// 6.封装一个专门用于查找指定节点的函数
/**
 * @brief findNode 查找指定节点
 * @param head 链表的头指针
 * @param key 需要查找的key
 * @return 符合要求的节点, 如果找不到返回NULL
 */
Node *findNode(Node* head, int key){
    // 注意点: 头结点不需要查找
    head = head->next;
    while(head != NULL){
        // 判断当前节点保存的值是否是要查找的值
        if(head->data == key){
            return head;
        }else{
            head = head->next;
        }
    }
    return NULL;
}

// 5.封装一个专门用于计算链表长度的函数
int listLength(Node *head){
    // 1.定义变量记录节点的个数
    int count = 0;
    // 注意点: 头结点不要
    Node *cur = head->next;
    // 2.遍历统计节点个数
    while(cur != NULL){
        count++;
        cur = cur->next;
    }
    return count;
}

// 4.封装一个专门用于销毁链表的函数
/**
 * @brief destroyList 销毁链表
 * @param head 链表的头指针
 */
void destroyList(Node *head){
    Node *cur = NULL;
    while(head != NULL){
        cur = head->next;
        free(head);
        head = cur;
    }
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
