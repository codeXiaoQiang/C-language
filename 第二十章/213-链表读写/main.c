#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person{
    char name[8];
    int age;
    double height;
    struct person *next;
} Person;

Person *createEmpty();
void  insertPerson(Person *head, Person data);
void printfList(Person *head);
void saveList(Person *head, char *name);
Person *loadList(char *name);
int main()
{
//    // 1.创建一个空链表
//    Person *head = createEmpty();
//    // 2.往空链表中插入数据
//    insertPerson(head, (Person){"lnj", 18, 1.9});
//    insertPerson(head, (Person){"zs", 33, 1.65});
//    insertPerson(head, (Person){"ww", 45, 1.78});
//    // 3.增删改查操作
//    printfList(head);
//    // 4.将链表保存到文件中
//    saveList(head, "ps.it");
    // 5.从文件中读取链表
    Person *head = loadList("ps.it");
    printfList(head);
    // 6.增删改查操作
    return 0;
}

Person *loadList(char *name){

    // 0.创建一个空的链表
    Person *head = createEmpty();

    // 1.打开文件
    FILE *fp = fopen(name, "rb+");
    // 2.创建一个新节点
    Person p;
    while(fread(&p, sizeof(Person), 1, fp) > 0){
        insertPerson(head, p);
    }
    // 3.关闭打开的文件
    fclose(fp);

    // 4.返回加载好的链表
    return head;
}
/**
 * @brief saveList 将有效节点写入到文件
 * @param head 链表的头指针
 */
void saveList(Person *head, char *name){
    // 1.打开文件
    FILE *fp = fopen(name, "wb+");
    // 1.取出头节点的下一个节点
    Person *cur = head->next;
    while(cur != NULL){
        // 写入一个有效节点
        fwrite(cur, sizeof(Person), 1, fp);
        // 让当前节点往后移动
        cur = cur->next;
    }
    // 2.关闭打开的文件
    fclose(fp);
}

/**
 * @brief printfList 遍历链表
 * @param head 链表的头指针
 */
void printfList(Person *head){
    // 1.取出头节点的下一个节点
    Person *cur = head->next;
    // 2.判断是否为NULL, 如果不为NULL就开始遍历
    while(cur != NULL){
        // 2.1取出当前节点的数据, 打印
        printf("name = %s\n", cur->name);
        printf("age = %i\n", cur->age);
        printf("height = %lf\n", cur->height);
        // 2.2让当前节点往后移动
        cur = cur->next;
    }
}

/**
 * @brief insertPerson 给链表插入新的节点
 * @param head 链表的头指针
 * @param data 需要新节点保存的数据
 */
void  insertPerson(Person *head, Person data){
    // 1.创建一个新的节点
    Person *node = (Person *)malloc(sizeof(Person));
    // 2.将数据保存到新节点中
    int i;
    for(i = 0; i < strlen(data.name); i++){
        node->name[i] = data.name[i];
    }
    node->name[i] = '\0';
    node->age = data.age;
    node->height = data.height;

    // 3.进行插入
    // 3.1让新节点的下一个节点 等于 头节点的下一个节点
    node->next = head->next;
    // 3.2让头结点的下一个节点 等于 新节点
    head->next = node;
}

/**
 * @brief creaateEmpty 创建空链表
 * @return 链表的头指针
 */
Person *createEmpty(){
    // 1.定义头指针
    Person *head = NULL;
    // 2.创建一个空节点, 并且赋值给头指针
    head = (Person *)malloc(sizeof(Person));
    head->next = NULL;
    // 3.返回头指针
    return head;
}
