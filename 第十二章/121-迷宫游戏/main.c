
#include <stdio.h>
void printMap(char map[6][6], int row, int col);
char lowerCase(char ch);
char input();
void move(char map[6][6], char ch);

// 定义全局变量
// 定义变量保存小人当前的位置
int currentRow = 1;
int currentCol = 1;
// 定义变量保存迷宫出口的位置(索引)
int endRow = 1;
int endCol = 5;

int main()
{
    /*
     * 需求: 要求用户输入w a s d控制小人走出迷宫
     w 向上走
     s 向下走
     a 向左走
     d 向右走

     ######
     #R #
     # ## #
     #  # #
     ##   #
     ######


     补充:
     1.以后翻转函数, 一定要编写说明的注释
     2.封装函数的时候, 一定要遵守单一原则
     什么是单一原则?
     一个函数只做一件事情
     */

    // 1.保存迷宫的地图
    char map[6][6] = {
        {'#', '#', '#', '#', '#', '#'},
        {'#', 'R', ' ', '#', ' ', ' '},
        {'#', ' ', '#', '#', ' ', '#'},
        {'#', ' ', ' ', '#', ' ', '#'},
        {'#', '#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#'}
    };
    // 2.计算二维数组的行数和列数
    /*
    // 得出了一个结论: sizeof(二维数组的名称) 得到的是二维数组所有占用的存储空间
    // 得出了一个结论: sizeof(二维数组[索引]) 得到的是一位数组所有占用的内存空间
    int size1 = sizeof(map);
    int size2 = sizeof(map[0]);
    printf("size1 = %i\n", size1);
    printf("size2 = %i\n", size2);
    */
    int row = sizeof(map) / sizeof(map[1]);
    int col = sizeof(map[0]);

    // 3.输出保存的迷宫地图
    /*
    for(int i = 0 ; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
    */
    printMap(map, row, col);
    /*
    // 3.提示用户输入
    printf("请输入w a s d其中一个字符, 控制小人走出迷宫\n");
    // 4.接收用户输入的数据
    char ch;
    scanf("%c", &ch);
    setbuf(stdin, NULL);
    // 5.大小写转换
    ch = lowerCase(ch);

    // 5.判断用户输入的方向
    switch(ch){
    case 'w':
        printf("向上走\n");
        break;
    case 's':
        printf("向下走\n");
        break;
    case 'a':
        printf("向左走\n");
        break;
    case 'd':
        printf("向右走\n");
        break;
    default:
        printf("不能识别\n\n");
    }
    */

    // 4.循环的控制小人移动
    //     当前行数 不等于 终点行数 ||  当前列数 不等于 终点列数
    while(currentRow != endRow || currentCol != endCol){
        // 4.1.接收用户输入的数据
        char ch = input();

        // 4.2.控制小人移动
        move(map, ch);

        // 4.3.移动完毕之后, 重新打印迷宫
        printMap(map, row, col);
    }

    // 5.游戏结束
    printf("恭喜您已经走出了迷宫\n");
    printf("想挑战高级难度, 请购买付费版本\n");
    return 0;
}
/**
 * @brief input 从控制台接收用户输入的数据
 * @return  接收到的数据
 */
char input(){
    // 3.提示用户输入
    printf("请输入w a s d其中一个字符, 控制小人走出迷宫\n");
    // 4.接收用户输入的数据
    char ch;
    scanf("%c", &ch);
    setbuf(stdin, NULL);
    // 5.大小写转换
    ch = lowerCase(ch);
}

/**
 * @brief move 控制小人移动
 * @param ch 方向对应的字符
 * @param currentRow 小人当前的位置
 * @param currentCol 小人当前的位置
 */
void move(char map[6][6], char ch){
    /*
     ######
     #R #
     # ## #
     #  # #
     ##   #
     ######
     */
//    printf("移动之前: currentRow = %i, currentCol = %i\n", currentRow, currentCol);
    switch(ch){
    case 'w':
        printf("向上走\n");
        // 判断是否能够移动
        if(map[currentRow - 1][currentCol] != '#'){
            map[currentRow][currentCol] = ' ';
            --currentRow;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 's':
        printf("向下走\n");
        if(map[currentRow + 1][currentCol] != '#'){
            map[currentRow][currentCol] = ' ';
            ++currentRow;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 'a':
        printf("向左走\n");
        if(map[currentRow][currentCol - 1] != '#'){
            map[currentRow][currentCol] = ' ';
            --currentCol;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 'd':
        printf("向右走\n");
        if(map[currentRow][currentCol + 1] != '#'){
            map[currentRow][currentCol] = ' ';
            ++currentCol;
            map[currentRow][currentCol] = 'R';
        }
        break;
    default:
        printf("不能识别\n\n");
    }
//    printf("移动之后: currentRow = %i, currentCol = %i\n", currentRow, currentCol);
}

/**
 * @brief lowerCase 大写字母转小写字母
 * @param ch 需要转换的大写字母
 * @return 转换只有的小写字母, 如果返回空, 代表转换失败
 */
char lowerCase(char ch){
    // 1.判断当前是否是小写字母
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    // 注意点: 不能直接编写else, 因为执行到else不一定是一个大写字母
    else if(ch >= 'A' && ch <= 'Z'){
        return ch + ('a' - 'A');
    }
    return ' ';
}

/**
 * @brief printMap 打印迷宫地图
 * @param map 需要打印的二维数组
 * @param row 二维数组的行数
 * @param col 二维数组的列数
 */
void printMap(char map[6][6], int row, int col){
    // 在Windows中清空上一次输出的内容
    system("cls");
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
