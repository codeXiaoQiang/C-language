
#include <stdio.h>
void printMap(char map[6][6], int row, int col);
char lowerCase(char ch);
char input();
void move(char map[6][6], char ch);

// ����ȫ�ֱ���
// �����������С�˵�ǰ��λ��
int currentRow = 1;
int currentCol = 1;
// ������������Թ����ڵ�λ��(����)
int endRow = 1;
int endCol = 5;

int main()
{
    /*
     * ����: Ҫ���û�����w a s d����С���߳��Թ�
     w ������
     s ������
     a ������
     d ������

     ######
     #R #
     # ## #
     #  # #
     ##   #
     ######


     ����:
     1.�Ժ�ת����, һ��Ҫ��д˵����ע��
     2.��װ������ʱ��, һ��Ҫ���ص�һԭ��
     ʲô�ǵ�һԭ��?
     һ������ֻ��һ������
     */

    // 1.�����Թ��ĵ�ͼ
    char map[6][6] = {
        {'#', '#', '#', '#', '#', '#'},
        {'#', 'R', ' ', '#', ' ', ' '},
        {'#', ' ', '#', '#', ' ', '#'},
        {'#', ' ', ' ', '#', ' ', '#'},
        {'#', '#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#'}
    };
    // 2.�����ά���������������
    /*
    // �ó���һ������: sizeof(��ά���������) �õ����Ƕ�ά��������ռ�õĴ洢�ռ�
    // �ó���һ������: sizeof(��ά����[����]) �õ�����һλ��������ռ�õ��ڴ�ռ�
    int size1 = sizeof(map);
    int size2 = sizeof(map[0]);
    printf("size1 = %i\n", size1);
    printf("size2 = %i\n", size2);
    */
    int row = sizeof(map) / sizeof(map[1]);
    int col = sizeof(map[0]);

    // 3.���������Թ���ͼ
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
    // 3.��ʾ�û�����
    printf("������w a s d����һ���ַ�, ����С���߳��Թ�\n");
    // 4.�����û����������
    char ch;
    scanf("%c", &ch);
    setbuf(stdin, NULL);
    // 5.��Сдת��
    ch = lowerCase(ch);

    // 5.�ж��û�����ķ���
    switch(ch){
    case 'w':
        printf("������\n");
        break;
    case 's':
        printf("������\n");
        break;
    case 'a':
        printf("������\n");
        break;
    case 'd':
        printf("������\n");
        break;
    default:
        printf("����ʶ��\n\n");
    }
    */

    // 4.ѭ���Ŀ���С���ƶ�
    //     ��ǰ���� ������ �յ����� ||  ��ǰ���� ������ �յ�����
    while(currentRow != endRow || currentCol != endCol){
        // 4.1.�����û����������
        char ch = input();

        // 4.2.����С���ƶ�
        move(map, ch);

        // 4.3.�ƶ����֮��, ���´�ӡ�Թ�
        printMap(map, row, col);
    }

    // 5.��Ϸ����
    printf("��ϲ���Ѿ��߳����Թ�\n");
    printf("����ս�߼��Ѷ�, �빺�򸶷Ѱ汾\n");
    return 0;
}
/**
 * @brief input �ӿ���̨�����û����������
 * @return  ���յ�������
 */
char input(){
    // 3.��ʾ�û�����
    printf("������w a s d����һ���ַ�, ����С���߳��Թ�\n");
    // 4.�����û����������
    char ch;
    scanf("%c", &ch);
    setbuf(stdin, NULL);
    // 5.��Сдת��
    ch = lowerCase(ch);
}

/**
 * @brief move ����С���ƶ�
 * @param ch �����Ӧ���ַ�
 * @param currentRow С�˵�ǰ��λ��
 * @param currentCol С�˵�ǰ��λ��
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
//    printf("�ƶ�֮ǰ: currentRow = %i, currentCol = %i\n", currentRow, currentCol);
    switch(ch){
    case 'w':
        printf("������\n");
        // �ж��Ƿ��ܹ��ƶ�
        if(map[currentRow - 1][currentCol] != '#'){
            map[currentRow][currentCol] = ' ';
            --currentRow;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 's':
        printf("������\n");
        if(map[currentRow + 1][currentCol] != '#'){
            map[currentRow][currentCol] = ' ';
            ++currentRow;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 'a':
        printf("������\n");
        if(map[currentRow][currentCol - 1] != '#'){
            map[currentRow][currentCol] = ' ';
            --currentCol;
            map[currentRow][currentCol] = 'R';
        }
        break;
    case 'd':
        printf("������\n");
        if(map[currentRow][currentCol + 1] != '#'){
            map[currentRow][currentCol] = ' ';
            ++currentCol;
            map[currentRow][currentCol] = 'R';
        }
        break;
    default:
        printf("����ʶ��\n\n");
    }
//    printf("�ƶ�֮��: currentRow = %i, currentCol = %i\n", currentRow, currentCol);
}

/**
 * @brief lowerCase ��д��ĸתСд��ĸ
 * @param ch ��Ҫת���Ĵ�д��ĸ
 * @return ת��ֻ�е�Сд��ĸ, ������ؿ�, ����ת��ʧ��
 */
char lowerCase(char ch){
    // 1.�жϵ�ǰ�Ƿ���Сд��ĸ
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    // ע���: ����ֱ�ӱ�дelse, ��Ϊִ�е�else��һ����һ����д��ĸ
    else if(ch >= 'A' && ch <= 'Z'){
        return ch + ('a' - 'A');
    }
    return ' ';
}

/**
 * @brief printMap ��ӡ�Թ���ͼ
 * @param map ��Ҫ��ӡ�Ķ�ά����
 * @param row ��ά���������
 * @param col ��ά���������
 */
void printMap(char map[6][6], int row, int col){
    // ��Windows�������һ�����������
    system("cls");
    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
